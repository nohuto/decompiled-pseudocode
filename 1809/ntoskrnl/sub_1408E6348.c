/*
 * XREFs of sub_1408E6348 @ 0x1408E6348
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408E6348(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  LARGE_INTEGER *QuadPart; // rax
  NTSTATUS v16; // eax
  NTSTATUS v17; // esi
  NTSTATUS v18; // eax
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // r14d
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edx
  char *PoolWithTag; // rax
  char *v26; // rdx
  int v27; // esi
  char *v28; // rax
  __int64 v29; // r9
  unsigned int v30; // r10d
  char *v31; // r11
  unsigned int v32; // ecx
  unsigned int v33; // eax
  char *v34; // r9
  unsigned int v35; // eax
  unsigned int v36; // esi
  char *v37; // rcx
  char *v38; // rdx
  __int64 v39; // rax
  LARGE_INTEGER v40; // xmm0_8
  LARGE_INTEGER v42; // [rsp+30h] [rbp-38h]
  LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF
  int v44; // [rsp+80h] [rbp+18h]

  v44 = a3;
  v4 = 0;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( !v8 || *(_DWORD *)a1 <= 3u )
  {
    v7 = -1073741811;
    goto LABEL_26;
  }
  for ( i = 0; i < 3; ++i )
  {
    v11 = -1LL;
    if ( v8 + 4 >= v8 )
      v11 = v8 + 4;
    v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
      goto LABEL_22;
    v12 = v11 + *(unsigned int *)v8;
    v8 = -1LL;
    if ( v12 >= v11 )
      v8 = v12;
    v7 = v12 < v11 ? 0xC0000095 : 0;
    if ( v12 < v11 )
      goto LABEL_22;
  }
  v13 = *(_DWORD *)v8;
  v14 = -1LL;
  if ( v8 + 4 >= v8 )
    v14 = v8 + 4;
  v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
  if ( v8 + 4 < v8 )
  {
LABEL_22:
    v13 = v44;
    QuadPart = (LARGE_INTEGER *)Interval.QuadPart;
    goto LABEL_23;
  }
  QuadPart = 0LL;
  if ( v13 )
    QuadPart = (LARGE_INTEGER *)v14;
LABEL_23:
  if ( (v7 & 0x80000000) == 0 )
  {
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v42 = *QuadPart;
LABEL_26:
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    Interval.QuadPart = -35000000LL;
    do
    {
      v16 = KeDelayExecutionThread(1, 1u, &Interval);
      v17 = v16;
    }
    while ( v16 == 257 );
    if ( v16 >= 0 && v16 != 192 )
    {
      Interval.QuadPart = -270000000LL;
      do
      {
        v18 = KeWaitForSingleObject(&stru_140407480, UserRequest, 1, 1u, &Interval);
        v17 = v18;
      }
      while ( v18 == 257 );
      if ( v18 >= 0 && v18 != 192 && v18 != 258 )
        KeReleaseMutex(&stru_140407480, 0);
    }
    v19 = *(_DWORD *)(a2 + 32);
    v20 = *(_DWORD *)(a2 + 16) + 48;
    v21 = -1;
    v22 = -1;
    if ( v20 >= 0x30 )
      v22 = v20;
    v7 = v20 < 0x30 ? 0xC0000095 : 0;
    if ( v20 >= 0x30 )
    {
      v23 = v22 + 4;
      v24 = -1;
      if ( v22 + 4 >= v22 )
        v24 = v22 + 4;
      v7 = v23 < v22 ? 0xC0000095 : 0;
      if ( v23 >= v22 )
        v7 = v24 + v19 < v24 ? 0xC0000095 : 0;
    }
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    *(_DWORD *)(a4 + 4) = 20;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
    v26 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
    v27 = v17 | 0x10000000;
    v28 = PoolWithTag + 4;
    v29 = -1LL;
    v30 = 0;
    if ( v28 >= v26 )
      v29 = (__int64)v28;
    v7 = v28 < v26 ? 0xC0000095 : 0;
    if ( v28 >= v26 )
    {
      if ( v26 + 8 > &v26[*(unsigned int *)(a4 + 4)] )
        return (unsigned int)-1073741789;
      *(_DWORD *)v26 = 4;
      *(_DWORD *)v29 = v27;
      v30 = ++*(_DWORD *)a4;
    }
    if ( v28 < v26 )
      return v7;
    v31 = *(char **)(a4 + 8);
    Interval = v42;
    if ( !v31 )
    {
      v32 = *(_DWORD *)(a4 + 4);
      v33 = v32 + 12;
      if ( v32 + 12 >= v32 )
        v21 = v32 + 12;
      v7 = v33 < v32 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v21;
      if ( v33 >= v32 )
      {
        v7 = 0;
        *(_DWORD *)a4 = v30 + 1;
      }
      return v7;
    }
    v34 = v31;
    if ( v30 )
    {
      do
      {
        v35 = -1;
        if ( *(_DWORD *)v34 < 0xFFFFFFFC )
          v35 = *(_DWORD *)v34 + 4;
        v7 = *(_DWORD *)v34 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v34 + 4) < 4 )
          return v7;
        v36 = v35;
        v37 = v34;
        v38 = &v34[v35];
        v39 = -1LL;
        if ( v38 >= v34 )
          v39 = (__int64)&v34[v36];
        v34 = (char *)v39;
        v7 = v38 < v37 ? 0xC0000095 : 0;
        if ( v38 < v37 )
          return v7;
      }
      while ( ++v4 < v30 );
    }
    if ( v34 + 4 >= v34 )
      v9 = (__int64)(v34 + 4);
    v7 = v34 + 4 < v34 ? 0xC0000095 : 0;
    if ( v34 + 4 < v34 )
      return v7;
    if ( v34 + 12 <= &v31[*(unsigned int *)(a4 + 4)] )
    {
      v40 = Interval;
      *(_DWORD *)v34 = 8;
      *(LARGE_INTEGER *)v9 = v40;
      ++*(_DWORD *)a4;
      return v7;
    }
    return (unsigned int)-1073741789;
  }
  return v7;
}
