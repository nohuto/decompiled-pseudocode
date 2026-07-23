/*
 * XREFs of IopCreateCmResourceList @ 0x14072E1F8
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x1409C19B8 (IopAllocateLegacyBootResources.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char *__fastcall IopCreateCmResourceList(__int64 a1, int a2, int a3, _QWORD *a4)
{
  unsigned int *v4; // r15
  int v7; // r9d
  __int64 v8; // rbp
  __int64 v9; // rdi
  _DWORD *v10; // rsi
  _DWORD *v11; // rcx
  __int64 v12; // r10
  unsigned int v13; // eax
  _DWORD *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rax
  SIZE_T v19; // rdi
  char *PoolWithTag; // rax
  char *v21; // rbx
  SIZE_T v22; // rbp
  _DWORD *v23; // rax
  _DWORD *v24; // r12
  char *v25; // r14
  unsigned int v26; // ebp
  char *i; // r13
  unsigned int v28; // eax
  _DWORD *v29; // rcx
  size_t v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax

  v4 = (unsigned int *)IopInitHalResources;
  v7 = a3;
  v8 = 4LL;
  v9 = 0LL;
  v10 = (char *)IopInitHalResources + 4;
  v11 = (char *)IopInitHalResources + 4;
  if ( !*(_DWORD *)IopInitHalResources )
    goto LABEL_12;
  v12 = *(unsigned int *)IopInitHalResources;
  do
  {
    v13 = v11[3];
    v14 = v11 + 4;
    v15 = 16LL;
    if ( v13 )
    {
      v16 = v13;
      do
      {
        v17 = 20LL;
        if ( *(_BYTE *)v14 == 5 )
          v17 = (unsigned int)v14[1] + 20LL;
        v15 += v17;
        v14 = (_DWORD *)((char *)v14 + v17);
        --v16;
      }
      while ( v16 );
      v7 = a3;
    }
    if ( *v11 == a2 && v11[1] == v7 )
      v9 += v15;
    v8 += v15;
    v11 = (_DWORD *)((char *)v11 + v15);
    --v12;
  }
  while ( v12 );
  if ( !v9 )
  {
LABEL_12:
    *a4 = IopInitHalResources;
    return 0LL;
  }
  v19 = v9 + 4;
  if ( v19 == v8 )
  {
    *a4 = 0LL;
    return (char *)v4;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x20207050u);
    v21 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a4 = 0LL;
      return 0LL;
    }
    memset(PoolWithTag, 0, v19);
    v22 = v8 - v19;
    v23 = ExAllocatePoolWithTag(PagedPool, v22 + 4, 0x20207050u);
    *a4 = v23;
    v24 = v23;
    if ( !v23 )
    {
      ExFreePoolWithTag(v21, 0);
      return 0LL;
    }
    memset(v23, 0, v22 + 4);
    *(_DWORD *)v21 = 0;
    v25 = v21 + 4;
    *v24 = 0;
    v26 = 0;
    for ( i = (char *)(v24 + 1); v26 < *v4; ++v26 )
    {
      v28 = v10[3];
      v29 = v10 + 4;
      v30 = 16LL;
      if ( v28 )
      {
        v31 = v28;
        do
        {
          v32 = 20LL;
          if ( *(_BYTE *)v29 == 5 )
            v32 = (unsigned int)v29[1] + 20LL;
          v30 += v32;
          v29 = (_DWORD *)((char *)v29 + v32);
          --v31;
        }
        while ( v31 );
      }
      if ( *v10 == a2 && v10[1] == a3 )
      {
        ++*(_DWORD *)v21;
        memmove(v25, v10, v30);
        v25 += v30;
      }
      else
      {
        ++*v24;
        memmove(i, v10, v30);
        i += v30;
      }
      v10 = (_DWORD *)((char *)v10 + v30);
    }
    return v21;
  }
}
