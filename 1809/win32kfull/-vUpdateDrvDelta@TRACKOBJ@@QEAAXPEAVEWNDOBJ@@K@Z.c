/*
 * XREFs of ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C026B388
 * Callers:
 *     GreClientRgnUpdated @ 0x1C003DCB4 (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C026ACB8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C026BB44 (GreSetClientRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TRACKOBJ::vUpdateDrvDelta(TRACKOBJ *this, struct EWNDOBJ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v4; // r9

  if ( !ERECTL::bEmpty((struct EWNDOBJ *)((char *)a2 + 4)) )
    (*(void (__fastcall **)(__int64, _QWORD))(v2 + 40))(v4, v3);
}
