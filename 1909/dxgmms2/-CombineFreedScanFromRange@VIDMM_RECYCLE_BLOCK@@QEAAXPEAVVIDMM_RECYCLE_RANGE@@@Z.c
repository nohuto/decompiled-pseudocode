/*
 * XREFs of ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0065EF8
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0064720 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C006600C (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0067778 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0067B70 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C0082374 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 * Callees:
 *     ?NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C000233C (-NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0064A4C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0064ED8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00BA9D8 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_BLOCK *v3; // rcx
  struct VIDMM_RECYCLE_RANGE *v4; // rsi
  struct VIDMM_RECYCLE_RANGE *v5; // rbp
  char v6; // r15
  char v7; // r14
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  struct VIDMM_RECYCLE_RANGE *v9; // rbx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  struct VIDMM_RECYCLE_RANGE *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax

  VIDMM_RECYCLE_BLOCK::NotifyRangeEvent((__int64)this, 3, (__int64)a2);
  v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)a2 + 17);
  if ( !v3 || *((_QWORD *)v3 + 8) == *((_QWORD *)v3 + 9) )
  {
    v4 = a2;
    v5 = a2;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      while ( v6 )
      {
        if ( v7 )
        {
          if ( v4 != v5 )
            VIDMM_RECYCLE_BLOCK::CombineFreedRanges(v3, v4, v5, a2);
          return;
        }
LABEL_13:
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(v5);
        v11 = NextRange;
        if ( !NextRange )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v3) + 24) = 0LL;
          goto LABEL_16;
        }
        if ( *((_DWORD *)NextRange + 16) )
        {
          if ( !g_IsInternalReleaseOrDbg )
            goto LABEL_16;
          v14 = WdLogNewEntry5_WdTrace(v3);
          *(_QWORD *)(v14 + 24) = v11;
          v3 = (VIDMM_RECYCLE_BLOCK *)*((int *)v11 + 16);
LABEL_40:
          *(_QWORD *)(v14 + 32) = v3;
          goto LABEL_16;
        }
        if ( *((_QWORD *)NextRange + 20)
          || (v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)NextRange + 17)) != 0LL
          && *((_QWORD *)v3 + 8) != *((_QWORD *)v3 + 9) )
        {
          if ( *((_QWORD *)NextRange + 20) )
          {
            if ( !g_IsInternalReleaseOrDbg )
              goto LABEL_16;
            v14 = WdLogNewEntry5_WdTrace(v3);
            *(_QWORD *)(v14 + 24) = v11;
            v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v11 + 20);
            goto LABEL_40;
          }
          if ( g_IsInternalReleaseOrDbg )
          {
            v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v3);
            v15[3] = v11;
            v15[4] = *((_QWORD *)v11 + 17);
            v15[5] = *(_QWORD *)(*((_QWORD *)v11 + 17) + 64LL);
            v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v11 + 17);
            v15[6] = *((_QWORD *)v3 + 9);
          }
LABEL_16:
          v7 = 1;
        }
        else
        {
          v5 = NextRange;
        }
      }
      PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v4);
      v9 = PreviousRange;
      if ( !PreviousRange )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v3) + 24) = 0LL;
        goto LABEL_11;
      }
      if ( *((_DWORD *)PreviousRange + 16) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v12 = WdLogNewEntry5_WdTrace(v3);
          *(_QWORD *)(v12 + 24) = v9;
          v3 = (VIDMM_RECYCLE_BLOCK *)*((int *)v9 + 16);
          goto LABEL_29;
        }
      }
      else
      {
        if ( !*((_QWORD *)PreviousRange + 20) )
        {
          v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)PreviousRange + 17);
          if ( !v3 || *((_QWORD *)v3 + 8) == *((_QWORD *)v3 + 9) )
          {
            v4 = PreviousRange;
            goto LABEL_12;
          }
        }
        if ( !*((_QWORD *)PreviousRange + 20) )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v3);
            v13[3] = v9;
            v13[4] = *((_QWORD *)v9 + 17);
            v13[5] = *(_QWORD *)(*((_QWORD *)v9 + 17) + 64LL);
            v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v9 + 17);
            v13[6] = *((_QWORD *)v3 + 9);
          }
          goto LABEL_11;
        }
        if ( g_IsInternalReleaseOrDbg )
        {
          v12 = WdLogNewEntry5_WdTrace(v3);
          *(_QWORD *)(v12 + 24) = v9;
          v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v9 + 20);
LABEL_29:
          *(_QWORD *)(v12 + 32) = v3;
        }
      }
LABEL_11:
      v6 = 1;
LABEL_12:
      if ( !v7 )
        goto LABEL_13;
    }
  }
}
