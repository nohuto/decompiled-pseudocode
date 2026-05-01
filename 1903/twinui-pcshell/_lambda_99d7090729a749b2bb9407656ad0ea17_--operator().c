/*
 * XREFs of _lambda_99d7090729a749b2bb9407656ad0ea17_::operator() @ 0x18007DB70
 * Callers:
 *     _lambda_99d7090729a749b2bb9407656ad0ea17_::_lambda_invoker_cdecl_ @ 0x18007DB60 (_lambda_99d7090729a749b2bb9407656ad0ea17_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall lambda_99d7090729a749b2bb9407656ad0ea17_::operator()(__int64 a1, __int64 a2)
{
  int v2; // eax
  const CHAR *v3; // rdx
  __int64 v4; // r9
  const CHAR *v5; // rdx
  int v6; // r10d
  __int64 v7; // r9
  TLG_STATUS result; // eax
  int v9; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v11; // [rsp+60h] [rbp-9h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  __int64 v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+90h] [rbp+27h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+A0h] [rbp+37h] BYREF

  if ( hProvider > 5u )
  {
    v2 = *(_DWORD *)(a2 + 4);
    v3 = *(const CHAR **)(a2 + 48);
    v13 = 0;
    v9 = v2;
    v11 = &v9;
    v12 = 4;
    TlgCreateSz(&pDesc, v3);
    v5 = *(const CHAR **)(v4 + 40);
    v17 = 0;
    v15 = v4 + 56;
    v16 = v6;
    TlgCreateSz(&v18, v5);
    TlgCreateWsz(&v19, *(LPCWSTR *)(v7 + 16));
    return TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1804B6465, 0LL, 0LL, 7u, &pData);
  }
  return result;
}
