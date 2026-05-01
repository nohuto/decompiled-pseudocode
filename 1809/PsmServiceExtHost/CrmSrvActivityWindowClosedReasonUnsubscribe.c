/*
 * XREFs of CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x180006D88
 * Callers:
 *     CrmRpcSrvActivityWindowClosedReasonUnsubscribe @ 0x180006D70 (CrmRpcSrvActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     CrmRegistrationFindActivity @ 0x180034634 (CrmRegistrationFindActivity.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmSrvActivityWindowClosedReasonUnsubscribe(__int64 a1, __int64 a2)
{
  __int64 Activity; // rax
  _QWORD *v5; // rbx
  int v6; // ebx
  TLG_STATUS result; // eax
  int v8; // eax
  int v9; // r8d
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  int *v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v22; // [rsp+A0h] [rbp-60h]
  int v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+ACh] [rbp-54h]
  __int64 *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]
  int *v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  UUID *v32; // [rsp+F0h] [rbp-10h]
  int v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+FCh] [rbp-4h]

  if ( dword_18009B128 > 5u )
  {
    v34 = 0;
    v32 = &Uuid;
    v33 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CAC5, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  Activity = CrmRegistrationFindActivity(a2, a1);
  if ( Activity && ((v5 = (_QWORD *)(Activity + 112), *(_DWORD *)(Activity + 112)) || *(_DWORD *)(Activity + 116)) )
  {
    NtDeleteWnfStateName(Activity + 112);
    *v5 = 0LL;
    v6 = 0;
  }
  else
  {
    v6 = -1073741811;
  }
  *(_DWORD *)(a2 + 8) = 0;
  result = RtlReleaseSRWLockExclusive(a2);
  if ( dword_18009B128 > 5u )
  {
    v8 = *(_DWORD *)(a2 + 24);
    v17 = 0;
    v20 = 0;
    v10 = v8;
    v18 = &v10;
    v11 = 31;
    v13 = a1;
    v12 = v6;
    v15 = &Uuid;
    v16 = 16;
    v19 = 4;
    TlgCreateSid(&pDesc, (const SID *)(a2 + 72));
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v25 = &v13;
    v28 = &v12;
    v22 = &v11;
    v23 = v9;
    v26 = v9 + 4;
    v29 = v9;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C6C8, 0LL, 0LL, v9 + 4, &v14);
  }
  return result;
}
