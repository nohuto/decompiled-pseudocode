/*
 * XREFs of MiGetPageTableLockBuffer @ 0x14010027C
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x140049540 (MiWalkPageTablesRecursively.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiMakeHyperRangeAccessible @ 0x140052580 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiDispatchFault @ 0x1400ABE50 (MiDispatchFault.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiIsPageTableLocked @ 0x14012B620 (MiIsPageTableLocked.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetPageTableLockBuffer(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int64 v3; // r9
  int v4; // edx
  unsigned __int64 v5; // r9
  char *v6; // rax
  char *result; // rax

  v3 = 2 * (unsigned int)((a2 + 0x90482413000LL) >> 3);
  v4 = (2 * (unsigned __int8)((a2 + 0x90482413000LL) >> 3)) & 0x1F;
  v5 = v3 >> 5;
  v6 = (char *)&unk_140465B14;
  if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 )
    v6 = (char *)(a1 + 712);
  result = &v6[4 * v5];
  *a3 = v4;
  return result;
}
