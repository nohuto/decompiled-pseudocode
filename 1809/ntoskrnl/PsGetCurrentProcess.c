/*
 * XREFs of PsGetCurrentProcess @ 0x1400F1330
 * Callers:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiLockLowestValidPageTable @ 0x14006C5A0 (MiLockLowestValidPageTable.c)
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiPageTableLockIsContended @ 0x140096404 (MiPageTableLockIsContended.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1400984D4 (MiUnlockNestedPageTableWritePte.c)
 *     MiUnlockPageTableInternal @ 0x140104A90 (MiUnlockPageTableInternal.c)
 *     MiIsPageTableLocked @ 0x14012DA1C (MiIsPageTableLocked.c)
 *     KiLockExtendedServiceTable @ 0x14019F868 (KiLockExtendedServiceTable.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopAvlGetPowerRequestKey @ 0x1405891B4 (PopAvlGetPowerRequestKey.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     IopCreateFile @ 0x14060BAC0 (IopCreateFile.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
