/*
 * XREFs of _lambda_839b3495da8c2b40985e406279c6b361_::operator() @ 0x18006BEF0
 * Callers:
 *     _lambda_839b3495da8c2b40985e406279c6b361_::_lambda_invoker_cdecl_ @ 0x18006BEE0 (_lambda_839b3495da8c2b40985e406279c6b361_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

ULONG __fastcall lambda_839b3495da8c2b40985e406279c6b361_::operator()(__int64 a1, __int64 a2)
{
  int v2; // eax
  const CHAR *v3; // rdx
  __int64 v4; // r9
  const CHAR *v5; // rdx
  __int64 v6; // r9
  ULONGLONG v7; // r11
  ULONG result; // eax
  int v9; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  void *v12; // [rsp+60h] [rbp-19h]
  int v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+6Ch] [rbp-Dh]
  int *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  __int64 v18; // [rsp+90h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+A0h] [rbp+27h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+B0h] [rbp+37h] BYREF

  if ( hProvider > 5u )
  {
    v2 = *(_DWORD *)(a2 + 4);
    v3 = *(const CHAR **)(a2 + 48);
    v9 = v2;
    v15 = &v9;
    v16 = 4LL;
    TlgCreateSz(&pDesc, v3);
    v5 = *(const CHAR **)(v4 + 40);
    v18 = v4 + 56;
    v19 = 4LL;
    TlgCreateSz(&v20, v5);
    TlgCreateWsz(&v21, *(LPCWSTR *)(v6 + 16));
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_180505ED8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180446D21 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = v7;
    UserData.Size = *(unsigned __int16 *)off_180505ED8;
    v12 = &unk_180446D2C;
    UserData.Reserved = 2;
    v13 = 64;
    v14 = 1;
    return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  return result;
}
