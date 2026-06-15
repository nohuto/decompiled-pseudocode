/*
 * XREFs of wil::details::lambda_call__lambda_bb337380d935a38c4fab92b742bf1702___::_lambda_call__lambda_bb337380d935a38c4fab92b742bf1702___ @ 0x1801076D8
 * Callers:
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$2 @ 0x18006D5D0 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_bb337380d935a38c4fab92b742bf1702___::_lambda_call__lambda_bb337380d935a38c4fab92b742bf1702___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    ReleaseSRWLockShared((PSRWLOCK)(*(_QWORD *)a1 + 16LL));
  }
}
