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
  PVOID *v7; // rdx
  unsigned __int64 v8; // r8
  PVOID PoolWithTag; // r15
  PVOID *i; // r14
  NTSTATUS v11; // eax
  unsigned __int64 *v12; // rdi
  PVOID v13; // rcx
  unsigned int v14; // r11d
  unsigned int j; // r10d
  unsigned int v16; // edi
  unsigned __int64 v17; // rcx
  PVOID *v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // r10
  PVOID *v22; // rcx
  unsigned int v23; // r9d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  PVOID *k; // rbx
  PVOID v28; // rcx
  unsigned int v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  PVOID *v31; // [rsp+80h] [rbp+18h]

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = 0;
  v31 = &PsLoadedModuleList;
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
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v2, 0x54446D4Du);
  if ( PoolWithTag )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      LOWORD(v8) = 12;
      LOBYTE(v7) = 1;
      v11 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)i[6], (__int64)v7, v8, (__int64)&v29, &v30);
      v12 = (unsigned __int64 *)v30;
      if ( v11 < 0 )
        v12 = 0LL;
      v30 = (__int64)v12;
      if ( !v12 )
        goto LABEL_15;
      memset(PoolWithTag, 0, 8LL * v2);
      v13 = 0LL;
      v14 = v29 >> 3;
      v8 = 0LL;
      for ( j = 0; j < v14; ++v12 )
      {
        if ( !v13 || *v12 < (unsigned __int64)v13 || *v12 >= v8 )
        {
          v7 = (PVOID *)PsLoadedModuleList;
          v23 = 0;
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            v24 = *v12;
            while ( 1 )
            {
              v13 = v7[6];
              v8 = (unsigned __int64)v13 + *((unsigned int *)v7 + 16);
              if ( v24 >= (unsigned __int64)v13 && v24 < v8 )
                break;
              v7 = (PVOID *)*v7;
              ++v23;
              if ( v7 == v31 )
                goto LABEL_42;
            }
            *((_QWORD *)PoolWithTag + v23) = v7;
          }
LABEL_42:
          v25 = *v12;
          if ( *v12 < (unsigned __int64)v13 || v25 >= v8 )
          {
            if ( v25 )
              goto LABEL_62;
            v13 = 0LL;
          }
        }
        ++j;
      }
      v29 = 0;
      v16 = 0;
      v17 = 0LL;
      if ( !v2 )
        goto LABEL_15;
      v7 = (PVOID *)PoolWithTag;
      v8 = v2;
      do
      {
        v18 = (PVOID *)*v7;
        if ( *v7 && v18 != v3 && v18 != v4 && v18 != i )
        {
          v17 = (unsigned __int64)*v7;
          ++v16;
        }
        ++v7;
        --v8;
      }
      while ( v8 );
      v29 = v16;
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          i[17] = (PVOID)(v17 | 1);
          ++*(_WORD *)(v17 + 108);
        }
        else
        {
          if ( v16 > 0x1FFFFFFE
            || (v19 = ExAllocatePoolWithTag(PagedPool, 8 * v16 + 8, 0x54446D4Du), (v8 = (unsigned __int64)v19) == 0) )
          {
LABEL_62:
            v1 = 1;
            break;
          }
          v20 = 0;
          *v19 = v16;
          v7 = (PVOID *)PoolWithTag;
          v21 = v2;
          do
          {
            v22 = (PVOID *)*v7;
            if ( *v7 && v22 != v3 && v22 != v4 && v22 != i )
            {
              v19[v20 + 1] = v22;
              ++*((_WORD *)*v7 + 54);
              ++v20;
            }
            ++v7;
            --v21;
          }
          while ( v21 );
          i[17] = v19;
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
      v28 = k[17];
      if ( v28 != (PVOID)1 && v28 != (PVOID)-2LL && ((unsigned __int8)v28 & 1) == 0 )
        ExFreePoolWithTag(v28, 0);
      k[17] = (PVOID)1;
      *((_WORD *)k + 54) = 1;
    }
  }
  return 3221225626LL;
}
