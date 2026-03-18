/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C01D3F38
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1C01D6738 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C0034DBC (-VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QU.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C0034F04 (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C0034F90 (-VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C0035020 (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1C00350AC (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct DXGPROCESS *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int ProcessStatistics; // r14d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int ProcessNodeStatistics; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx

  v3 = 0LL;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v7 + 24) = 4687LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 || !*((_QWORD *)a2 + 316) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 4688LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a2);
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 4690LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *(struct _KTHREAD **)(*((_QWORD *)a3 + 14) + 8LL) != KeGetCurrentThread() && a3 != DXGPROCESS::GetCurrent() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 4691LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    ProcessStatistics = VIDMM_EXPORT::VidMmQueryProcessStatistics(
                          *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 316) + 544LL),
                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 316) + 552LL),
                          a3,
                          (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    if ( ProcessStatistics < 0 )
      return (unsigned int)ProcessStatistics;
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 316) + 520LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 316) + 528LL),
                           a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  if ( *(_DWORD *)a1 != 2 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 4:
        v21 = *((_QWORD *)a2 + 316);
        v22 = *((_QWORD *)a3 + 9);
        v23 = *(_QWORD *)(v21 + 544);
        if ( v22 )
          v3 = *(_QWORD *)(v22 + 8LL * (unsigned int)(*(_DWORD *)v23 - 1));
        ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v23 + 8) + 320LL))(
                                  *(_QWORD *)(v21 + 552),
                                  *((unsigned int *)a1 + 200),
                                  v3,
                                  (char *)a1 + 24);
        break;
      case 6:
        ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                                  *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 316) + 520LL),
                                  *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 316) + 528LL),
                                  *((_DWORD *)a1 + 200),
                                  a3,
                                  (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      case 8:
        ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                                  *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 316) + 520LL),
                                  *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 316) + 528LL),
                                  *((_DWORD *)a1 + 200),
                                  a3,
                                  (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      case 9:
        v17 = *((_QWORD *)a2 + 316);
        v18 = *((_QWORD *)a3 + 9);
        v19 = *(_QWORD *)(v17 + 544);
        if ( v18 )
          v3 = *(_QWORD *)(v18 + 8LL * (unsigned int)(*(_DWORD *)v19 - 1));
        ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v19 + 8) + 328LL))(
                                  *(_QWORD *)(v17 + 552),
                                  *((unsigned int *)a1 + 200),
                                  v3,
                                  (char *)a1 + 24);
        break;
      default:
        ProcessStatistics = -1073741811;
        v16 = WdLogNewEntry5_WdWarning((unsigned int)(*(_DWORD *)a1 - 8), v9, v11);
        *(_QWORD *)(v16 + 24) = *(int *)a1;
        WdLogEvent5_WdWarning(v16);
        return (unsigned int)ProcessStatistics;
    }
    return ProcessNodeStatistics;
  }
  v24 = *((_QWORD *)a2 + 316);
  v25 = *((_QWORD *)a3 + 9);
  v26 = *(_QWORD *)(v24 + 544);
  if ( v25 )
    v27 = *(_QWORD *)(v25 + 8LL * (unsigned int)(*(_DWORD *)v26 - 1));
  else
    v27 = 0LL;
  ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v26 + 8) + 304LL))(
                        *(_QWORD *)(v24 + 552),
                        v27,
                        (char *)a1 + 24);
  if ( ProcessStatistics >= 0 )
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 316) + 520LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 316) + 528LL),
                           a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  return (unsigned int)ProcessStatistics;
}
