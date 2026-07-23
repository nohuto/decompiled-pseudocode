/*
 * XREFs of MiRebuildLargePage @ 0x1402CE5D4
 * Callers:
 *     MiRebuildLargePages @ 0x1402CE840 (MiRebuildLargePages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiConstructNewLargeFreePage @ 0x1400910F0 (MiConstructNewLargeFreePage.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiNodeFreeZeroPages @ 0x1400EE374 (MiNodeFreeZeroPages.c)
 *     MiDereferencePageRunsEx @ 0x14012B6C8 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     MiGetNodeStandbyPageCount @ 0x1402C05A0 (MiGetNodeStandbyPageCount.c)
 *     MiFindRebuildCandidate @ 0x1402CE488 (MiFindRebuildCandidate.c)
 */

unsigned __int64 __fastcall MiRebuildLargePage(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  unsigned __int8 *v4; // rdi
  ULONG_PTR v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int64 RebuildCandidate; // rax
  int ContiguousPages; // eax
  unsigned int v16; // r14d
  unsigned __int64 v17; // rsi
  unsigned int v18; // r11d
  ULONG_PTR v20; // [rsp+60h] [rbp-68h]
  __int64 v21; // [rsp+68h] [rbp-60h]
  unsigned __int8 *v22; // [rsp+70h] [rbp-58h]
  ULONG_PTR v23; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v25; // [rsp+E0h] [rbp+18h]
  unsigned int *v26; // [rsp+E8h] [rbp+20h]

  v25 = a3;
  v24 = a2;
  v3 = (unsigned int)MmNumberOfChannels;
  v4 = 0LL;
  v5 = a2;
  v6 = a3;
  v8 = 0LL;
  v9 = MiReferencePageRuns(a1, 1u);
  v10 = qword_14043F5C8;
  v11 = (unsigned int *)v9;
  v26 = (unsigned int *)v9;
  v12 = 0;
  v20 = qword_14043F5C8;
  v13 = *(_QWORD *)(a1 + 16) + 1984 * v5;
  v21 = v13;
  if ( (unsigned int)v3 > 1 )
  {
    v4 = (unsigned __int8 *)(v13 + 1914);
    v12 = *(unsigned __int8 *)(v13 + 1914);
  }
  v22 = &v4[v3];
  if ( v4 != &v4[v3] )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        RebuildCandidate = MiFindRebuildCandidate((__int16 *)a1, v5, v12, 16LL, v10, v11);
        v23 = RebuildCandidate;
        if ( RebuildCandidate != -1LL )
          break;
LABEL_22:
        ++v4;
        if ( (unsigned int)v3 > 1 )
          v12 = *v4;
        v11 = v26;
        v10 = v20;
        if ( v4 == v22 )
          goto LABEL_25;
      }
      ContiguousPages = MiFindContiguousPages(
                          a1,
                          RebuildCandidate,
                          RebuildCandidate + 15,
                          16LL,
                          0x10uLL,
                          1u,
                          v5,
                          v12,
                          1132462080,
                          0LL,
                          (__int64 *)&v23);
      v5 = v23;
      if ( ContiguousPages >= 0 )
      {
        MiConstructNewLargeFreePage(v23, 2LL, 1LL);
        MiReturnCommit(a1, 0x10uLL);
        if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        {
          MiReturnResidentAvailable(0x10uLL);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), 0x10uLL);
          v5 = v23;
        }
        v8 += 16LL;
        if ( v8 >= v6 )
          goto LABEL_25;
      }
      v16 = MmNumberOfChannels;
      v17 = 0LL;
      v12 = 0;
      if ( !MmNumberOfChannels )
        goto LABEL_13;
      do
        v17 += MiNodeFreeZeroPages(v21, v12++, 0);
      while ( v12 < v16 );
      v5 = v23;
      if ( v17 >= 0x1000 )
      {
        v6 = v25;
      }
      else
      {
LABEL_13:
        v12 = 0;
        LODWORD(v3) = v16;
        if ( v16 )
        {
          v18 = v24;
          do
            v17 += MiGetNodeStandbyPageCount(a1, v18, v12++);
          while ( v12 < v16 );
        }
        v6 = v25;
        if ( v17 < v25 - v8 + 0x8000 )
        {
LABEL_25:
          v11 = v26;
          break;
        }
      }
      if ( !v5 )
      {
        LODWORD(v5) = v24;
        goto LABEL_22;
      }
      v11 = v26;
      v10 = v5 - 1;
      LODWORD(v5) = v24;
      v20 = v10;
    }
  }
  MiDereferencePageRunsEx((__int64)v11, 1);
  return v8;
}
