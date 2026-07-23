/*
 * XREFs of PopPowerButtonWorkCallback @ 0x140301080
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x1401137EC (KeDisableTimer2.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     KeInitializeIRTimer @ 0x140181154 (KeInitializeIRTimer.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopRecordPhysicalPowerButton @ 0x1408A1D6C (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1408AFEBC (PopDiagTracePowerButtonBugcheck.c)
 *     PopPublishPowerButtonState @ 0x1408B3D04 (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408B3D6C (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopRecordPoBlackboxInformation @ 0x1408BA36C (PopRecordPoBlackboxInformation.c)
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
    v1 = qword_1404389B8;
    v10 = qword_1404389B8;
    KxReleaseSpinLock(&PopPowerButtonHold);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v0);
    v4 = HIDWORD(v10);
    if ( (dword_1404389C0 & 1) != 0 && ((v1 & 1) == 0 || HIDWORD(v10) != dword_1404389C4) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_1404389C0 = 0;
      byte_140438A28 = 0;
      PopPublishPowerButtonState(&dword_1404389C0);
      KeDisableTimer2((__int64)&unk_140438908, 1, 1, 0LL);
    }
    if ( (v1 & 1) != 0 )
    {
      if ( (dword_1404389C0 & 1) == 0 )
      {
        LOBYTE(v2) = 1;
        PopRecordPhysicalPowerButton(v2);
        dword_1404389C4 = v4;
        dword_1404389C8 = PopQueryPowerButtonBugcheckEnabled();
        v9 = 65544;
        KeInitializeIRTimer(
          (__int64)&unk_140438908,
          (__int64)PopPowerButtonTimerCallback,
          v4,
          (unsigned __int8 *)&v9,
          2);
        KeSetTimer2((__int64)&unk_140438908, -10000000LL, 10000000LL, 0LL);
      }
      dword_1404389C0 = v1;
      PopPublishPowerButtonState(&dword_1404389C0);
      if ( v1 >> 1 >= 0x1B58 )
      {
        if ( PopAcpiPdttSupportEnabled )
          ((void (__fastcall *)(_QWORD))qword_140424738)(0LL);
        PopDiagTracePowerButtonBugcheck(v1 >> 1);
        PopRecordPoBlackboxInformation();
        if ( dword_1404389C8 )
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
  while ( __PAIR64__(v4, v1) != qword_1404389B8 );
  _InterlockedExchange(&dword_1404389B0, 0);
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
