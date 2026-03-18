/*
 * XREFs of KeTestSpinLock @ 0x140108C90
 * Callers:
 *     KiDecodeMcaFault @ 0x1401AA700 (KiDecodeMcaFault.c)
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
