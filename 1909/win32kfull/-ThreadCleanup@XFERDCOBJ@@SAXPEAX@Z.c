/*
 * XREFs of ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C0165E50
 * Callers:
 *     NtGdiSetPixel @ 0x1C0147670 (NtGdiSetPixel.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall XFERDCOBJ::ThreadCleanup(XDCOBJ *a1)
{
  if ( *(_QWORD *)a1 )
    XDCOBJ::vUnlockFast(a1);
  *(_QWORD *)a1 = 0LL;
}
