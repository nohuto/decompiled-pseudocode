/*
 * XREFs of KeInitializeClock @ 0x1409D8C58
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD690 (RtlRbInsertNodeEx.c)
 *     KiSetPendingTick @ 0x1400FCF54 (KiSetPendingTick.c)
 *     KiSetupTimeIncrement @ 0x140190334 (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     strstr @ 0x140194EA0 (strstr.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PoTraceDynamicTickDisabled @ 0x1402DE7E0 (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x1405653B0 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char result; // al
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rcx
  __int64 v5; // rdx
  bool v6; // r8
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  const char *v9; // rcx
  signed __int32 v10[8]; // [rsp+0h] [rbp-78h] BYREF
  int v11; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-20h]
  unsigned int v16; // [rsp+60h] [rbp-18h]

  if ( (_DWORD)BugCheckParameter2 )
  {
    if ( (_DWORD)BugCheckParameter2 == 1 )
    {
      KeQueryPerformanceCounter(&PerformanceFrequency);
      KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
      *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xDuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KiClockState = 0;
      off_1403FE5C8[0]();
      KiSetPendingTick(0);
      off_1403FE5C0[0]();
      LOBYTE(v4) = 1;
      ((void (__fastcall *)(__int64))off_1403FE5B8[0])(v4);
      ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_1403FE5D0[0])(0LL, KeMaximumIncrement, &v13);
      KiSetPendingTick(1);
      v5 = KiClockIntervalRequests;
      KeTimeIncrement = v13;
      KiLastRequestedTimeIncrement = KeMaximumIncrement;
      KeNonHrTimeIncrement = v13;
      dword_14042171C = KeMaximumIncrement;
      if ( (qword_1404D9830 & 1) != 0 && KiClockIntervalRequests )
        v5 = (unsigned __int64)&KiClockIntervalRequests ^ KiClockIntervalRequests;
      v6 = 0;
      if ( v5 )
      {
        while ( 1 )
        {
          if ( KeMaximumIncrement < *(_DWORD *)(v5 + 28) )
          {
            v7 = *(_QWORD *)v5;
            if ( (qword_1404D9830 & 1) != 0 )
            {
              if ( !v7 )
                goto LABEL_31;
              v7 ^= v5;
            }
            if ( !v7 )
            {
LABEL_31:
              v6 = 0;
              break;
            }
          }
          else
          {
            v7 = *(_QWORD *)(v5 + 8);
            if ( (qword_1404D9830 & 1) != 0 )
            {
              if ( !v7 )
                goto LABEL_25;
              v7 ^= v5;
            }
            if ( !v7 )
            {
LABEL_25:
              v6 = 1;
              break;
            }
          }
          v5 = v7;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64)&KiClockIntervalRequests, v5, v6, KiDefaultClockIntervalRequest);
      byte_140421718 = 1;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      dword_140421690 = KeTimeIncrement;
      dword_140421694 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_140421698 = KiLastRequestedTimeIncrement;
      dword_14042169C = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_10;
      if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
      {
        v11 = 1;
        result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v11);
        if ( v11 == 2 )
          KiDynamicTickDisableReason = 3;
      }
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_10:
        result = PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
      _InterlockedOr(v10, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v9 = *(const char **)(a2 + 216);
    qword_140421688 = -1LL;
    qword_1404216A8 = -1LL;
    if ( v9 && strstr(v9, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    ((void (__fastcall *)(_BYTE *))off_1403FE5B0[0])(v14);
    if ( (v14[0] & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v14[0] & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v14[0] & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v14[0] & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    return KiSetupTimeIncrement(v15, v16);
  }
  return result;
}
