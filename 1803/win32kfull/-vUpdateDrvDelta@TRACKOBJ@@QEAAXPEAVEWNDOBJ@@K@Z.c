/*
 * XREFs of ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C02581D4
 * Callers:
 *     GreClientRgnUpdated @ 0x1C00346AC (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0257BD8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C02588F0 (GreSetClientRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TRACKOBJ::vUpdateDrvDelta(TRACKOBJ *this, struct EWNDOBJ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v4; // r9

  if ( !ERECTL::bEmpty((struct EWNDOBJ *)((char *)a2 + 4)) )
    (*(void (__fastcall **)(__int64, _QWORD))(v2 + 40))(v4, v3);
}
