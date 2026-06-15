/*
 * XREFs of wil::details::lambda_call__lambda_6f6a5bdb1b9a0b5ae8a3c09800a031c7___::_lambda_call__lambda_6f6a5bdb1b9a0b5ae8a3c09800a031c7___ @ 0x1400439C8
 * Callers:
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$3 @ 0x14001AAC0 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$3.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x14001AB00 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::lambda_call__lambda_6f6a5bdb1b9a0b5ae8a3c09800a031c7___::_lambda_call__lambda_6f6a5bdb1b9a0b5ae8a3c09800a031c7___(
        __int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}
