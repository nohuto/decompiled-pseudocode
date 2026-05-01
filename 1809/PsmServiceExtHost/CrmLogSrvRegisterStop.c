/*
 * XREFs of CrmLogSrvRegisterStop @ 0x18003BA84
 * Callers:
 *     CrmSrvRegister @ 0x18003B978 (CrmSrvRegister.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogSrvRegisterStop(int a1, __int64 a2, const SID *a3, int a4)
{
  TLG_STATUS result; // eax
  LPCWSTR v5; // r8
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  UUID *v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  int *v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+90h] [rbp+27h] BYREF
  int *v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

  result = (int)a3;
  if ( dword_18009B128 > 5u )
  {
    v6 = a1;
    v7 = a4;
    v9 = &Uuid;
    v11 = &v6;
    v10 = 16LL;
    v12 = 4LL;
    TlgCreateSid(&pDesc, a3);
    TlgCreateWsz(&v14, v5);
    v16 = 4LL;
    v15 = &v7;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C4E9, 0LL, 0LL, 7u, &pData);
  }
  return result;
}
