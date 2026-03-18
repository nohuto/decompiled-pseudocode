/*
 * XREFs of ?vGetCache@RFONTOBJ@@QEAAXXZ @ 0x1C01394D8
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vGetCache(RFONTOBJ *this)
{
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 496LL));
}
