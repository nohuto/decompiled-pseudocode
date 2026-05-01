/*
 * XREFs of ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180049B20
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180011058 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800102B4 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180010680 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025B20 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180029CD0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002CAF0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CB80 (-HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CDD4 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18002FB60 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003C350 (-RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x18003CE48 (-RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z.c)
 *     ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003CFF0 (-HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003D304 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003D67C (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ??$_TlgCreateDesc@_K@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEB_K@Z @ 0x180054838 (--$_TlgCreateDesc@_K@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEB_K@Z.c)
 *     ??$_TlgCreateDesc@E@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEBE@Z @ 0x180059248 (--$_TlgCreateDesc@E@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEBE@Z.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180062D08 (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180062D14 (-RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180062D20 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmHamHostStateWorkerWaitForQuiesce(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  const WCHAR *PsmKey; // rax
  char v4; // [rsp+34h] [rbp-B4h] BYREF
  _BYTE v5[3]; // [rsp+35h] [rbp-B3h] BYREF
  struct _RM_ACTIVITY_HOST *v6; // [rsp+38h] [rbp-B0h]
  int v7; // [rsp+40h] [rbp-A8h]
  unsigned int IsSuspendWaiter; // [rsp+44h] [rbp-A4h]
  TraceLoggingHProvider hProvider; // [rsp+48h] [rbp-A0h]
  unsigned __int64 Id; // [rsp+50h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+80h] [rbp-68h] BYREF
  __int64 v13; // [rsp+90h] [rbp-58h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+C0h] [rbp-28h] BYREF

  v6 = RmHostFromHamHost(a1);
  RmAcquireEnforcementLocks(v6);
  while ( 1 )
  {
    HampHostUpdateQuiesceState(a1, a2, a3);
    if ( (unsigned __int8)HIBYTE(*((_DWORD *)a1 + 158)) >> 5 == 5LL )
      break;
    if ( (unsigned int)HampHostIsQuiesceInterrupted(a1) )
    {
      RmReleaseEnforcementLocks(v6);
      RmpSystemResourceTimerReset(a1, *((void **)a1 + 96), 0);
      RmAcquireEnforcementLocks(v6);
      v7 = 1;
      goto LABEL_9;
    }
    if ( (unsigned int)HampHostCheckUpdateEnforcementSettings(a1) )
    {
      HampHostCheckStartPendingActivities(a1);
    }
    else
    {
      RmpReleaseGlobalLock();
      CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 656, 0LL);
      HampHostReleaseLockExclusive(a1);
      RmAcquireEnforcementLocks(v6);
    }
  }
  *((_DWORD *)a1 + 161) = 0;
  IsSuspendWaiter = HampHostIsSuspendWaiter(a1, 0);
  *((_DWORD *)v6 + 297) |= 0x80u;
  *((_DWORD *)v6 + 298) &= ~0x80u;
  HampHostCheckUpdateSuspendWaitState(a1, IsSuspendWaiter);
  RmReleaseEnforcementLocks(v6);
  RmpSystemSetApplicationQuiesceCompleteEvents(v6);
  RmpSystemResourceTimerReset(a1, *((void **)a1 + 96), 0);
  v7 = 0;
  RmAcquireEnforcementLocks(v6);
LABEL_9:
  HampHostCheckEndQuiesceTurn(a1);
  hProvider = (TraceLoggingHProvider)HamTlgProvider;
  if ( *HamTlgProvider > 4u )
  {
    if ( TlgKeywordOn(hProvider, 0x400000000008uLL) )
    {
      PsmKey = RmHamHostGetPsmKey(a1);
      TlgCreateWsz(&v12, PsmKey);
      Id = RmHamHostGetId(a1);
      _TlgCreateDesc<unsigned __int64>(&v13, &Id);
      v4 = (*((_QWORD *)a1 + 79) >> 29) & 7;
      _TlgCreateDesc<unsigned char>(&v14, &v4);
      v5[0] = v7;
      _TlgCreateDesc<unsigned char>(&v15, v5);
      _TlgCreateDesc<unsigned __int64>(&v16, a3);
      TlgWrite(hProvider, &unk_1800879B1, 0LL, 0LL, 7u, &pDesc);
    }
  }
}
