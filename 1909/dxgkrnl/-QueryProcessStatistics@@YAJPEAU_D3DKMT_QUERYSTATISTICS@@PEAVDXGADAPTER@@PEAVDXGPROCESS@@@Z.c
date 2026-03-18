/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C020181C
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1C0204C38 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C003B950 (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C003B9DC (-VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C003BA6C (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1C003BAF8 (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int ProcessNodeStatistics; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx

  v3 = 0LL;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v7 + 24) = 5085LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 || !*((_QWORD *)a2 + 320) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = 5086LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a2);
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v12 + 24) = 5088LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)a3 + 13) + 16LL) != CurrentThread
    && a3 != DXGPROCESS::GetCurrent((__int64)CurrentThread, v9) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v9);
    *(_QWORD *)(v15 + 24) = 5089LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v29 = *((_QWORD *)a2 + 320);
    v30 = *((_QWORD *)a3 + 9);
    v31 = *(_QWORD *)(v29 + 544);
    if ( v30 )
      v32 = *(_QWORD *)(v30 + 8LL * (unsigned int)(*(_DWORD *)v31 - 1));
    else
      v32 = 0LL;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v31 + 8) + 296LL))(
            *(_QWORD *)(v29 + 552),
            v32,
            (char *)a1 + 24);
    if ( v16 >= 0 )
      return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                             *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 320) + 520LL),
                             *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 320) + 528LL),
                             a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  else
  {
    if ( *(_DWORD *)a1 != 2 )
    {
      switch ( *(_DWORD *)a1 )
      {
        case 4:
          v22 = *((_QWORD *)a2 + 320);
          v23 = *((_QWORD *)a3 + 9);
          v24 = *(_QWORD *)(v22 + 544);
          if ( v23 )
            v3 = *(_QWORD *)(v23 + 8LL * (unsigned int)(*(_DWORD *)v24 - 1));
          ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v24 + 8)
                                                                                             + 320LL))(
                                    *(_QWORD *)(v22 + 552),
                                    *((unsigned int *)a1 + 200),
                                    v3,
                                    (char *)a1 + 24);
          break;
        case 6:
          ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                                    *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 320) + 520LL),
                                    *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 320) + 528LL),
                                    *((_DWORD *)a1 + 200),
                                    a3,
                                    (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
          break;
        case 8:
          ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                                    *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 320) + 520LL),
                                    *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 320) + 528LL),
                                    *((_DWORD *)a1 + 200),
                                    a3,
                                    (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
          break;
        case 9:
          v18 = *((_QWORD *)a2 + 320);
          v19 = *((_QWORD *)a3 + 9);
          v20 = *(_QWORD *)(v18 + 544);
          if ( v19 )
            v3 = *(_QWORD *)(v19 + 8LL * (unsigned int)(*(_DWORD *)v20 - 1));
          ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v20 + 8)
                                                                                             + 328LL))(
                                    *(_QWORD *)(v18 + 552),
                                    *((unsigned int *)a1 + 200),
                                    v3,
                                    (char *)a1 + 24);
          break;
        default:
          v16 = -1073741811;
          v17 = WdLogNewEntry5_WdWarning((unsigned int)(*(_DWORD *)a1 - 8), v9, v11);
          *(_QWORD *)(v17 + 24) = *(int *)a1;
          WdLogEvent5_WdWarning(v17);
          return (unsigned int)v16;
      }
      return ProcessNodeStatistics;
    }
    v25 = *((_QWORD *)a2 + 320);
    v26 = *((_QWORD *)a3 + 9);
    v27 = *(_QWORD *)(v25 + 544);
    if ( v26 )
      v28 = *(_QWORD *)(v26 + 8LL * (unsigned int)(*(_DWORD *)v27 - 1));
    else
      v28 = 0LL;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v27 + 8) + 304LL))(
            *(_QWORD *)(v25 + 552),
            v28,
            (char *)a1 + 24);
    if ( v16 >= 0 )
      return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                             *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 320) + 520LL),
                             *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 320) + 528LL),
                             a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  return (unsigned int)v16;
}
