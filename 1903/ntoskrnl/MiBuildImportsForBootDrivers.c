/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x140A13EC4
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140A13DBC (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AFB60 (RtlpImageDirectoryEntryToDataEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
  _QWORD *v20; // rax
  unsigned int v21; // r9d
  char *v22; // rdx
  __int64 v23; // r10
  PVOID *v24; // rcx
  PVOID *v25; // rdx
  unsigned int v26; // r9d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
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
    if ( PsNtosImageBase == v5 )
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
          v25 = (PVOID *)PsLoadedModuleList;
          v26 = 0;
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            v27 = *v10;
            while ( 1 )
            {
              v11 = v25[6];
              v13 = (unsigned __int64)v11 + *((unsigned int *)v25 + 16);
              if ( v27 >= (unsigned __int64)v11 && v27 < v13 )
                break;
              v25 = (PVOID *)*v25;
              ++v26;
              if ( v25 == v34 )
                goto LABEL_42;
            }
            *(_QWORD *)&PoolWithTag[8 * v26] = v25;
          }
LABEL_42:
          v28 = *v10;
          if ( *v10 < (unsigned __int64)v11 || v28 >= v13 )
          {
            if ( v28 )
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
          if ( v15 > 0x1FFFFFFE || (v20 = ExAllocatePoolWithTag(PagedPool, 8 * v15 + 8, 0x54446D4Du)) == 0LL )
          {
LABEL_62:
            v1 = 1;
            break;
          }
          v21 = 0;
          *v20 = v15;
          v22 = PoolWithTag;
          v23 = v2;
          do
          {
            v24 = *(PVOID **)v22;
            if ( *(_QWORD *)v22 && v24 != v3 && v24 != v4 && v24 != i )
            {
              v20[v21 + 1] = v24;
              ++*(_WORD *)(*(_QWORD *)v22 + 108LL);
              ++v21;
            }
            v22 += 8;
            --v23;
          }
          while ( v23 );
          i[17] = v20;
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
