/*
 * XREFs of ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x1C015F590
 * Callers:
 *     <none>
 * Callees:
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015F4B8 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::TmpSrcThreadCleanup(HSURF *a1, __int64 a2)
{
  if ( a1 )
    DEVLOCKBLTOBJ::TmpSrcCleanup(a1, a2);
}
