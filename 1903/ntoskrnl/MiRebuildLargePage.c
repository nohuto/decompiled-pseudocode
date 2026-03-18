/*
 * XREFs of MiRebuildLargePage @ 0x1402E8CF8
 * Callers:
 *     MiRebuildLargePages @ 0x140169CC0 (MiRebuildLargePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiConstructNewLargeFreePage @ 0x14009C2D0 (MiConstructNewLargeFreePage.c)
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiNodeFreeZeroPages @ 0x1400F3834 (MiNodeFreeZeroPages.c)
 *     MiDereferencePageRunsEx @ 0x14012B7B0 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012C230 (MiReferencePageRuns.c)
 *     MiGetNodeStandbyPageCount @ 0x1402D9CFC (MiGetNodeStandbyPageCount.c)
 *     MiFindRebuildCandidate @ 0x1402E8BA0 (MiFindRebuildCandidate.c)
 */

unsigned __int64 __fastcall MiRebuildLargePage(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  unsigned __int8 *v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int *v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 RebuildCandidate; // rax
  int ContiguousPages; // eax
  ULONG_PTR v15; // r14
  unsigned __int64 v16; // rbp
  ULONG_PTR v18; // [rsp+60h] [rbp-68h]
  _QWORD *v19; // [rsp+68h] [rbp-60h]
  unsigned __int8 *v20; // [rsp+70h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp+8h] BYREF
  int i; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v23; // [rsp+E0h] [rbp+18h]
  unsigned int *v24; // [rsp+E8h] [rbp+20h]

  v23 = a3;
  v3 = (unsigned int)MmNumberOfChannels;
  v4 = 0LL;
  v5 = a2;
  v7 = 0LL;
  i = MmNumberOfChannels;
  v8 = MiReferencePageRuns(a1, 1u);
  v9 = qword_14046A348;
  v10 = (unsigned int *)v8;
  v24 = (unsigned int *)v8;
  v11 = 0;
  v18 = qword_14046A348;
  v12 = *(_QWORD *)(a1 + 16) + 1984 * v5;
  v19 = (_QWORD *)v12;
  if ( (unsigned int)v3 > 1 )
  {
    v4 = (unsigned __int8 *)(v12 + 1938);
    v11 = *(unsigned __int8 *)(v12 + 1938);
  }
  v20 = &v4[v3];
  if ( v4 != &v4[v3] )
  {
    while ( 1 )
    {
      RebuildCandidate = MiFindRebuildCandidate((__int16 *)a1, v5, v11, 16LL, v9, v10);
      BugCheckParameter2 = RebuildCandidate;
      if ( RebuildCandidate == -1 )
        goto LABEL_20;
      ContiguousPages = MiFindContiguousPages(
                          a1,
                          RebuildCandidate,
                          RebuildCandidate + 15,
                          16LL,
                          0x10uLL,
                          1u,
                          v5,
                          v11,
                          1132462080,
                          0LL,
                          (__int64 *)&BugCheckParameter2);
      v15 = BugCheckParameter2;
      if ( ContiguousPages >= 0 )
      {
        MiConstructNewLargeFreePage(BugCheckParameter2, 2u, 1);
        MiReturnCommit(a1, 0x10uLL);
        if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        {
          MiReturnResidentAvailable(0x10uLL);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), 0x10uLL);
          v15 = BugCheckParameter2;
        }
        v7 += 16LL;
        if ( v7 >= v23 )
          goto LABEL_23;
      }
      LODWORD(v3) = MmNumberOfChannels;
      v16 = 0LL;
      v11 = 0;
      if ( !MmNumberOfChannels )
        goto LABEL_13;
      do
        v16 += MiNodeFreeZeroPages(v19, v11++, 0);
      while ( v11 < (unsigned int)v3 );
      v15 = BugCheckParameter2;
      if ( v16 >= 0x1000 )
      {
        LODWORD(v3) = i;
      }
      else
      {
LABEL_13:
        v11 = 0;
        for ( i = v3; v11 < (unsigned int)v3; ++v11 )
          v16 += MiGetNodeStandbyPageCount(a1, v5, v11);
        if ( v16 < v23 - v7 + 0x8000 )
        {
LABEL_23:
          v10 = v24;
          break;
        }
      }
      if ( !v15 )
      {
LABEL_20:
        ++v4;
        if ( (unsigned int)v3 > 1 )
          v11 = *v4;
        v10 = v24;
        v9 = v18;
        if ( v4 == v20 )
          goto LABEL_23;
      }
      else
      {
        v10 = v24;
        v9 = v15 - 1;
        v18 = v15 - 1;
      }
    }
  }
  MiDereferencePageRunsEx((__int64)v10, 1);
  return v7;
}
