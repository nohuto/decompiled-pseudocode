/*
 * XREFs of sub_1800B0CF4 @ 0x1800B0CF4
 * Callers:
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B0CF4(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 332) )
  {
    *(_DWORD *)(a1 + 544) |= 2u;
    *(float *)(a1 + 332) = a2;
  }
}
