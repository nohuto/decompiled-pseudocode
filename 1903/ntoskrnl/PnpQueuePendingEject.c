/*
 * XREFs of PnpQueuePendingEject @ 0x140862A2C
 * Callers:
 *     IopEjectDevice @ 0x140875BC4 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_1404608F8;
  if ( *(__int64 **)qword_1404608F8 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_1404608F8 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
