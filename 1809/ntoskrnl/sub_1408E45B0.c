/*
 * XREFs of sub_1408E45B0 @ 0x1408E45B0
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeQueryTimeIncrement @ 0x1400077E0 (KeQueryTimeIncrement.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408E45B0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // edi
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  __int64 *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rbx
  ULONG TimeIncrement; // eax
  int v19; // ebx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // edx
  char *PoolWithTag; // rax
  char *v24; // rdx
  char *v25; // rax
  __int64 v26; // r9
  unsigned int v27; // r10d
  char *v28; // r11
  unsigned int v29; // ecx
  unsigned int v30; // eax
  char *v31; // r9
  unsigned int v32; // eax
  unsigned int v33; // r14d
  char *v34; // rcx
  char *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // xmm0_8
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-48h] BYREF
  __int64 v40; // [rsp+38h] [rbp-40h]
  __int64 v41; // [rsp+40h] [rbp-38h]
  __int64 *v42; // [rsp+48h] [rbp-30h]

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
    v13 = a3;
    v15 = v42;
    goto LABEL_23;
  }
  v15 = 0LL;
  if ( v13 )
    v15 = (__int64 *)v14;
LABEL_23:
  if ( (v7 & 0x80000000) == 0 )
  {
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v40 = *v15;
LABEL_26:
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    Timeout.QuadPart = -270000000LL;
    v16 = KeWaitForSingleObject(&stru_140407480, UserRequest, 1, 0, &Timeout);
    if ( v16 >= 0 && v16 != 192 && v16 != 258 )
    {
      if ( stru_140407460.Header.SignalState || !dword_14096E17C )
      {
        v17 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        dword_14096E17C = 1;
        qword_14096E118 = v17 * TimeIncrement / 10000;
        KeResetEvent(&stru_140407460);
      }
      KeReleaseMutex(&stru_140407480, 0);
    }
    v19 = -1;
    v20 = -1;
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
      v20 = *(_DWORD *)(a2 + 16) + 48;
    v7 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
    if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
    {
      v21 = v20 + 4;
      v22 = -1;
      if ( v20 + 4 >= v20 )
        v22 = v20 + 4;
      v7 = v21 < v20 ? 0xC0000095 : 0;
      if ( v21 >= v20 )
        v7 = v22 + *(_DWORD *)(a2 + 32) < v22 ? 0xC0000095 : 0;
    }
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    *(_DWORD *)(a4 + 4) = 20;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
    v25 = PoolWithTag + 4;
    v26 = -1LL;
    v27 = 0;
    if ( v25 >= v24 )
      v26 = (__int64)v25;
    v7 = v25 < v24 ? 0xC0000095 : 0;
    if ( v25 >= v24 )
    {
      if ( v24 + 8 > &v24[*(unsigned int *)(a4 + 4)] )
        return (unsigned int)-1073741789;
      *(_DWORD *)v24 = 4;
      *(_DWORD *)v26 = 0x10000000;
      v27 = ++*(_DWORD *)a4;
    }
    if ( v25 < v24 )
      return v7;
    v28 = *(char **)(a4 + 8);
    v41 = v40;
    if ( !v28 )
    {
      v29 = *(_DWORD *)(a4 + 4);
      v30 = v29 + 12;
      if ( v29 + 12 >= v29 )
        v19 = v29 + 12;
      v7 = v30 < v29 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v19;
      if ( v30 >= v29 )
      {
        v7 = 0;
        *(_DWORD *)a4 = v27 + 1;
      }
      return v7;
    }
    v31 = v28;
    if ( v27 )
    {
      do
      {
        v32 = -1;
        if ( *(_DWORD *)v31 < 0xFFFFFFFC )
          v32 = *(_DWORD *)v31 + 4;
        v7 = *(_DWORD *)v31 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v31 + 4) < 4 )
          return v7;
        v33 = v32;
        v34 = v31;
        v35 = &v31[v32];
        v36 = -1LL;
        if ( v35 >= v31 )
          v36 = (__int64)&v31[v33];
        v31 = (char *)v36;
        v7 = v35 < v34 ? 0xC0000095 : 0;
        if ( v35 < v34 )
          return v7;
      }
      while ( ++v4 < v27 );
    }
    if ( v31 + 4 >= v31 )
      v9 = (__int64)(v31 + 4);
    v7 = v31 + 4 < v31 ? 0xC0000095 : 0;
    if ( v31 + 4 < v31 )
      return v7;
    if ( v31 + 12 <= &v28[*(unsigned int *)(a4 + 4)] )
    {
      v37 = v41;
      *(_DWORD *)v31 = 8;
      *(_QWORD *)v9 = v37;
      ++*(_DWORD *)a4;
      return v7;
    }
    return (unsigned int)-1073741789;
  }
  return v7;
}
