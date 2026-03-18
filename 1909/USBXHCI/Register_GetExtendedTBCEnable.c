/*
 * XREFs of Register_GetExtendedTBCEnable @ 0x1C00039C4
 * Callers:
 *     Controller_Start @ 0x1C00103F0 (Controller_Start.c)
 * Callees:
 *     <none>
 */

bool __fastcall Register_GetExtendedTBCEnable(__int64 a1)
{
  return (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u64[0] & 0x800) == 0
      && (*(_BYTE *)(a1 + 104) & 0x50) == 0x50;
}
