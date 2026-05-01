/*
 * XREFs of CrmSrvActivityStop @ 0x180031D50
 * Callers:
 *     CrmRpcSrvActivityStop @ 0x180031A40 (CrmRpcSrvActivityStop.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmActivityDereference @ 0x180032030 (CrmActivityDereference.c)
 *     CrmLogSrvActivityStopStop @ 0x180032084 (CrmLogSrvActivityStopStop.c)
 *     CrmRegistrationFindActivity @ 0x18003231C (CrmRegistrationFindActivity.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityStop(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v3; // rbp
  int v6; // ebx
  const struct _TlgProvider_t *v7; // rcx
  UINT32 cData; // r9d
  int v9; // r14d
  __int64 Activity; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-60h] BYREF
  UUID *v19; // [rsp+58h] [rbp-40h]
  int v20; // [rsp+60h] [rbp-38h]
  int v21; // [rsp+64h] [rbp-34h]

  v2 = 0;
  v3 = -1LL;
  v6 = 3;
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v21 = 0;
    v19 = &Uuid;
    v20 = 16;
    TlgWrite(v7, &unk_18009A549, 0LL, 0LL, cData, &pData);
  }
  v9 = 1;
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  if ( Activity )
  {
    RtlReleaseSRWLockShared(a2);
    v9 = 0;
    v2 = 1;
    RtlAcquireSRWLockExclusive(Activity + 72);
    *(_DWORD *)(Activity + 80) = GetCurrentThreadId();
    v11 = *(_DWORD *)(Activity + 136);
    if ( v11 )
    {
      RtlQueryUnbiasedInterruptTime(&v17);
      v12 = v17;
      v13 = v17 - *(_QWORD *)(Activity + 168);
      if ( *(_DWORD *)(Activity + 92) == *(_DWORD *)(Activity + 88) )
        *(_QWORD *)(Activity + 176) += v13;
      else
        *(_QWORD *)(Activity + 184) += v13;
      v11 = *(_DWORD *)(Activity + 136);
      *(_QWORD *)(Activity + 168) = v12;
    }
    v3 = *(_QWORD *)(Activity + 192);
    v14 = v11 - 1;
    v6 = *(_DWORD *)(Activity + 160);
    *(_DWORD *)(Activity + 136) = v14;
    if ( !v14 )
    {
      *(_QWORD *)(Activity + 192) = -1LL;
      *(_DWORD *)(Activity + 160) = 3;
    }
    v15 = 0;
  }
  else
  {
    v15 = -1073741811;
  }
  result = CrmLogSrvActivityStopStop(a2, a1, Activity, v6, v3, v15);
  if ( v2 )
  {
    *(_DWORD *)(Activity + 80) = 0;
    result = RtlReleaseSRWLockExclusive(Activity + 72);
  }
  if ( Activity )
    result = CrmActivityDereference(Activity);
  if ( v9 )
    return RtlReleaseSRWLockShared(a2);
  return result;
}
