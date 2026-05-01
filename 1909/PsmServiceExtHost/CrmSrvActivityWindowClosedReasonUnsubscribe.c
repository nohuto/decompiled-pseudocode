/*
 * XREFs of CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18003ECD8
 * Callers:
 *     CrmRpcSrvActivityWindowClosedReasonUnsubscribe @ 0x18003ECC0 (CrmRpcSrvActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmActivityDereference @ 0x180032030 (CrmActivityDereference.c)
 *     CrmRegistrationFindActivity @ 0x18003231C (CrmRegistrationFindActivity.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

char __fastcall CrmSrvActivityWindowClosedReasonUnsubscribe(__int64 a1, __int64 a2)
{
  int v4; // r14d
  __int64 v5; // r9
  __int64 *Activity; // rax
  volatile signed __int64 *v7; // rbx
  _QWORD *v8; // rdi
  int v9; // edi
  char result; // al
  int v11; // eax
  int v12; // r8d
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  int v20; // [rsp+7Ch] [rbp-84h]
  int *v21; // [rsp+80h] [rbp-80h]
  int v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+ACh] [rbp-54h]
  __int64 *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  int *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]

  v4 = 701;
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v37 = 0;
    v35 = v5;
    v36 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009AA16, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  Activity = CrmRegistrationFindActivity(a2, a1);
  v7 = Activity;
  if ( Activity
    && ((v4 = *((_DWORD *)Activity + 14), v8 = Activity + 16, *((_DWORD *)Activity + 32)) || *((_DWORD *)Activity + 33)) )
  {
    NtDeleteWnfStateName(Activity + 16);
    *v8 = 0LL;
    v9 = 0;
  }
  else
  {
    v9 = -1073741811;
  }
  *(_DWORD *)(a2 + 8) = 0;
  result = RtlReleaseSRWLockExclusive(a2);
  if ( v7 )
    result = CrmActivityDereference(v7);
  if ( dword_1800AB2F8 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL);
    if ( result )
    {
      v11 = *(_DWORD *)(a2 + 24);
      v20 = 0;
      v23 = 0;
      v13 = v11;
      v18 = &Uuid;
      v21 = &v13;
      v14 = v4;
      v16 = a1;
      v15 = v9;
      v19 = 16;
      v22 = 4;
      TlgCreateSid(&pDesc, (const SID *)(a2 + 72));
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v28 = &v16;
      v31 = &v15;
      v25 = &v14;
      v26 = v12;
      v29 = v12 + 4;
      v32 = v12;
      return TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A5EE, 0LL, 0LL, v12 + 4, &v17);
    }
  }
  return result;
}
