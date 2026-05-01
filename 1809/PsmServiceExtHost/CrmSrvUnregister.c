/*
 * XREFs of CrmSrvUnregister @ 0x1800704B4
 * Callers:
 *     CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown @ 0x180074570 (CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     CrmRpcSrvUnregister @ 0x180074580 (CrmRpcSrvUnregister.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     CrmLogSrvUnregisterStop @ 0x18007040C (CrmLogSrvUnregisterStop.c)
 *     CrmRegistrationCleanup @ 0x18007064C (CrmRegistrationCleanup.c)
 */

TLG_STATUS __fastcall CrmSrvUnregister(char *P)
{
  int v2; // eax
  __int128 v3; // xmm1
  int v4; // ebx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v8[4]; // [rsp+30h] [rbp-98h] BYREF
  int v9; // [rsp+70h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-48h] BYREF
  UUID *v11; // [rsp+A0h] [rbp-28h]
  int v12; // [rsp+A8h] [rbp-20h]
  int v13; // [rsp+ACh] [rbp-1Ch]

  if ( dword_18009B128 > 5u )
  {
    v13 = 0;
    v11 = &Uuid;
    v12 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CA59, 0LL, 0LL, 3u, &pData);
  }
  v2 = *((_DWORD *)P + 34);
  v3 = *(_OWORD *)(P + 88);
  v4 = *((_DWORD *)P + 6);
  v8[0] = *(_OWORD *)(P + 72);
  v5 = *(_OWORD *)(P + 104);
  v9 = v2;
  v8[1] = v3;
  v6 = *(_OWORD *)(P + 120);
  v8[2] = v5;
  v8[3] = v6;
  CrmRegistrationCleanup(P, 1LL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return CrmLogSrvUnregisterStop(v4, (const SID *)v8);
}
