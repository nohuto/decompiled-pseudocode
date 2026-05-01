/*
 * XREFs of CrmSrvActivityWindowClosedReasonSubscribe @ 0x180034E4C
 * Callers:
 *     CrmRpcSrvActivityWindowClosedReasonSubscribe @ 0x180035060 (CrmRpcSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     RmpWnfCreateStateNameForClient @ 0x180013918 (RmpWnfCreateStateNameForClient.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x180034128 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmRegistrationFindActivity @ 0x180034634 (CrmRegistrationFindActivity.c)
 *     CrmLogSrvActivityWindowClosedReasonSubscribeStop @ 0x180034F78 (CrmLogSrvActivityWindowClosedReasonSubscribeStop.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityWindowClosedReasonSubscribe(__int64 a1, __int64 a2, struct _WNF_STATE_NAME *a3)
{
  struct _WNF_STATE_NAME *Activity; // rax
  __int64 v7; // rsi
  struct _WNF_STATE_NAME *v8; // r14
  int StateNameForClient; // ebx
  __int64 v10; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  UUID *v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]

  if ( dword_18009B128 > 5u )
  {
    v15 = 0;
    v13 = &Uuid;
    v14 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CA84, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  Activity = (struct _WNF_STATE_NAME *)CrmRegistrationFindActivity(a2, a1);
  v7 = (__int64)Activity;
  if ( !Activity || (v8 = Activity + 14, Activity[14].Data[0]) || Activity[14].Data[1] )
  {
    StateNameForClient = -1073741811;
  }
  else
  {
    StateNameForClient = RmpWnfCreateStateNameForClient((PSID)(a2 + 72), 0, 0, Activity + 14);
    if ( StateNameForClient >= 0 )
    {
      CrmRegistrationNotifyWindowClosedReasonChange(a2, v7);
      *a3 = *v8;
    }
  }
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  CrmLogSrvActivityWindowClosedReasonSubscribeStop(a2, v10, a1, (unsigned int)StateNameForClient);
  return (unsigned int)StateNameForClient;
}
