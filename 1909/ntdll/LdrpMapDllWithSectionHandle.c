/*
 * XREFs of LdrpMapDllWithSectionHandle @ 0x180029EFC
 * Callers:
 *     LdrpLoadKnownDll @ 0x180029560 (LdrpLoadKnownDll.c)
 *     LdrpMapDllNtFileName @ 0x18002D3B4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrpProcessMappedModule @ 0x180020654 (LdrpProcessMappedModule.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18002284C (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpMapAndSnapDependency @ 0x180022F1C (LdrpMapAndSnapDependency.c)
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     LdrpMinimalMapModule @ 0x18002A0B0 (LdrpMinimalMapModule.c)
 *     LdrpLogNewDllLoad @ 0x18002A2F4 (LdrpLogNewDllLoad.c)
 *     LdrpCompleteMapModule @ 0x18002A370 (LdrpCompleteMapModule.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18002A4F4 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpInsertDataTableEntry @ 0x18002A63C (LdrpInsertDataTableEntry.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18002A75C (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLoadContextReplaceModule @ 0x180070A98 (LdrpLoadContextReplaceModule.c)
 *     LdrpCorProcessImports @ 0x180083A38 (LdrpCorProcessImports.c)
 */

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned int v6; // r15d
  __int64 v7; // r8
  __int64 v8; // rdx
  int LoadedDllByNameLockHeld; // eax
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  volatile signed __int32 *v14; // [rsp+60h] [rbp+18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v2 = LdrpMinimalMapModule();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 160);
    v14 = 0LL;
    v6 = v2;
    v3 = RtlImageNtHeaderEx(0, *(_QWORD *)(v4 + 48), v5, &v15);
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v10 = v15;
        v6 = 0;
        *(_DWORD *)(v4 + 128) = *(_DWORD *)(v15 + 8);
        *(_DWORD *)(v4 + 64) = *(_DWORD *)(v10 + 80);
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v7 = *(unsigned int *)(a1 + 32);
        v8 = 0LL;
        if ( (v7 & 0x20) == 0 )
          v8 = v4 + 72;
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(v4 + 88, v8, v7, &v14, *(_DWORD *)(v4 + 264));
        v10 = v15;
        if ( LoadedDllByNameLockHeld == -1073741515 )
        {
          v11 = *(_QWORD *)(v4 + 48);
          LODWORD(v15) = *(_DWORD *)(v15 + 8);
          HIDWORD(v15) = *(_DWORD *)(v10 + 80);
          LdrpFindLoadedDllByMappingLockHeld(v11, v10, &v15, &v14);
        }
        if ( !v14 )
        {
          LdrpInsertDataTableEntry(v4);
          LdrpInsertModuleToIndexLockHeld(v4, v10);
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( v14 )
        {
          LdrpLoadContextReplaceModule(a1);
          return (unsigned int)v3;
        }
      }
      if ( (unsigned int)RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = LdrpCompleteMapModule(a1, v10, v6);
        if ( v3 >= 0 )
        {
          v3 = LdrpProcessMappedModule(v4, *(_DWORD *)(a1 + 32), 1);
          if ( v3 >= 0 )
          {
            LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v4);
            v12 = *(_QWORD *)(a1 + 48);
            if ( v12 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v12 + 48);
            if ( (*(_BYTE *)(v4 + 104) & 4) != 0 || (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
            {
              if ( (*(_DWORD *)(v4 + 104) & 0x1000000) != 0 )
              {
                return (unsigned int)LdrpCorProcessImports(v4);
              }
              else
              {
                LdrpMapAndSnapDependency(a1);
                return (unsigned int)**(_DWORD **)(a1 + 40);
              }
            }
            else
            {
              LdrpLogDllState(*(_QWORD *)(v4 + 48), v4 + 72, 0x14AEu);
              v3 = 0;
              *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL) = 9;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
