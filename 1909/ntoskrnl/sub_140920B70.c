/*
 * XREFs of sub_140920B70 @ 0x140920B70
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140920B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r8d
  unsigned int *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // r8
  unsigned int *v10; // rdx
  unsigned int v11; // edx
  LARGE_INTEGER *v12; // rcx
  LARGE_INTEGER *v13; // rax
  NTSTATUS v14; // eax
  NTSTATUS v15; // ebx
  NTSTATUS v16; // eax
  int v17; // edx
  unsigned int v18; // ecx
  _DWORD *PoolWithTag; // rax
  int v20; // ebx
  unsigned int v21; // r9d
  unsigned __int64 v22; // r10
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned __int64 v27; // rdx
  unsigned int v28; // eax
  LARGE_INTEGER v29; // xmm0_8
  LARGE_INTEGER v31; // [rsp+30h] [rbp-18h]
  LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v9 = *v7;
      v10 = v7 + 1;
      if ( v7 + 1 < v7 )
        goto LABEL_18;
      v7 = (unsigned int *)((char *)v10 + v9);
      if ( (unsigned int *)((char *)v10 + v9) < v10 )
        goto LABEL_18;
    }
    v11 = *v7;
    v12 = (LARGE_INTEGER *)(v7 + 1);
    if ( v7 + 1 < v7 )
    {
LABEL_18:
      v6 = -1073741675;
      goto LABEL_19;
    }
    v13 = 0LL;
    if ( v11 )
      v13 = v12;
    v6 = 0;
    if ( v11 == 8 )
    {
      v31 = *v13;
      goto LABEL_19;
    }
    return (unsigned int)-1073741789;
  }
  v6 = -1073741811;
LABEL_19:
  if ( (v6 & 0x80000000) == 0 )
  {
    Interval.QuadPart = -35000000LL;
    do
    {
      v14 = KeDelayExecutionThread(1, 1u, &Interval);
      v15 = v14;
    }
    while ( v14 == 257 );
    if ( v14 >= 0 && v14 != 192 )
    {
      Interval.QuadPart = -270000000LL;
      do
      {
        v16 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 1u, &Interval);
        v15 = v16;
      }
      while ( v16 == 257 );
      if ( v16 >= 0 && v16 != 192 && v16 != 258 )
        KeReleaseMutex(&Mutex, 0);
    }
    v17 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
    {
      v18 = *(_DWORD *)(a2 + 16) + 52;
      if ( v18 >= *(_DWORD *)(a2 + 16) + 48 )
      {
        v6 = v18 + v17 < v18 ? 0xC0000095 : 0;
        if ( v18 + v17 < v18 )
          return v6;
        *(_DWORD *)(a4 + 4) = 20;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        v20 = v15 | 0x10000000;
        if ( PoolWithTag + 1 >= PoolWithTag )
        {
          if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
            return (unsigned int)-1073741789;
          *PoolWithTag = 4;
          PoolWithTag[1] = v20;
          v21 = ++*(_DWORD *)a4;
          v22 = *(_QWORD *)(a4 + 8);
          Interval = v31;
          if ( !v22 )
          {
            v23 = *(_DWORD *)(a4 + 4);
            v24 = -1;
            v25 = v23 + 12;
            if ( v23 + 12 >= v23 )
              v24 = v23 + 12;
            v6 = v25 < v23 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v24;
            if ( v25 >= v23 )
            {
              v6 = 0;
              *(_DWORD *)a4 = v21 + 1;
            }
            return v6;
          }
          v26 = 0;
          v27 = v22;
          if ( v21 )
          {
            while ( 1 )
            {
              v28 = *(_DWORD *)v27 + 4;
              if ( *(_DWORD *)v27 >= 0xFFFFFFFC || v27 + v28 < v27 )
                break;
              ++v26;
              v27 += v28;
              if ( v26 >= v21 )
                goto LABEL_46;
            }
          }
          else
          {
LABEL_46:
            if ( v27 + 4 >= v27 )
            {
              v6 = 0;
              if ( v27 + 12 <= v22 + *(unsigned int *)(a4 + 4) )
              {
                v29 = Interval;
                *(_DWORD *)v27 = 8;
                *(LARGE_INTEGER *)(v27 + 4) = v29;
                ++*(_DWORD *)a4;
                return v6;
              }
              return (unsigned int)-1073741789;
            }
          }
        }
      }
    }
    return (unsigned int)-1073741675;
  }
  return v6;
}
