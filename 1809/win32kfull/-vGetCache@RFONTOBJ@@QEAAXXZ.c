/*
 * XREFs of ?vGetCache@RFONTOBJ@@QEAAXXZ @ 0x1C015FB0C
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C00C5440 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vGetCache(RFONTOBJ *this)
{
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
}
