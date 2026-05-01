/*
 * XREFs of CrmSrvActivityStart @ 0x18003465C
 * Callers:
 *     CrmRpcSrvActivityStart @ 0x1800336D0 (CrmRpcSrvActivityStart.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     CrmRegistrationFindActivity @ 0x180034634 (CrmRegistrationFindActivity.c)
 *     CrmLogSrvActivityStartStop @ 0x180034874 (CrmLogSrvActivityStartStop.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall CrmSrvActivityStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v7; // r13d
  __int64 v8; // r14
  unsigned int v9; // edi
  __int64 v10; // r12
  unsigned int v11; // r15d
  _QWORD *Activity; // rax
  _QWORD *v13; // rbx
  int v14; // eax
  int v15; // eax
  unsigned int i; // edx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // [rsp+70h] [rbp-128h] BYREF
  __int64 v21; // [rsp+78h] [rbp-120h]
  __int64 v22; // [rsp+80h] [rbp-118h]
  __int64 v23; // [rsp+88h] [rbp-110h]
  __int64 v24; // [rsp+90h] [rbp-108h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-100h] BYREF
  UUID *v26; // [rsp+B8h] [rbp-E0h]
  __int64 v27; // [rsp+C0h] [rbp-D8h]
  _DWORD v28[28]; // [rsp+D0h] [rbp-C8h] BYREF

  v23 = a3;
  v24 = a1;
  v7 = 31;
  v22 = a4;
  v8 = -1LL;
  v9 = 0;
  v10 = -1LL;
  v11 = 0;
  memset_0(v28, 0, 0x6CuLL);
  v21 = MEMORY[0x7FFE0008];
  RtlQueryUnbiasedInterruptTime(&v20);
  if ( dword_18009B128 > 5u )
  {
    v27 = 16LL;
    v26 = &Uuid;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CB08, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  v13 = Activity;
  if ( Activity )
  {
    v7 = *((_DWORD *)Activity + 12);
    v14 = *((_DWORD *)Activity + 30);
    if ( !v14 )
    {
      RtlQueryUnbiasedInterruptTime(v13 + 19);
      v14 = *((_DWORD *)v13 + 30);
      v13[21] = 0LL;
      v13[20] = 0LL;
    }
    *((_DWORD *)v13 + 30) = v14 + 1;
    v15 = *((_DWORD *)v13 + 36);
    if ( v15 == 3 || v15 < a5 )
      *((_DWORD *)v13 + 36) = a5;
    for ( i = 0; i < *((_DWORD *)v13 + 20); ++i )
    {
      v17 = v13[11] + 56LL * i;
      if ( !*(_DWORD *)(v17 + 48) )
      {
        v19 = v11++;
        v28[v19] = *(_DWORD *)(v17 + 32);
      }
    }
    v10 = v13[17];
    v8 = v13[16];
  }
  else
  {
    v9 = -1073741811;
  }
  RtlReleaseSRWLockShared(a2);
  CrmLogSrvActivityStartStop(a2, v7, v24, v23, v22, a5, v28, v11, v21, v20, v10, v8, v9);
  return v9;
}
