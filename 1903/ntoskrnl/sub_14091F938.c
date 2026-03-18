/*
 * XREFs of sub_14091F938 @ 0x14091F938
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     KeQueryTimeIncrement @ 0x14007D0E0 (KeQueryTimeIncrement.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14091F938(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r8d
  unsigned int *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // r8
  unsigned int *v10; // rdx
  unsigned int v11; // edx
  unsigned int *v12; // rcx
  unsigned int *v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rbx
  ULONG TimeIncrement; // eax
  int v17; // edx
  unsigned int v18; // ecx
  _DWORD *PoolWithTag; // rax
  unsigned int v20; // r9d
  __int64 v21; // r10
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v29; // [rsp+30h] [rbp-18h]
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

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
    v12 = v7 + 1;
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
      v29 = *(_QWORD *)v13;
      goto LABEL_19;
    }
    return (unsigned int)-1073741789;
  }
  v6 = -1073741811;
LABEL_19:
  if ( (v6 & 0x80000000) == 0 )
  {
    Timeout.QuadPart = -270000000LL;
    v14 = KeWaitForSingleObject(&stru_14042C9C0, UserRequest, 1, 0, &Timeout);
    if ( v14 >= 0 && v14 != 192 && v14 != 258 )
    {
      if ( stru_14042C9A0.Header.SignalState || !dword_1409AD16C )
      {
        v15 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        dword_1409AD16C = 1;
        qword_1409AD180 = v15 * TimeIncrement / 10000;
        KeResetEvent(&stru_14042C9A0);
      }
      KeReleaseMutex(&stru_14042C9C0, 0);
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
        if ( PoolWithTag + 1 >= PoolWithTag )
        {
          if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
            return (unsigned int)-1073741789;
          *PoolWithTag = 4;
          PoolWithTag[1] = 0x10000000;
          v20 = ++*(_DWORD *)a4;
          v21 = *(_QWORD *)(a4 + 8);
          if ( !v21 )
          {
            v22 = *(_DWORD *)(a4 + 4);
            v23 = -1;
            v24 = v22 + 12;
            if ( v22 + 12 >= v22 )
              v23 = v22 + 12;
            v6 = v24 < v22 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v23;
            if ( v24 >= v22 )
            {
              v6 = 0;
              *(_DWORD *)a4 = v20 + 1;
            }
            return v6;
          }
          v25 = 0;
          v26 = *(_QWORD *)(a4 + 8);
          if ( v20 )
          {
            while ( 1 )
            {
              v27 = *(_DWORD *)v26 + 4;
              if ( *(_DWORD *)v26 >= 0xFFFFFFFC || v26 + v27 < v26 )
                break;
              ++v25;
              v26 += v27;
              if ( v25 >= v20 )
                goto LABEL_43;
            }
          }
          else
          {
LABEL_43:
            if ( v26 + 4 >= v26 )
            {
              v6 = 0;
              if ( v26 + 12 <= v21 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v26 = 8;
                *(_QWORD *)(v26 + 4) = v29;
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
