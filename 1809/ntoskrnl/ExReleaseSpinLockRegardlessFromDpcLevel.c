/*
 * XREFs of ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B7448
 * Callers:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiLockLowestValidPageTable @ 0x14006C5A0 (MiLockLowestValidPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiUnlockPageTableInternal @ 0x140104A70 (MiUnlockPageTableInternal.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
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
