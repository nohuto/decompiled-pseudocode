/*
 * XREFs of sub_1800B0E04 @ 0x1800B0E04
 * Callers:
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B0E04(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 332) )
  {
    *(_DWORD *)(a1 + 544) |= 2u;
    *(float *)(a1 + 332) = a2;
  }
}
