/*
 * XREFs of CmpAddSubKey @ 0x1408374EC
 * Callers:
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C01C (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x1406C4D40 (CmpAddSubKeyEx.c)
 */

char __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
