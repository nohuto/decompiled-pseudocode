/*
 * XREFs of ExpScanSystemLookasideList @ 0x140107278
 * Callers:
 *     KeBalanceSetManager @ 0x140183C10 (KeBalanceSetManager.c)
 * Callees:
 *     ExpComputeLookasideDepth @ 0x1401073F0 (ExpComputeLookasideDepth.c)
 *     ExHeapLookasideRebalance @ 0x1401B760C (ExHeapLookasideRebalance.c)
 */

__int64 ExpScanSystemLookasideList()
{
  __int64 v0; // rbx
  unsigned int v1; // esi
  _GENERAL_LOOKASIDE **p_L; // rdi
  _GENERAL_LOOKASIDE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 result; // rax

  v0 = 9LL;
  v1 = 3 * KeNumberProcessors_0;
  if ( ExpPoolScanCount == (_DWORD)KeNumberProcessors_0 )
  {
    p_L = &KeGetCurrentPrcb()->PPLookasideList[0].L;
    do
    {
      v3 = *p_L;
      if ( *p_L )
      {
        v4 = v3->AllocateMisses - v3->LastAllocateMisses;
        v3->LastAllocateMisses = v3->AllocateMisses;
        ExpComputeLookasideDepth(v3, v4, v1);
      }
      p_L += 2;
      --v0;
    }
    while ( v0 );
  }
  else
  {
    v5 = KiProcessorBlock[ExpPoolScanCount];
    v6 = (__int64 *)(v5 + 2048);
    do
    {
      v7 = *v6;
      if ( *v6 )
      {
        v8 = (unsigned int)(*(_DWORD *)(v7 + 24) - *(_DWORD *)(v7 + 84));
        *(_DWORD *)(v7 + 84) = *(_DWORD *)(v7 + 24);
        ExpComputeLookasideDepth(v7, v8, v1);
      }
      v6 += 2;
      --v0;
    }
    while ( v0 );
    v9 = (_DWORD *)(v5 + 2388);
    v10 = 32LL;
    do
    {
      v11 = (unsigned int)(*(v9 - 16) - *(v9 - 1) - (*(v9 - 15) - *v9));
      *v9 = *(v9 - 15);
      ExpComputeLookasideDepth(v9 - 21, v11, v1);
      v12 = (unsigned int)(v9[752] - v9[767] - (v9[753] - v9[768]));
      v9[768] = v9[753];
      ExpComputeLookasideDepth(v9 + 747, v12, v1);
      v13 = (unsigned int)(v9[1520] - v9[1535] - (v9[1521] - v9[1536]));
      v9[1536] = v9[1521];
      ExpComputeLookasideDepth(v9 + 1515, v13, v1);
      v9 += 24;
      --v10;
    }
    while ( v10 );
  }
  ExHeapLookasideRebalance();
  ++ExpPoolScanCount;
  result = (unsigned int)KeNumberProcessors_0;
  if ( ExpPoolScanCount > (unsigned int)KeNumberProcessors_0 )
    ExpPoolScanCount = 0;
  return result;
}
