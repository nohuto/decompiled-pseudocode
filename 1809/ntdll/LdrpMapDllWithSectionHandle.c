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
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180076FF4 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpCorProcessImports @ 0x180087A24 (LdrpCorProcessImports.c)
 */

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdi
  ULONG64 v5; // r8
  int v6; // r15d
  int v7; // r8d
  _UNICODE_STRING *v8; // rdx
  int LoadedDllByNameLockHeld; // eax
  PIMAGE_NT_HEADERS v10; // r14
  __int64 v11; // rax
  PIMAGE_NT_HEADERS v13; // rcx
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+78h] [rbp+20h] BYREF

  v2 = LdrpMinimalMapModule();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 160);
    v14 = 0LL;
    v6 = v2;
    v3 = RtlImageNtHeaderEx(0, *(PVOID *)(v4 + 48), v5, &OutHeaders);
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v13 = OutHeaders;
        v6 = 0;
        *(_DWORD *)(v4 + 128) = OutHeaders->FileHeader.TimeDateStamp;
        *(_DWORD *)(v4 + 64) = v13->OptionalHeader.SizeOfImage;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v7 = *(_DWORD *)(a1 + 32);
        v8 = 0LL;
        if ( (v7 & 0x20) == 0 )
          v8 = (_UNICODE_STRING *)(v4 + 72);
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                    (PUNICODE_STRING)(v4 + 88),
                                    v8,
                                    v7,
                                    &v14,
                                    *(_DWORD *)(v4 + 264));
        v10 = OutHeaders;
        if ( LoadedDllByNameLockHeld == -1073741515 )
          LdrpFindLoadedDllByMappingLockHeld(*(PVOID *)(v4 + 48), OutHeaders);
        if ( !v14 )
        {
          LdrpInsertDataTableEntry(v4);
          LdrpInsertModuleToIndexLockHeld(v4, (__int64)v10);
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( v14 )
        {
          LdrpLoadContextReplaceModule(a1, v14);
          return (unsigned int)v3;
        }
      }
      if ( LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = LdrpCompleteMapModule(a1, (__int64)OutHeaders, v6);
        if ( v3 >= 0 )
        {
          v3 = LdrpProcessMappedModule(v4, *(unsigned int *)(a1 + 32), 1LL);
          if ( v3 >= 0 )
          {
            LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v4);
            v11 = *(_QWORD *)(a1 + 48);
            if ( v11 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v11 + 48);
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
