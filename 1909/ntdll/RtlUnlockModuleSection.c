/*
 * XREFs of RtlUnlockModuleSection @ 0x180074110
 * Callers:
 *     RtlpUnregisterLockedMemoryZone @ 0x180073E30 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180073E70 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryZone @ 0x180073FEC (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x18007407C (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x1800742BC (RtlpLocateModuleSectionInLockedSectionList.c)
 *     ZwUnlockVirtualMemory @ 0x1800A0720 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockModuleSection(__int64 a1)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v3 = 0;
  v4 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    if ( (*(_DWORD *)(ModuleSectionInLockedSectionList + 32))-- == 1 )
    {
      v6 = *(_QWORD *)ModuleSectionInLockedSectionList;
      if ( *(_QWORD *)(v6 + 8) != v4 || (v7 = *(_QWORD **)(v4 + 8), *v7 != v4) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v3 = ZwUnlockVirtualMemory(-1LL, v4 + 16, v4 + 24, 1LL);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
  else
  {
    v3 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  return v3;
}
