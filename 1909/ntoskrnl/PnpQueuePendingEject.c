/*
 * XREFs of PnpQueuePendingEject @ 0x14086212C
 * Callers:
 *     IopEjectDevice @ 0x1408752C4 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_1404605C8;
  if ( *(__int64 **)qword_1404605C8 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_1404605C8 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
