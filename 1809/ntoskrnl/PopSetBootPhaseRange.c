/*
 * XREFs of PopSetBootPhaseRange @ 0x14056CA20
 * Callers:
 *     PopSetRange @ 0x140144A6C (PopSetRange.c)
 * Callees:
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 */

void __fastcall PopSetBootPhaseRange(__int64 a1, ULONG a2, ULONG a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // r10

  v3 = a2;
  if ( a2 < a3 + a2 )
  {
    v4 = a2;
    do
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 40), v4) )
        _bittestandreset(*(signed __int32 **)(a1 + 56), v3);
      ++v3;
      ++v4;
    }
    while ( v3 < a3 + a2 );
  }
  RtlSetBits((PRTL_BITMAP)(a1 + 32), a2, a3);
}
