/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x140180940
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1400DFCF8 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x14018092C (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x14006B900 (KeReleaseMutant.c)
 *     LdrpInitMuiCrits @ 0x1400DFE98 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x140648600 (MmUnmapViewInSystemSpace.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  __int64 v2; // r8
  BOOLEAN v4; // bl
  int v5; // edi
  int v6; // r15d
  PVOID *v7; // rsi
  char *v8; // rcx
  PVOID v9; // rcx
  int v10; // ebx
  int v11; // eax
  PVOID PoolWithTag; // rax
  void *v13; // rdi
  PVOID v14; // rbx

  v4 = 0;
  if ( !DllHandle )
    return 0;
  LdrpInitMuiCrits((__int64)DllHandle, *(__int64 *)&Flags, v2);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v5 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( 1 )
    {
      if ( v5 <= 0 )
        goto LABEL_21;
      v6 = v5 - 1;
      v7 = (PVOID *)((char *)AlternateResourceModules + 64 * (__int64)(v5 - 1));
      if ( v7[1] == DllHandle )
        break;
LABEL_5:
      v5 = v6;
    }
    v8 = (char *)v7[4];
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v8);
      v9 = v7[5];
      if ( v9 )
      {
        ZwClose(v9);
        v7[5] = 0LL;
      }
      v7[4] = 0LL;
    }
    v10 = AlternateResourceModuleCount;
    if ( v5 != AlternateResourceModuleCount )
      memmove(v7, v7 + 8, (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - v5) << 6);
    AlternateResourceModuleCount = v10 - 1;
    if ( v10 == 1 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      v11 = 0;
    }
    else
    {
      if ( v10 - 1 >= (unsigned int)(AltResMemBlockCount - 32) )
      {
LABEL_20:
        v4 = 1;
        goto LABEL_5;
      }
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6,
                      0x69507472u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v4 = 0;
        goto LABEL_21;
      }
      v14 = AlternateResourceModules;
      memmove(PoolWithTag, AlternateResourceModules, (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      ExFreePoolWithTag(v14, 0);
      AlternateResourceModules = v13;
      v11 = AltResMemBlockCount - 32;
    }
    AltResMemBlockCount = v11;
    goto LABEL_20;
  }
  v4 = 1;
LABEL_21:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v4;
}
