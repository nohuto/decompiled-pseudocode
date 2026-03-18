/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0131ECC
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C0132180 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
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
