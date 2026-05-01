/*
 * XREFs of CrmSrvUnregister @ 0x18003CBF4
 * Callers:
 *     CrmRpcSrvUnregister @ 0x18003CBD0 (CrmRpcSrvUnregister.c)
 *     CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown @ 0x1800809B0 (CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmRegistrationCleanup @ 0x18003CCEC (CrmRegistrationCleanup.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CrmSrvUnregister(char *P)
{
  int v2; // eax
  __int128 v3; // xmm1
  int v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  BOOLEAN result; // al
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD pSid_8[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+88h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR v11; // [rsp+98h] [rbp-70h] BYREF
  UUID *v12; // [rsp+B8h] [rbp-50h]
  int v13; // [rsp+C0h] [rbp-48h]
  int v14; // [rsp+C4h] [rbp-44h]
  int *v15; // [rsp+C8h] [rbp-40h]
  int v16; // [rsp+D0h] [rbp-38h]
  int v17; // [rsp+D4h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  UUID *v20; // [rsp+108h] [rbp+0h]
  int v21; // [rsp+110h] [rbp+8h]
  int v22; // [rsp+114h] [rbp+Ch]

  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v22 = 0;
    v20 = &Uuid;
    v21 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A97F, 0LL, 0LL, 3u, &pData);
  }
  v2 = *((_DWORD *)P + 34);
  v3 = *(_OWORD *)(P + 88);
  v4 = *((_DWORD *)P + 6);
  pSid_8[0] = *(_OWORD *)(P + 72);
  v5 = *(_OWORD *)(P + 104);
  v10 = v2;
  pSid_8[1] = v3;
  v6 = *(_OWORD *)(P + 120);
  pSid_8[2] = v5;
  pSid_8[3] = v6;
  CrmRegistrationCleanup(P, 1LL);
  result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( dword_1800AB2F8 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL);
    if ( result )
    {
      v14 = 0;
      v17 = 0;
      v15 = &v8;
      v8 = v4;
      v12 = &Uuid;
      v13 = 16;
      v16 = 4;
      TlgCreateSid(&pDesc, (const SID *)pSid_8);
      return TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A945, 0LL, 0LL, 5u, &v11);
    }
  }
  return result;
}
