/*
 * XREFs of RtlUnlockModuleSection @ 0x180079C30
 * Callers:
 *     RtlpUnregisterLockedMemoryZone @ 0x180079950 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180079990 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryZone @ 0x180079B0C (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180079B9C (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x180079DDC (RtlpLocateModuleSectionInLockedSectionList.c)
 *     ZwUnlockVirtualMemory @ 0x1800A3B50 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockModuleSection(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  unsigned int v6; // edi
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpLockedSectionListLock, a2, a3, a4);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v6 = 0;
  v7 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    if ( (*(_DWORD *)(ModuleSectionInLockedSectionList + 32))-- == 1 )
    {
      v9 = *(_QWORD *)ModuleSectionInLockedSectionList;
      if ( *(_QWORD *)(v9 + 8) != v7 || (v10 = *(_QWORD **)(v7 + 8), *v10 != v7) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v6 = ZwUnlockVirtualMemory(-1LL, v7 + 16, v7 + 24, 1LL);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    v6 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  return v6;
}
