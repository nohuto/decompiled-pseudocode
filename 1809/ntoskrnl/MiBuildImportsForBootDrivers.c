/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x1409CF458
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x1409CF350 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2C70 (RtlpImageDirectoryEntryToDataEx.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 MiBuildImportsForBootDrivers()
{
  PVOID *v0; // rcx
  int v1; // ebx
  unsigned int v2; // r12d
  PVOID *v3; // rbp
  PVOID *v4; // rsi
  PVOID v5; // rax
  __int16 v6; // ax
  char *PoolWithTag; // r15
  PVOID *i; // r14
  NTSTATUS v9; // eax
  unsigned __int64 *v10; // rdi
  PVOID v11; // rcx
  unsigned int v12; // r11d
  unsigned __int64 v13; // r8
  unsigned int j; // r10d
  unsigned int v15; // edi
  unsigned __int64 v16; // rcx
  void **v17; // rdx
  __int64 v18; // r8
  PVOID *v19; // rax
  PVOID *v20; // rdx
  unsigned int v21; // r9d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // r9d
  char *v26; // rdx
  __int64 v27; // r10
  PVOID *v28; // rcx
  PVOID *k; // rbx
  PVOID v31; // rcx
  unsigned int v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+78h] [rbp+10h] BYREF
  PVOID *v34; // [rsp+80h] [rbp+18h]

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = 0;
  v34 = &PsLoadedModuleList;
  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( PsLoadedModuleList == &PsLoadedModuleList )
    return 3221226021LL;
  do
  {
    v5 = v0[6];
    if ( (PVOID)PsNtosImageBase == v5 )
    {
      v3 = v0;
    }
    else if ( PsHalImageBase == v5 )
    {
      v4 = v0;
    }
    v6 = ((_DWORD)v0[13] & 0x4000000) == 0 || v0 == v4 || v0 == v3;
    *((_WORD *)v0 + 54) = v6;
    ++v2;
    v0[17] = (PVOID)1;
    v0 = (PVOID *)*v0;
  }
  while ( v0 != &PsLoadedModuleList );
  if ( !v3 || !v4 )
    return 3221226021LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v2, 0x54446D4Du);
  if ( PoolWithTag )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v9 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)i[6], 1, 0xCu, (int)&v32, &v33);
      v10 = (unsigned __int64 *)v33;
      if ( v9 < 0 )
        v10 = 0LL;
      v33 = (__int64)v10;
      if ( !v10 )
        goto LABEL_15;
      memset(PoolWithTag, 0, 8LL * v2);
      v11 = 0LL;
      v12 = v32 >> 3;
      v13 = 0LL;
      for ( j = 0; j < v12; ++v10 )
      {
        if ( !v11 || *v10 < (unsigned __int64)v11 || *v10 >= v13 )
        {
          v20 = (PVOID *)PsLoadedModuleList;
          v21 = 0;
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            v22 = *v10;
            while ( 1 )
            {
              v11 = v20[6];
              v13 = (unsigned __int64)v11 + *((unsigned int *)v20 + 16);
              if ( v22 >= (unsigned __int64)v11 && v22 < v13 )
                break;
              v20 = (PVOID *)*v20;
              ++v21;
              if ( v20 == v34 )
                goto LABEL_37;
            }
            *(_QWORD *)&PoolWithTag[8 * v21] = v20;
          }
LABEL_37:
          v23 = *v10;
          if ( *v10 < (unsigned __int64)v11 || v23 >= v13 )
          {
            if ( v23 )
              goto LABEL_62;
            v11 = 0LL;
          }
        }
        ++j;
      }
      v32 = 0;
      v15 = 0;
      v16 = 0LL;
      if ( !v2 )
        goto LABEL_15;
      v17 = (void **)PoolWithTag;
      v18 = v2;
      do
      {
        v19 = (PVOID *)*v17;
        if ( *v17 && v19 != v3 && v19 != v4 && v19 != i )
        {
          v16 = (unsigned __int64)*v17;
          ++v15;
        }
        ++v17;
        --v18;
      }
      while ( v18 );
      v32 = v15;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          i[17] = (PVOID)(v16 | 1);
          ++*(_WORD *)(v16 + 108);
        }
        else
        {
          if ( v15 > 0x1FFFFFFE || (v24 = ExAllocatePoolWithTag(PagedPool, 8 * v15 + 8, 0x54446D4Du)) == 0LL )
          {
LABEL_62:
            v1 = 1;
            break;
          }
          v25 = 0;
          *v24 = v15;
          v26 = PoolWithTag;
          v27 = v2;
          do
          {
            v28 = *(PVOID **)v26;
            if ( *(_QWORD *)v26 && v28 != v3 && v28 != v4 && v28 != i )
            {
              v24[v25 + 1] = v28;
              ++*(_WORD *)(*(_QWORD *)v26 + 108LL);
              ++v25;
            }
            v26 += 8;
            --v27;
          }
          while ( v27 );
          i[17] = v24;
        }
      }
      else
      {
LABEL_15:
        i[17] = (PVOID)-2LL;
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    v3[17] = (PVOID)1;
    v4[17] = (PVOID)1;
    if ( v1 != 1 )
      return 0LL;
    for ( k = (PVOID *)PsLoadedModuleList; k != &PsLoadedModuleList; k = (PVOID *)*k )
    {
      v31 = k[17];
      if ( v31 != (PVOID)1 && v31 != (PVOID)-2LL && ((unsigned __int8)v31 & 1) == 0 )
        ExFreePoolWithTag(v31, 0);
      k[17] = (PVOID)1;
      *((_WORD *)k + 54) = 1;
    }
  }
  return 3221225626LL;
}
