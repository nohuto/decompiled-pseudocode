/*
 * XREFs of wil::details::lambda_call__lambda_290c00f3e21989d3395705ed09ca5935___::_lambda_call__lambda_290c00f3e21989d3395705ed09ca5935___ @ 0x180114E1C
 * Callers:
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$5 @ 0x18006E8C0 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_290c00f3e21989d3395705ed09ca5935___::_lambda_call__lambda_290c00f3e21989d3395705ed09ca5935___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)(*(_QWORD *)a1 + 16LL));
  }
}
