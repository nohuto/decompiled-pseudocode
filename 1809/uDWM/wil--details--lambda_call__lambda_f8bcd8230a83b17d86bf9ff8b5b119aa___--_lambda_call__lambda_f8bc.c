/*
 * XREFs of wil::details::lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___::_lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___ @ 0x18004DF44
 * Callers:
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800AF53C (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     _lambda_f8bcd8230a83b17d86bf9ff8b5b119aa_::operator() @ 0x18004DF64 (_lambda_f8bcd8230a83b17d86bf9ff8b5b119aa_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___::_lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    return lambda_f8bcd8230a83b17d86bf9ff8b5b119aa_::operator()();
  }
  return result;
}
