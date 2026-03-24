/*
 * XREFs of PopPowerButtonWorkCallback @ 0x1402E47A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     MmGetSessionById @ 0x14007E4E0 (MmGetSessionById.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDisableTimer2 @ 0x1400FB154 (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1400FC170 (KeSetTimer2.c)
 *     MmAttachSession @ 0x14011A650 (MmAttachSession.c)
 *     KeInitializeIRTimer @ 0x14013AF20 (KeInitializeIRTimer.c)
 *     DbgPrintEx @ 0x140160460 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     PopRecordPhysicalPowerButton @ 0x140865FE8 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x140873BE0 (PopDiagTracePowerButtonBugcheck.c)
 *     PopPublishPowerButtonState @ 0x140877134 (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x14087719C (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopRecordPoBlackboxInformation @ 0x14087CF94 (PopRecordPoBlackboxInformation.c)
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
  unsigned int ActiveConsoleId; // eax
  _KPROCESS *SessionById; // rax
  int v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h]
  _BYTE v11[48]; // [rsp+40h] [rbp-48h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    v1 = qword_140410138;
    v10 = qword_140410138;
    KxReleaseSpinLock(&PopPowerButtonHold);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v0);
    v4 = HIDWORD(v10);
    if ( (dword_140410140 & 1) != 0 && ((v1 & 1) == 0 || HIDWORD(v10) != dword_140410144) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140410140 = 0;
      byte_1404101A8 = 0;
      PopPublishPowerButtonState(&dword_140410140);
      KeDisableTimer2((__int64)&unk_140410088, 1, 1, 0LL);
    }
    if ( (v1 & 1) != 0 )
    {
      if ( (dword_140410140 & 1) == 0 )
      {
        LOBYTE(v2) = 1;
        PopRecordPhysicalPowerButton(v2);
        dword_140410144 = v4;
        dword_140410148 = PopQueryPowerButtonBugcheckEnabled();
        v9 = 65544;
        KeInitializeIRTimer(
          (__int64)&unk_140410088,
          (__int64)PopPowerButtonTimerCallback,
          v4,
          (unsigned __int8 *)&v9,
          2);
        KeSetTimer2((__int64)&unk_140410088, -10000000LL, 10000000LL, 0LL);
      }
      dword_140410140 = v1;
      PopPublishPowerButtonState(&dword_140410140);
      if ( v1 >> 1 >= 0x1B58 )
      {
        if ( PopAcpiPdttSupportEnabled )
          ((void (__fastcall *)(_QWORD))qword_1403FE738)(0LL);
        PopDiagTracePowerButtonBugcheck(v1 >> 1);
        PopRecordPoBlackboxInformation();
        if ( dword_140410148 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          SessionById = (_KPROCESS *)MmGetSessionById(ActiveConsoleId);
          if ( SessionById && (int)MmAttachSession(SessionById, (__int64)v11) < 0 )
            DbgPrintEx(0x92u, 3u, "Unable to attach to active session\n");
          KeBugCheckEx(0x1C8u, (unsigned __int64)v1 >> 1, (ULONG_PTR)&PopPowerButtonTriageBlock, 0LL, 0LL);
        }
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v4, v1) != qword_140410138 );
  _InterlockedExchange(&dword_140410130, 0);
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
