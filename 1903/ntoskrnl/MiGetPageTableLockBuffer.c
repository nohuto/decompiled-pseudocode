/*
 * XREFs of MiGetPageTableLockBuffer @ 0x1400FE0EC
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiMakeHyperRangeAccessible @ 0x1400524E0 (MiMakeHyperRangeAccessible.c)
 *     MiPageTableLockIsContended @ 0x14008DE78 (MiPageTableLockIsContended.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiIsPageTableLocked @ 0x14012AC00 (MiIsPageTableLocked.c)
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
  v6 = (char *)&unk_140465E14;
  if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 )
    v6 = (char *)(a1 + 712);
  result = &v6[4 * v5];
  *a3 = v4;
  return result;
}
