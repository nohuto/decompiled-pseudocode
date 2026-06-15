/*
 * XREFs of ?Release@CAudioStream@@WBA@EAAKXZ @ 0x18006CCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::Release(__int64 a1)
{
  return CAudioStream::Release((CAudioStream *)(a1 - 16));
}
