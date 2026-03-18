/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C012F82C
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C012FAE0 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this)
{
  void *v2; // rax

  *(_QWORD *)this = 0LL;
  v2 = PALLOCMEM2(0x100uLL, 0x706D7447u, 1);
  *(_QWORD *)this = v2;
  if ( !v2 )
    EngSetLastError(8u);
  return this;
}
