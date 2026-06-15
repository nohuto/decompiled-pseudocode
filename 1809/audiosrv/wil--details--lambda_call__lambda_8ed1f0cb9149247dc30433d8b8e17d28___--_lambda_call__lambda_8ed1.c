/*
 * XREFs of wil::details::lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___::_lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___ @ 0x1800CE850
 * Callers:
 *     _CPolicyConfig::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$0 @ 0x1800D03B6 (_CPolicyConfig--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180109250 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___::_lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___(
        __int64 **a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v1 = 2LL;
    v2 = a1[1];
    v3 = **a1;
    if ( *(_DWORD *)v2 != 3 )
      v1 = 0LL;
    return CEndpointCharacteristics::ClearMixFormatCache(v3, v1);
  }
  return result;
}
