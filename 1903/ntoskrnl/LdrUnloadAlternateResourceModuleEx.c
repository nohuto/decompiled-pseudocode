/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x140180250
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x14011D9F4 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x14018023C (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x14006B690 (KeReleaseMutant.c)
 *     LdrpInitMuiCrits @ 0x14011DB94 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x14066EBA0 (MmUnmapViewInSystemSpace.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  BOOLEAN v3; // bl
  int v4; // edi
  int v5; // r15d
  PVOID *v6; // rsi
  char *v7; // rcx
  PVOID v8; // rcx
  int v9; // ebx
  int v10; // eax
  PVOID PoolWithTag; // rax
  void *v12; // rdi
  PVOID v13; // rbx

  v3 = 0;
  if ( !DllHandle )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v4 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( 1 )
    {
      if ( v4 <= 0 )
        goto LABEL_21;
      v5 = v4 - 1;
      v6 = (PVOID *)((char *)AlternateResourceModules + 64 * (__int64)(v4 - 1));
      if ( v6[1] == DllHandle )
        break;
LABEL_5:
      v4 = v5;
    }
    v7 = (char *)v6[4];
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v7);
      v8 = v6[5];
      if ( v8 )
      {
        ZwClose(v8);
        v6[5] = 0LL;
      }
      v6[4] = 0LL;
    }
    v9 = AlternateResourceModuleCount;
    if ( v4 != AlternateResourceModuleCount )
      memmove(v6, v6 + 8, (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - v4) << 6);
    AlternateResourceModuleCount = v9 - 1;
    if ( v9 == 1 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      v10 = 0;
    }
    else
    {
      if ( v9 - 1 >= (unsigned int)(AltResMemBlockCount - 32) )
      {
LABEL_20:
        v3 = 1;
        goto LABEL_5;
      }
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6,
                      0x69507472u);
      v12 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v3 = 0;
        goto LABEL_21;
      }
      v13 = AlternateResourceModules;
      memmove(PoolWithTag, AlternateResourceModules, (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      ExFreePoolWithTag(v13, 0);
      AlternateResourceModules = v12;
      v10 = AltResMemBlockCount - 32;
    }
    AltResMemBlockCount = v10;
    goto LABEL_20;
  }
  v3 = 1;
LABEL_21:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v3;
}
