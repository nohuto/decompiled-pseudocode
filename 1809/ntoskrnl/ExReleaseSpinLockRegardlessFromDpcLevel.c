/*
 * XREFs of ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8
 * Callers:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseSpinLockRegardlessFromDpcLevel(volatile LONG *BugCheckParameter1)
{
  if ( (*BugCheckParameter1 & 0x3FFFFFFF) != 0 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(BugCheckParameter1);
  }
  else
  {
    if ( *(int *)BugCheckParameter1 >= 0 )
      KeBugCheckEx(0x10u, (ULONG_PTR)BugCheckParameter1, 0x100uLL, 0LL, 0LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(BugCheckParameter1);
  }
}
