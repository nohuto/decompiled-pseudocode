/*
 * XREFs of LdrpMapDllWithSectionHandle @ 0x180021D1C
 * Callers:
 *     LdrpLoadKnownDll @ 0x1800223F4 (LdrpLoadKnownDll.c)
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000A950 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x1800207B8 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpCompleteMapModule @ 0x180021B40 (LdrpCompleteMapModule.c)
 *     LdrpLogNewDllLoad @ 0x180021CA0 (LdrpLogNewDllLoad.c)
 *     LdrpMinimalMapModule @ 0x180021EDC (LdrpMinimalMapModule.c)
 *     LdrpMapAndSnapDependency @ 0x18002385C (LdrpMapAndSnapDependency.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     LdrpProcessMappedModule @ 0x180026F8C (LdrpProcessMappedModule.c)
 *     LdrpInsertDataTableEntry @ 0x180070B38 (LdrpInsertDataTableEntry.c)
 *     LdrpLoadContextReplaceModule @ 0x180071770 (LdrpLoadContextReplaceModule.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180076FE4 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpCorProcessImports @ 0x180087A14 (LdrpCorProcessImports.c)
 */

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  int v6; // r15d
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  int v10; // r8d
  unsigned __int16 *v11; // rdx
  int LoadedDllByNameLockHeld; // eax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rcx
  _DWORD v18[10]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v19; // [rsp+70h] [rbp+18h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v2 = LdrpMinimalMapModule();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 160);
    v19 = 0LL;
    v6 = v2;
    v3 = RtlImageNtHeaderEx(0, *(_QWORD *)(v4 + 48), v5, &v20);
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v17 = v20;
        v6 = 0;
        *(_DWORD *)(v4 + 128) = *(_DWORD *)(v20 + 8);
        *(_DWORD *)(v4 + 64) = *(_DWORD *)(v17 + 80);
      }
      else
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v7, v8, v9);
        v10 = *(_DWORD *)(a1 + 32);
        v11 = 0LL;
        if ( (v10 & 0x20) == 0 )
          v11 = (unsigned __int16 *)(v4 + 72);
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                    (unsigned __int16 *)(v4 + 88),
                                    v11,
                                    v10,
                                    &v19,
                                    *(_DWORD *)(v4 + 264));
        v13 = v20;
        if ( LoadedDllByNameLockHeld == -1073741515 )
        {
          v14 = *(_QWORD *)(v4 + 48);
          v18[0] = *(_DWORD *)(v20 + 8);
          v18[1] = *(_DWORD *)(v20 + 80);
          LdrpFindLoadedDllByMappingLockHeld(v14, v20, v18, &v19);
        }
        if ( !v19 )
        {
          LdrpInsertDataTableEntry(v4);
          LdrpInsertModuleToIndexLockHeld(v4, v13);
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( v19 )
        {
          LdrpLoadContextReplaceModule(a1, v19);
          return (unsigned int)v3;
        }
      }
      if ( (void *)qword_18015F4D0 == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = LdrpCompleteMapModule(a1, v20, v6);
        if ( v3 >= 0 )
        {
          v3 = LdrpProcessMappedModule(v4, *(unsigned int *)(a1 + 32), 1LL);
          if ( v3 >= 0 )
          {
            LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v4);
            v15 = *(_QWORD *)(a1 + 48);
            if ( v15 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v15 + 48);
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
              LdrpLogDllState(*(_QWORD *)(v4 + 48), v4 + 72, 5294LL);
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
