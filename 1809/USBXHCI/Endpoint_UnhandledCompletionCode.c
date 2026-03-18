/*
 * XREFs of Endpoint_UnhandledCompletionCode @ 0x1C0019FF8
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0018798 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_UnhandledCompletionCode(__m128i **a1, int a2)
{
  return (((*a1)[17].m128i_i64[0] & 0x4000000000000000LL) == 0 || a2 != 199)
      && ((_mm_srli_si128((*a1)[17], 8).m128i_u8[0] & 0x20) == 0 || a2 != 198)
      && (a2 == 33 || a2 == 5 || (unsigned int)(a2 - 192) <= 0x1F);
}
