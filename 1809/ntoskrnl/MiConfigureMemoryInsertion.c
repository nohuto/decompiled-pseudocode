/*
 * XREFs of MiConfigureMemoryInsertion @ 0x14084E100
 * Callers:
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiConfigureMemoryInsertion(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r11
  __int64 v8; // rax
  unsigned int *v9; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // r10
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r9
  SIZE_T v20; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v22; // rdx
  char *v23; // r15
  _BYTE *v24; // rsi
  unsigned __int64 *v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // r12
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // r9d
  __int64 v34; // [rsp+80h] [rbp+18h]
  unsigned __int64 v35; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a3 + 24);
  v5 = *(_QWORD *)(a3 + 16);
  *a1 = 0LL;
  v35 = v3;
  v7 = v3 + v5;
  v8 = *a2;
  if ( *(_QWORD *)a3 )
    v9 = &a2[4 * v8 + 4];
  else
    v9 = 0LL;
  if ( (int)v8 + 1 < (unsigned int)v8 )
    return 3221225626LL;
  v10 = *a2;
  v11 = 16LL * (unsigned int)(v8 - 1);
  v12 = v11 + 48;
  if ( v9 )
    v12 = v11 + 2 * ((unsigned int)(v8 + 1) + 24LL);
  v13 = 0LL;
  v34 = 1LL;
  v14 = 0LL;
  v15 = a2 + 6;
  v16 = 1LL;
  while ( 1 )
  {
    v17 = *(v15 - 1);
    if ( *v15 )
    {
      v18 = *v15 + v17;
      if ( v5 >= v17 )
      {
        if ( v5 < v18 )
          return 3221225496LL;
      }
      else if ( v7 > v17 )
      {
        return 3221225496LL;
      }
      if ( (v5 == v18 || v7 == v17)
        && (!v9 || *((_BYTE *)v9 + 2 * v13) == *(_BYTE *)(a3 + 32)
                && *((_BYTE *)v9 + 2 * v13 + 1) == *(_BYTE *)(a3 + 33)) )
      {
        if ( v16 == 1 )
        {
          v14 = v13;
          v16 = 0LL;
        }
        else
        {
          v16 = -1LL;
        }
        v34 = v16;
      }
    }
    if ( ++v13 >= v10 )
      break;
    v15 += 2;
  }
  v20 = 16 * v16 + v12;
  if ( v9 )
    v20 += 2 * (v10 + v16);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x20206D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = &MiSystemPartition;
  v22 = a2 + 4;
  PoolWithTag[1] = 1LL;
  v23 = (char *)(PoolWithTag + 2);
  *((_DWORD *)PoolWithTag + 4) = v16 + v10;
  v24 = &PoolWithTag[2 * (unsigned int)(v16 + v10) + 4];
  PoolWithTag[3] = v35 + *((_QWORD *)a2 + 1);
  v25 = PoolWithTag + 4;
  if ( v34 == -1 )
  {
    v26 = 4 * v14;
    memmove(v25, v22, 16 * v14 + 16);
    if ( v9 )
      memmove(v24, v9, 2 * v14 + 2);
    *(_QWORD *)&v23[v26 * 4 + 24] += v35 + *(_QWORD *)&a2[v26 + 10];
    if ( v14 + 2 != v10 )
    {
      v27 = v10 - v14;
      memmove(&v23[v26 * 4 + 32], &a2[v26 + 12], 16 * v27 - 32);
      if ( v9 )
        memmove(&v24[2 * v14 + 2], (char *)v9 + 2 * v14 + 4, 2 * v27 - 4);
    }
  }
  else if ( v34 )
  {
    v31 = 0LL;
    v32 = 0;
    do
    {
      if ( !v32 && v35 + v5 <= *v22 )
      {
        *v25 = v5;
        v25[1] = v35;
        v25 += 2;
        if ( v9 )
        {
          v24[1] = *(_BYTE *)(a3 + 33);
          *v24 = *(_BYTE *)(a3 + 32);
          v24 += 2;
        }
        v32 = 1;
      }
      *(_OWORD *)v25 = *(_OWORD *)v22;
      v25 += 2;
      if ( v9 )
      {
        *(_WORD *)v24 = *((_WORD *)v9 + v31);
        v24 += 2;
      }
      ++v31;
      v22 += 2;
    }
    while ( v31 != *a2 );
    if ( !v32 )
    {
      *v25 = v5;
      v25[1] = v35;
      if ( v9 )
      {
        v24[1] = *(_BYTE *)(a3 + 33);
        *v24 = *(_BYTE *)(a3 + 32);
      }
    }
  }
  else
  {
    memmove(v25, v22, 16 * v10);
    if ( v9 )
      memmove(v24, v9, 2 * v10);
    v28 = 2 * v14;
    v29 = *(_QWORD *)&a2[2 * v28 + 4];
    v30 = *(_QWORD *)&a2[2 * v28 + 6];
    *(_QWORD *)&v23[8 * v28 + 24] += v35;
    if ( v5 != v29 + v30 )
      *(_QWORD *)&v23[8 * v28 + 16] = v5;
  }
  *a1 = v23;
  return 0LL;
}
