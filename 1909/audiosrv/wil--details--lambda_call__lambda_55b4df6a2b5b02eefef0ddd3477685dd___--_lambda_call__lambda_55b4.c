/*
 * XREFs of wil::details::lambda_call__lambda_55b4df6a2b5b02eefef0ddd3477685dd___::_lambda_call__lambda_55b4df6a2b5b02eefef0ddd3477685dd___ @ 0x180114E68
 * Callers:
 *     _CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$0 @ 0x180072DF2 (_CEndpointCharacteristics--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180005BB0 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_55b4df6a2b5b02eefef0ddd3477685dd___::_lambda_call__lambda_55b4df6a2b5b02eefef0ddd3477685dd___(
        __int64 a1)
{
  unsigned int v1; // edx
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = 2;
    v2 = *(_DWORD **)(a1 + 8);
    v3 = *(_QWORD *)a1;
    if ( *v2 != 3 )
      v1 = 0;
    return CEndpointCharacteristics::ClearMixFormatCache(v3, v1);
  }
  return result;
}
