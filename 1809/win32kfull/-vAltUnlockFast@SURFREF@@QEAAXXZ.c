/*
 * XREFs of ?vAltUnlockFast@SURFREF@@QEAAXXZ @ 0x1C025752C
 * Callers:
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015F4B8 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vAltUnlockFast(SURFREF *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
