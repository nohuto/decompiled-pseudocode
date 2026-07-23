/*
 * XREFs of PopPowerButtonWorkCallback @ 0x1403015D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x140113F5C (KeDisableTimer2.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     KeInitializeIRTimer @ 0x140180A64 (KeInitializeIRTimer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopRecordPhysicalPowerButton @ 0x1408A252C (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1408B065C (PopDiagTracePowerButtonBugcheck.c)
 *     PopPublishPowerButtonState @ 0x1408B4434 (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408B449C (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopRecordPoBlackboxInformation @ 0x1408BAA9C (PopRecordPoBlackboxInformation.c)
 */

__int64 PopPowerButtonWorkCallback()
{
  KIRQL v0; // di
  unsigned int v1; // ebx
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v4; // rsi
  struct _KPRCB *v5; // rcx
  __int64 result; // rax
  ULONG ActiveConsoleId; // eax
  ULONG_PTR SessionById; // rax
  int v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h]
  _BYTE v11[48]; // [rsp+40h] [rbp-48h] BYREF

  v9 = 0;
  memset(v11, 0, sizeof(v11));
  v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    v1 = qword_140438A38;
    v10 = qword_140438A38;
    KxReleaseSpinLock(&PopPowerButtonHold);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v0);
    v4 = HIDWORD(v10);
    if ( (dword_140438A40 & 1) != 0 && ((v1 & 1) == 0 || HIDWORD(v10) != dword_140438A44) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140438A40 = 0;
      byte_140438AA8 = 0;
      PopPublishPowerButtonState(&dword_140438A40);
      KeDisableTimer2((__int64)&unk_140438988, 1, 1, 0LL);
    }
    if ( (v1 & 1) != 0 )
    {
      if ( (dword_140438A40 & 1) == 0 )
      {
        LOBYTE(v2) = 1;
        PopRecordPhysicalPowerButton(v2);
        dword_140438A44 = v4;
        dword_140438A48 = PopQueryPowerButtonBugcheckEnabled();
        v9 = 65544;
        KeInitializeIRTimer(
          (__int64)&unk_140438988,
          (__int64)PopPowerButtonTimerCallback,
          v4,
          (unsigned __int8 *)&v9,
          2);
        KeSetTimer2((__int64)&unk_140438988, -10000000LL, 10000000LL, 0LL);
      }
      dword_140438A40 = v1;
      PopPublishPowerButtonState(&dword_140438A40);
      if ( v1 >> 1 >= 0x1B58 )
      {
        if ( PopAcpiPdttSupportEnabled )
          ((void (__fastcall *)(_QWORD))qword_140424738)(0LL);
        PopDiagTracePowerButtonBugcheck(v1 >> 1);
        PopRecordPoBlackboxInformation();
        if ( dword_140438A48 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          SessionById = MmGetSessionById(ActiveConsoleId);
          if ( SessionById && (int)MmAttachSession(SessionById) < 0 )
            DbgPrintEx(0x92u, 3u, "Unable to attach to active session\n");
          KeBugCheckEx(0x1C8u, (unsigned __int64)v1 >> 1, (ULONG_PTR)&PopPowerButtonTriageBlock, 0LL, 0LL);
        }
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v4, v1) != qword_140438A38 );
  _InterlockedExchange(&dword_140438A30, 0);
  KxReleaseSpinLock(&PopPowerButtonHold);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
  {
    v5 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v5->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v5);
  }
  result = v0;
  __writecr8(v0);
  return result;
}
