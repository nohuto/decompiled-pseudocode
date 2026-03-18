/*
 * XREFs of ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0239304
 * Callers:
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0279C58 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00BEE90 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C028A958 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DispConfigConvertFromVidPn(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct DXGADAPTER *a2,
        struct DMMVIDPN *a3,
        char a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 *PoolWithTag; // rax
  __int64 v12; // rcx
  unsigned __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v16; // rcx
  CCD_BTL *v17; // rax
  int v18; // ebx
  unsigned __int64 *v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+24h] [rbp-1Ch]
  unsigned __int64 *v24; // [rsp+28h] [rbp-18h]
  unsigned __int64 *v25; // [rsp+30h] [rbp-10h]
  struct D3DKMT_GETPATHSMODALITY *v26; // [rsp+70h] [rbp+30h] BYREF

  if ( !a1 || !a2 || !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 1743LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a1->NumModeArrayElements || a1->NumPathArrayElements )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 1744LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a1->PathsArray || a1->ModesArray )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v9 + 24) = 1745LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((unsigned int *)a3 + 34);
  v22 = 0;
  v25 = 0LL;
  v23 = v10;
  a1->NumPathArrayElements = v10;
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, 200 * v10, 0x4E506456u);
  v24 = PoolWithTag;
  v13 = PoolWithTag;
  a1->PathsArray = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( (_DWORD)v10 )
      memset(PoolWithTag, 0, 200 * v10);
    v25 = v13;
    LOBYTE(v22) = 0;
    v26 = 0LL;
    v16 = a4 != 0 ? 16 : 4640;
    LODWORD(v16) = v16 | 0x80;
    a1->SDCFlags = v16;
    v17 = CCD_BTL::Global(v16);
    v18 = CCD_BTL::ConvertVidPnToPathsModality(v17, a3, &v26);
    if ( v18 >= 0 )
    {
      v18 = ConvertPathModalityToDisplayConfig(v26, 0LL, 0LL, (struct _QDC_CONTEXT *)&v22);
      operator delete[](v26);
      if ( v23 )
      {
        v19 = v24;
        v20 = v23;
        do
        {
          v21 = *v19 | 0x8000000000000000uLL;
          *v19 = v21;
          if ( a4 )
            *v19 = v21 & 0xFFFFFBFFFFFCF478uLL;
          v19 += 25;
          --v20;
        }
        while ( v20 );
      }
    }
    else
    {
      operator delete[](v26);
    }
    return (unsigned int)v18;
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v14 + 24) = v10;
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
}
