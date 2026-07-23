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

NTSTATUS __cdecl RtlUnlockModuleSection(PVOID Address)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  NTSTATUS v3; // edi
  __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(Address);
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
      v3 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v4 + 16), (PSIZE_T)(v4 + 24), 1u);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v4);
    }
  }
  else
  {
    v3 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  return v3;
}
