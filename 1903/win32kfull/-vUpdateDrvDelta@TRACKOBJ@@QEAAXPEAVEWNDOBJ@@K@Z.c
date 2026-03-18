/*
 * XREFs of ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C0284080
 * Callers:
 *     GreClientRgnUpdated @ 0x1C00C6368 (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02839B4 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C028487C (GreSetClientRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TRACKOBJ::vUpdateDrvDelta(TRACKOBJ *this, struct EWNDOBJ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v4; // r9

  if ( !ERECTL::bEmpty((struct EWNDOBJ *)((char *)a2 + 4)) )
    (*(void (__fastcall **)(__int64, _QWORD))(v2 + 40))(v4, v3);
}
