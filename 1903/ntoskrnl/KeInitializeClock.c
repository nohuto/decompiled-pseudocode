/*
 * XREFs of KeInitializeClock @ 0x1409FCAA0
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140064590 (RtlRbInsertNodeEx.c)
 *     KiSetPendingTick @ 0x140113054 (KiSetPendingTick.c)
 *     KiSetupTimeIncrement @ 0x14018A430 (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     strstr @ 0x14019F610 (strstr.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PoTraceDynamicTickDisabled @ 0x1402FB7F8 (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x1405957C0 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v3; // rbx
  char result; // al
  unsigned __int8 CurrentIrql; // bl
  const char *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v9; // r8
  __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-70h] BYREF
  int v13; // [rsp+30h] [rbp-40h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v16[4]; // [rsp+48h] [rbp-28h] BYREF

  v3 = (unsigned int)BugCheckParameter2;
  memset(v16, 0, sizeof(v16));
  PerformanceFrequency.QuadPart = 0LL;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      KeQueryPerformanceCounter(&PerformanceFrequency);
      KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
      *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xDuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KiClockState = 0;
      off_1404245C8[0]();
      KiSetPendingTick(0);
      off_1404245C0[0]();
      LOBYTE(v10) = 1;
      ((void (__fastcall *)(__int64))off_1404245B8[0])(v10);
      ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_1404245D0[0])(0LL, KeMaximumIncrement, &v15);
      KiSetPendingTick(1);
      Root = (unsigned __int64)KiClockIntervalRequests.Root;
      KeTimeIncrement = v15;
      KiLastRequestedTimeIncrement = KeMaximumIncrement;
      KeNonHrTimeIncrement = v15;
      dword_14044D37C = KeMaximumIncrement;
      if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 && KiClockIntervalRequests.Root )
        Root = (unsigned __int64)&KiClockIntervalRequests ^ (unsigned __int64)KiClockIntervalRequests.Root;
      v9 = 0;
      if ( Root )
      {
        while ( 1 )
        {
          if ( KeMaximumIncrement < *(_DWORD *)(Root + 28) )
          {
            v7 = *(_QWORD *)Root;
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v7 )
              {
LABEL_31:
                v9 = 0;
                break;
              }
              v7 ^= Root;
            }
            if ( !v7 )
              goto LABEL_31;
          }
          else
          {
            v7 = *(_QWORD *)(Root + 8);
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v7 )
              {
LABEL_34:
                v9 = 1;
                break;
              }
              v7 ^= Root;
            }
            if ( !v7 )
              goto LABEL_34;
          }
          Root = v7;
        }
      }
      RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v9, &KiDefaultClockIntervalRequest);
      byte_14044D378 = 1;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      dword_14044D2F0 = KeTimeIncrement;
      dword_14044D2F4 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_14044D2F8 = KiLastRequestedTimeIncrement;
      dword_14044D2FC = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)v3 != 2 )
        KeBugCheckEx(0x33u, 1uLL, v3, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_38;
      if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
      {
        v13 = 1;
        result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v13);
        if ( v13 == 2 )
          KiDynamicTickDisableReason = 3;
      }
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_38:
        result = PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
      _InterlockedOr(v12, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v6 = *(const char **)(a2 + 216);
    qword_14044D2E8 = -1LL;
    qword_14044D308 = -1LL;
    if ( v6 && strstr(v6, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    ((void (__fastcall *)(unsigned __int64 *))off_1404245B0[0])(v16);
    if ( (v16[0] & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v16[0] & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v16[0] & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v16[0] & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    return KiSetupTimeIncrement(v16[2], v16[3]);
  }
  return result;
}
