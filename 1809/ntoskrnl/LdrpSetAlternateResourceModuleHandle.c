/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x140174C40
 * Callers:
 *     LdrpGetRcConfig @ 0x1400F3FB0 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F40EC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x14071C424 (LdrResGetRCConfig.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     KeReleaseMutant @ 0x1400BF950 (KeReleaseMutant.c)
 *     LdrpInitMuiCrits @ 0x1400F44B8 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1405E0390 (MmUnmapViewInSystemSpace.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        PVOID *a2,
        HANDLE *a3,
        __int64 a4,
        __int16 a5,
        int a6,
        int a7,
        __int64 a8)
{
  HANDLE v10; // rdi
  unsigned int i; // eax
  unsigned __int64 v12; // rcx
  char *v13; // rsi
  unsigned int j; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  char *v17; // rcx
  PIMAGE_NT_HEADERS v18; // rax
  unsigned int CheckSum; // r9d
  int v20; // r8d
  unsigned __int64 v21; // rcx
  char *v22; // rdx
  unsigned __int64 v23; // rcx
  __int16 v24; // dx
  char *v25; // rax
  PVOID v26; // rax
  char *PoolWithTag; // rax
  unsigned int v28; // ebx

  v10 = 0LL;
  if ( !a1 || (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  LdrpInitMuiCrits(a1, (__int64)a2, (__int64)a3);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = 0; i < AlternateResourceModuleCount; ++i )
  {
    v12 = (unsigned __int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v12 + 8) == a1 )
    {
      if ( (a6 & 2) != 0 && *(_QWORD *)((char *)AlternateResourceModules + v12 + 16) )
        goto LABEL_53;
      if ( (a6 & 1) != 0 )
      {
        v16 = (unsigned __int64)i << 6;
        if ( *(_QWORD *)((char *)AlternateResourceModules + v16 + 32) )
        {
          if ( a5 && *(_WORD *)((char *)AlternateResourceModules + v16) == a5 )
          {
            if ( *a2 != (PVOID)-1LL )
            {
              MmUnmapViewInSystemSpace(*a2);
              if ( a3 )
                ZwClose(*a3);
            }
            v17 = (char *)AlternateResourceModules;
            *a2 = *(PVOID *)((char *)AlternateResourceModules + v16 + 32);
            if ( a3 )
              *a3 = *(HANDLE *)&v17[v16 + 40];
            goto LABEL_53;
          }
        }
      }
    }
  }
  if ( (a6 & 0x10) != 0 )
    goto LABEL_53;
  v13 = (char *)AlternateResourceModules;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(
                              PagedPool,
                              (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6,
                              0x69507472u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_53;
      v28 = AltResMemBlockCount;
      memset(PoolWithTag, 0, (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6);
      memmove(v13, AlternateResourceModules, (unsigned __int64)v28 << 6);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = v13;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    v25 = (char *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x69507472u);
    v13 = v25;
    if ( !v25 )
      goto LABEL_53;
    memset(v25, 0, 0x800uLL);
    AlternateResourceModules = v13;
    AltResMemBlockCount = 32;
  }
  for ( j = 0; j < AlternateResourceModuleCount; ++j )
  {
    v15 = (unsigned __int64)j << 6;
    if ( *(_QWORD *)&v13[v15 + 8] == a1 )
    {
      if ( (a6 & 2) != 0 && !*(_QWORD *)&v13[v15 + 16] )
      {
        *(_QWORD *)&v13[v15 + 16] = a4;
        *(_DWORD *)&v13[v15 + 56] = a7;
        goto LABEL_53;
      }
      if ( (a6 & 1) != 0 )
      {
        v23 = (unsigned __int64)j << 6;
        if ( !*(_QWORD *)&v13[v23 + 32] )
        {
          v24 = *(_WORD *)&v13[v23];
          if ( v24 == a5 || !v24 )
          {
            *(_QWORD *)&v13[v23 + 32] = *a2;
            if ( a3 )
              v10 = *a3;
            *(_QWORD *)&v13[v23 + 40] = v10;
            *(_WORD *)&v13[v23] = a5;
            *(_DWORD *)&v13[v23 + 56] = a7;
            *(_QWORD *)&v13[v23 + 48] = a8;
            goto LABEL_53;
          }
        }
      }
    }
  }
  v18 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( v18 )
  {
    CheckSum = v18->OptionalHeader.CheckSum;
    v20 = AlternateResourceModuleCount;
    v21 = (unsigned __int64)(unsigned int)AlternateResourceModuleCount << 6;
    v22 = (char *)AlternateResourceModules;
    *(_QWORD *)((char *)AlternateResourceModules + v21 + 8) = a1;
    *(_QWORD *)&v22[v21 + 16] = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a2 )
        v26 = *a2;
      else
        v26 = 0LL;
      *(_QWORD *)&v22[v21 + 32] = v26;
      if ( a3 )
        v10 = *a3;
      *(_QWORD *)&v22[v21 + 40] = v10;
      *(_QWORD *)&v22[v21 + 48] = a8;
    }
    else
    {
      *(_QWORD *)&v22[v21 + 32] = 0LL;
      *(_QWORD *)&v22[v21 + 40] = 0LL;
      *(_QWORD *)&v22[v21 + 48] = 0LL;
    }
    *(_WORD *)&v22[v21] = a5;
    *(_DWORD *)&v22[v21 + 24] = CheckSum;
    *(_DWORD *)&v22[v21 + 56] = a7;
    AlternateResourceModuleCount = v20 + 1;
  }
LABEL_53:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return 1;
}
