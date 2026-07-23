/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x1409D0458
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x1409D0350 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
  unsigned int v19; // r9d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned int v23; // r9d
  __int64 v24; // r10
  PVOID *v25; // rcx
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
          v19 = 0;
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            v20 = *v12;
            while ( 1 )
            {
              v13 = v7[6];
              v8 = (unsigned __int64)v13 + *((unsigned int *)v7 + 16);
              if ( v20 >= (unsigned __int64)v13 && v20 < v8 )
                break;
              v7 = (PVOID *)*v7;
              ++v19;
              if ( v7 == v31 )
                goto LABEL_37;
            }
            *((_QWORD *)PoolWithTag + v19) = v7;
          }
LABEL_37:
          v21 = *v12;
          if ( *v12 < (unsigned __int64)v13 || v21 >= v8 )
          {
            if ( v21 )
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
            || (v22 = ExAllocatePoolWithTag(PagedPool, 8 * v16 + 8, 0x54446D4Du), (v8 = (unsigned __int64)v22) == 0) )
          {
LABEL_62:
            v1 = 1;
            break;
          }
          v23 = 0;
          *v22 = v16;
          v7 = (PVOID *)PoolWithTag;
          v24 = v2;
          do
          {
            v25 = (PVOID *)*v7;
            if ( *v7 && v25 != v3 && v25 != v4 && v25 != i )
            {
              v22[v23 + 1] = v25;
              ++*((_WORD *)*v7 + 54);
              ++v23;
            }
            ++v7;
            --v24;
          }
          while ( v24 );
          i[17] = v22;
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
