/*
 * XREFs of PnpQueuePendingEject @ 0x140829740
 * Callers:
 *     IopEjectDevice @ 0x14083C060 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140435CB8;
  if ( *(__int64 **)qword_140435CB8 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140435CB8 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
