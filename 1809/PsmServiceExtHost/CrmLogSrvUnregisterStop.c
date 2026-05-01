/*
 * XREFs of CrmLogSrvUnregisterStop @ 0x18007040C
 * Callers:
 *     CrmSrvUnregister @ 0x1800704B4 (CrmSrvUnregister.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogSrvUnregisterStop(int a1, const SID *a2)
{
  TLG_STATUS result; // eax
  int v3; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  UUID *v5; // [rsp+60h] [rbp-48h]
  int v6; // [rsp+68h] [rbp-40h]
  int v7; // [rsp+6Ch] [rbp-3Ch]
  int *v8; // [rsp+70h] [rbp-38h]
  int v9; // [rsp+78h] [rbp-30h]
  int v10; // [rsp+7Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+80h] [rbp-28h] BYREF

  if ( dword_18009B128 > 5u )
  {
    v3 = a1;
    v5 = &Uuid;
    v7 = 0;
    v6 = 16;
    v8 = &v3;
    v10 = 0;
    v9 = 4;
    TlgCreateSid(&v11, a2);
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C9AA, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
