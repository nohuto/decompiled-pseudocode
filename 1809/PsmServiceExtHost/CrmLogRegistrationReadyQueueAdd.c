/*
 * XREFs of CrmLogRegistrationReadyQueueAdd @ 0x180034B3C
 * Callers:
 *     CrmRegistrationReadyQueueAdd @ 0x180034A90 (CrmRegistrationReadyQueueAdd.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogRegistrationReadyQueueAdd(__int64 a1)
{
  TLG_STATUS result; // eax
  __int64 v2; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  UUID *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( dword_18009B128 > 5u )
  {
    v6 = 0;
    v9 = 0;
    v4 = &Uuid;
    v7 = &v2;
    v2 = a1;
    v5 = 16;
    v8 = 8;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C8AE, 0LL, 0LL, 4u, &pData);
  }
  return result;
}
