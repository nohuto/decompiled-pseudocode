/*
 * XREFs of ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180235140
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800C1E64 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
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
  if ( dword_18033A240 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = v2;
      v6 = 8;
      TlgWrite(v1, &unk_1802DEF60, 0LL, 0LL, 3u, &pData);
    }
  }
}
