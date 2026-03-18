/*
 * XREFs of ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x1801F49B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x180089550 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CInteractionContextWrapper::ResetOutput(CInteractionContextWrapper *this)
{
  const struct _TlgProvider_t *v1; // rcx
  __int64 v2; // r9
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0LL);
  if ( dword_180305E40 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = v2;
      v6 = 8;
      TlgWrite(v1, &unk_1802B8149, 0LL, 0LL, 3u, &pData);
    }
  }
}
