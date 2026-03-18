/*
 * XREFs of ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C01F9F90
 * Callers:
 *     <none>
 * Callees:
 *     IncrementCompositedCount @ 0x1C01B17B0 (IncrementCompositedCount.c)
 */

void __fastcall IncComposited(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
    IncrementCompositedCount((__int64)a1);
}
