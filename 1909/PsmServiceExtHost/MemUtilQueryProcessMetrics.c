/*
 * XREFs of MemUtilQueryProcessMetrics @ 0x1800386D0
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18003829C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     MemUtilGetProcessSnapshot @ 0x18003884C (MemUtilGetProcessSnapshot.c)
 *     MemUtilQueryProcessCommit @ 0x18007F5D4 (MemUtilQueryProcessCommit.c)
 *     MemUtilQueryProcessProcessModified @ 0x18007F694 (MemUtilQueryProcessProcessModified.c)
 */

__int64 __fastcall MemUtilQueryProcessMetrics(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r14
  int v6; // r12d
  __int64 v7; // rdx
  int v8; // r15d
  unsigned int ProcessSnapshot; // eax
  unsigned int *v10; // rbp
  unsigned int v11; // ebx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD Key[24]; // [rsp+30h] [rbp-88h] BYREF
  LPVOID lpMem; // [rsp+D8h] [rbp+20h] BYREF

  lpMem = 0LL;
  v3 = a2;
  if ( (a3 & 0x44) == 0x44 )
  {
    return 87;
  }
  else
  {
    v6 = a3 & 4;
    v7 = (v6 != 0) | 2u;
    v8 = a3 & 0x40;
    if ( (a3 & 0x40) == 0 )
      v7 = (a3 & 4) != 0;
    ProcessSnapshot = MemUtilGetProcessSnapshot(&lpMem, v7);
    v10 = (unsigned int *)lpMem;
    v11 = ProcessSnapshot;
    if ( !ProcessSnapshot )
    {
      qsort(
        (char *)lpMem + 16,
        *((unsigned int *)lpMem + 2),
        0x60uLL,
        (_CoreCrtNonSecureSearchSortCompareFunction)MemUtilProcessCompareRoutine);
      v12 = a1 + (v3 << 6);
      Key[0] = 2;
      if ( a1 < v12 )
      {
        v13 = a1 + 4;
        do
        {
          v14 = *(_DWORD *)(v13 - 4);
          *(_DWORD *)v13 = 0;
          Key[1] = v14;
          v15 = bsearch(
                  Key,
                  v10 + 4,
                  v10[2],
                  0x60uLL,
                  (_CoreCrtNonSecureSearchSortCompareFunction)MemUtilProcessCompareRoutine);
          v16 = v15;
          if ( v15 )
          {
            if ( (a3 & 1) != 0 )
            {
              v17 = v15[4] << 12;
              *(_DWORD *)v13 |= 1u;
              *(_QWORD *)(v13 + 12) = v17;
            }
            if ( (a3 & 2) != 0 && !(unsigned int)MemUtilQueryProcessCommit(*(_DWORD *)(v13 - 4)) )
              *(_DWORD *)v13 |= 2u;
            if ( v6 )
            {
              v20 = v16[9] << 12;
              *(_DWORD *)v13 |= 4u;
              *(_QWORD *)(v13 + 28) = v20;
            }
            if ( (a3 & 8) != 0 )
            {
              v21 = v16[10] << 12;
              *(_DWORD *)v13 |= 8u;
              *(_QWORD *)(v13 + 20) = v21;
            }
            if ( (a3 & 0x20) != 0 && !(unsigned int)MemUtilQueryProcessProcessModified(*(_DWORD *)(v13 - 4)) )
              *(_DWORD *)v13 |= 0x20u;
            if ( v8 )
            {
              v22 = v16[9] << 12;
              *(_DWORD *)v13 |= 0x40u;
              *(_QWORD *)(v13 + 44) = v22;
            }
          }
          v13 += 64LL;
        }
        while ( v13 - 4 < v12 );
      }
      v11 = 0;
    }
    if ( v10 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v10);
    }
  }
  return v11;
}
