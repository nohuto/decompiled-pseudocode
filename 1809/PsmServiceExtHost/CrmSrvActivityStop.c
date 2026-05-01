/*
 * XREFs of CrmSrvActivityStop @ 0x180033718
 * Callers:
 *     CrmRpcSrvActivityStop @ 0x180033700 (CrmRpcSrvActivityStop.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     CrmLogSrvActivityStopStop @ 0x180033860 (CrmLogSrvActivityStopStop.c)
 *     CrmActivityTimeSpentUpdate @ 0x180034338 (CrmActivityTimeSpentUpdate.c)
 *     CrmRegistrationFindActivity @ 0x180034634 (CrmRegistrationFindActivity.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityStop(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // esi
  int v6; // r14d
  __int64 v7; // r15
  int v8; // r12d
  int v9; // r13d
  __int64 Activity; // rax
  __int64 v11; // rbx
  bool v12; // zf
  int v14; // [rsp+40h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-70h] BYREF
  UUID *v16; // [rsp+68h] [rbp-50h]
  __int64 v17; // [rsp+70h] [rbp-48h]

  LODWORD(v2) = -1;
  v14 = a1;
  v3 = 0;
  v6 = 31;
  v7 = -1LL;
  v8 = 0;
  v9 = 3;
  if ( dword_18009B128 > 5u )
  {
    v17 = 16LL;
    v16 = &Uuid;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C623, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  v11 = Activity;
  if ( Activity )
  {
    CrmActivityTimeSpentUpdate(Activity, 2LL);
    v12 = (*(_DWORD *)(v11 + 120))-- == 1;
    v8 = *(_DWORD *)(v11 + 120);
    v2 = *(_QWORD *)(v11 + 160);
    v7 = *(_QWORD *)(v11 + 168);
    v9 = *(_DWORD *)(v11 + 144);
    if ( v12 )
      *(_DWORD *)(v11 + 144) = 3;
    v6 = *(_DWORD *)(v11 + 48);
  }
  else
  {
    v3 = -1073741811;
  }
  RtlReleaseSRWLockShared(a2);
  return CrmLogSrvActivityStopStop(a2, v6, v14, v2, v7, v8, v9, v3);
}
