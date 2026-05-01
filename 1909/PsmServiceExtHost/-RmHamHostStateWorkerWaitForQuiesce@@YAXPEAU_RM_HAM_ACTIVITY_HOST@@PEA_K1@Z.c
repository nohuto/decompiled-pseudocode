/*
 * XREFs of ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800493C0
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800121A8 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AAE8 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18000D9A8 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E230 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800288A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002BED0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180037A18 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BB30 (-HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003CFB8 (-RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003D4A0 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x18003DC40 (-RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z.c)
 *     ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E0B4 (-HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003E480 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E7E4 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ??$_TlgCreateDesc@_K@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEB_K@Z @ 0x1800610D0 (--$_TlgCreateDesc@_K@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEB_K@Z.c)
 *     ??$_TlgCreateDesc@E@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEBE@Z @ 0x180065F78 (--$_TlgCreateDesc@E@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEBE@Z.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FB50 (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FB5C (-RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FB68 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmHamHostStateWorkerWaitForQuiesce(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  const WCHAR *PsmKey; // rax
  char v4; // [rsp+34h] [rbp-C4h] BYREF
  _BYTE v5[3]; // [rsp+35h] [rbp-C3h] BYREF
  struct _RM_ACTIVITY_HOST *v6; // [rsp+38h] [rbp-C0h]
  int v7; // [rsp+40h] [rbp-B8h]
  unsigned int IsSuspendWaiter; // [rsp+44h] [rbp-B4h]
  TraceLoggingHProvider hProvider; // [rsp+48h] [rbp-B0h]
  unsigned __int64 Id; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+80h] [rbp-78h] BYREF
  __int64 v14; // [rsp+90h] [rbp-68h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-28h] BYREF

  v6 = RmHostFromHamHost(a1);
  RmAcquireEnforcementLocks(v6);
  while ( 1 )
  {
    HampHostUpdateQuiesceState(a1, a2, a3);
    if ( (unsigned __int8)HIBYTE(*((_DWORD *)a1 + 162)) >> 5 == 5LL )
      break;
    if ( (unsigned int)HampHostIsQuiesceInterrupted(a1) )
    {
      RmReleaseEnforcementLocks(v6);
      RmpSystemResourceTimerReset(a1, *((void **)a1 + 99), 0);
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
      CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 680, 0LL);
      HampHostReleaseLockExclusive(a1);
      RmAcquireEnforcementLocks(v6);
    }
  }
  *((_DWORD *)a1 + 167) = 0;
  IsSuspendWaiter = HampHostIsSuspendWaiter(a1, 0);
  *((_DWORD *)v6 + 311) |= 0x80u;
  *((_DWORD *)v6 + 312) &= ~0x80u;
  HampHostCheckUpdateSuspendWaitState(a1, IsSuspendWaiter);
  RmReleaseEnforcementLocks(v6);
  RmpSystemSetApplicationQuiesceCompleteEvents(v6);
  RmpSystemResourceTimerReset(a1, *((void **)a1 + 99), 0);
  v7 = 0;
  RmAcquireEnforcementLocks(v6);
LABEL_9:
  HampHostCheckEndQuiesceTurn(a1);
  hProvider = (TraceLoggingHProvider)HamTlgProvider;
  if ( (unsigned int)*HamTlgProvider > 4 )
  {
    if ( TlgKeywordOn(hProvider, 0x400000000008uLL) )
    {
      PsmKey = RmHamHostGetPsmKey(a1);
      TlgCreateWsz(&v13, PsmKey);
      Id = RmHamHostGetId(a1);
      _TlgCreateDesc<unsigned __int64>(&v14, &Id);
      v4 = (*((_QWORD *)a1 + 81) >> 29) & 7;
      _TlgCreateDesc<unsigned char>(&v15, &v4);
      v5[0] = v7;
      _TlgCreateDesc<unsigned char>(&v16, v5);
      _TlgCreateDesc<unsigned __int64>(&v17, a3);
      v11 = 0x1000000LL;
      _TlgCreateDesc<unsigned __int64>(&v18, &v11);
      TlgWrite(hProvider, &unk_180095699, 0LL, 0LL, 8u, &pDesc);
    }
  }
}
