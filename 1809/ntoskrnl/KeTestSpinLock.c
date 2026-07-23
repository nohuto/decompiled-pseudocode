/*
 * XREFs of KeTestSpinLock @ 0x140014AB0
 * Callers:
 *     KiDecodeMcaFault @ 0x14019F820 (KiDecodeMcaFault.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeTestSpinLock(PKSPIN_LOCK SpinLock)
{
  if ( !*SpinLock )
    return 1;
  _mm_pause();
  return 0;
}
