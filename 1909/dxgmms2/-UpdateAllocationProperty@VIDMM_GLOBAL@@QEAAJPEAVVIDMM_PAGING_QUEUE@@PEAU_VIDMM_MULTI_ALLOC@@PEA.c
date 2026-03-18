/*
 * XREFs of ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B01D0
 * Callers:
 *     ?VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00247D0 (-VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_AL.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00641C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00704BC (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C00704F8 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0070904 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0070960 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateAllocationProperty(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct _VIDMM_UPDATEALLOCPROPERTY *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int v10; // r13d
  __int64 v11; // r15
  unsigned int v12; // r14d
  struct _D3DDDI_SEGMENTPREFERENCE v13; // ebx
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v17; // rcx
  int v18; // eax
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  char v22; // si
  int v23; // edi
  __int64 v24; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  _DWORD *v26; // rax
  __int64 v27; // rax
  _QWORD v28[16]; // [rsp+40h] [rbp-31h] BYREF
  int v30; // [rsp+E0h] [rbp+6Fh] BYREF
  VIDMM_GLOBAL *v31; // [rsp+E8h] [rbp+77h]

  memset(v28, 0, 0x50uLL);
  v9 = HIDWORD(*(_QWORD *)a4);
  v10 = (*((_DWORD *)a3 + 8) >> 2) & 0x3F;
  v11 = **a3;
  *(_OWORD *)((char *)&v28[4] + 4) = *(_OWORD *)a4;
  LODWORD(v28[0]) = 214;
  v12 = *(_DWORD *)(v11 + 68);
  v13.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v11 + 72);
  v28[2] = a3;
  v31 = (VIDMM_GLOBAL *)v9;
  if ( (_mm_srli_si128(*(__m128i *)(v28 + 36), 8).m128i_i8[4] & 2) != 0 )
  {
    v14 = HIDWORD(v28[4]);
    if ( !HIDWORD(v28[4]) )
      goto LABEL_3;
    v17 = *((_QWORD *)this + 5023) + 1560LL * v10;
    v9 = (unsigned __int8)(*(_WORD *)(v17 + 28) - *(_BYTE *)(v17 + 20));
    if ( _bittest((const int *)&v14, v9) )
      goto LABEL_3;
    LOBYTE(v9) = (~v12 & HIDWORD(v28[4])) != 0;
    if ( ((unsigned __int8)v9 & ((*((_BYTE *)a3 + 28) & 8) != 0)) != 0 )
      goto LABEL_3;
    v18 = *(_DWORD *)(v11 + 76);
    v19 = *(struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 **)(v11 + 504);
    v30 = 0;
    if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
            this,
            v10,
            HIDWORD(v28[4]),
            v19,
            *(_QWORD *)(v11 + 16),
            *(_QWORD *)(v11 + 24),
            (v18 & 0x8000000) != 0,
            (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v30) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v20, v8);
      *(_QWORD *)(v15 + 24) = 5141LL;
      goto LABEL_4;
    }
    BYTE4(v28[6]) = v30 & 1;
    BYTE5(v28[6]) = (v30 & 2) != 0;
    if ( v14 == v12 )
    {
      LOBYTE(v20) = v30 & 1;
      v21 = WdLogNewEntry5_WdWarning(v20, v8);
      WdLogEvent5_WdWarning(v21);
    }
    v9 = (unsigned __int64)v31;
    v12 = v14;
  }
  v22 = v28[6];
  v23 = (LODWORD(v28[6]) >> 2) & 1;
  if ( v23 )
  {
    if ( (_DWORD)v9 == v13.0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v9, v8);
      WdLogEvent5_WdWarning(v24);
      v9 = (unsigned __int64)v31;
    }
    v13.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v9;
  }
  if ( (v22 & 2) != 0 || v23 )
  {
    if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset((VIDMM_GLOBAL *)v9, v13, v12) )
      goto LABEL_3;
    MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v10, v13, (bool *)&v30);
    if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
            (unsigned __int64)this,
            v10,
            v12,
            MostPreferredSegment,
            (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v28[4]) )
      goto LABEL_3;
    v22 = v28[6];
  }
  if ( (v22 & 1) != 0 )
  {
    v26 = *(_DWORD **)(v11 + 504);
    v9 = *v26 & 0x8000;
    if ( (*v26 & 0x8000) == 0 || (v28[5] & 0x100000000LL) != 0 )
    {
      if ( (_DWORD)v9 )
      {
        v27 = WdLogNewEntry5_WdWarning(v9, v8);
        WdLogEvent5_WdWarning(v27);
      }
      return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v28, 0, a5);
    }
LABEL_3:
    v15 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v28, 0, a5);
}
