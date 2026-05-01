/*
 * XREFs of CrmSrvActivityFree @ 0x1800066F8
 * Callers:
 *     CrmRpcSrvActivityFree @ 0x1800066E0 (CrmRpcSrvActivityFree.c)
 * Callees:
 *     CrmActivityCleanup @ 0x1800067E4 (CrmActivityCleanup.c)
 *     CrmRegistrationRemoveActivity @ 0x1800068DC (CrmRegistrationRemoveActivity.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     CrmRegistrationFindActivity @ 0x180034634 (CrmRegistrationFindActivity.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CrmSrvActivityFree(__int64 a1, __int64 a2)
{
  int v4; // r14d
  __int64 Activity; // rax
  _DWORD *v6; // rdi
  BOOLEAN result; // al
  int v8; // edi
  int v9; // eax
  int v10; // r8d
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+7Ch] [rbp-84h]
  int *v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  __int64 *v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  int *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  UUID *v33; // [rsp+F0h] [rbp-10h]
  int v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+FCh] [rbp-4h]

  v4 = 31;
  if ( dword_18009B128 > 5u )
  {
    v35 = 0;
    v33 = &Uuid;
    v34 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C73F, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  Activity = CrmRegistrationFindActivity(a2, a1);
  v6 = (_DWORD *)Activity;
  if ( Activity )
  {
    CrmRegistrationRemoveActivity(a2, Activity, 1LL);
    *(_DWORD *)(a2 + 8) = 0;
    RtlReleaseSRWLockExclusive(a2);
    v4 = v6[12];
    CrmActivityCleanup(v6);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    v8 = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
    v8 = -1073741811;
    result = RtlReleaseSRWLockExclusive(a2);
  }
  if ( dword_18009B128 > 5u )
  {
    v9 = *(_DWORD *)(a2 + 24);
    v18 = 0;
    v21 = 0;
    v11 = v9;
    v19 = &v11;
    v12 = v4;
    v14 = a1;
    v13 = v8;
    v16 = &Uuid;
    v17 = 16;
    v20 = 4;
    TlgCreateSid(&pDesc, (const SID *)(a2 + 72));
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v26 = &v14;
    v29 = &v13;
    v23 = &v12;
    v24 = v10;
    v27 = v10 + 4;
    v30 = v10;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C8F5, 0LL, 0LL, v10 + 4, &v15);
  }
  return result;
}
