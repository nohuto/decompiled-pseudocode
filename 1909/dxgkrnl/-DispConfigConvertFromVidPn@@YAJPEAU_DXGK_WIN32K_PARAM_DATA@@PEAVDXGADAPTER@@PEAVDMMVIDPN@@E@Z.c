/*
 * XREFs of ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C026E2E0
 * Callers:
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02B248C (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00D98F0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00DE8C0 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02C2DA4 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v19; // rcx
  CCD_BTL *v20; // rax
  int v21; // ebx
  unsigned __int64 *v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+24h] [rbp-1Ch]
  unsigned __int64 *v27; // [rsp+28h] [rbp-18h]
  unsigned __int64 *v28; // [rsp+30h] [rbp-10h]
  struct D3DKMT_GETPATHSMODALITY *v29; // [rsp+70h] [rbp+30h] BYREF

  if ( !a1 || !a2 || !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v7 + 24) = 1763LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a1->NumModeArrayElements || a1->NumPathArrayElements )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = 1764LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a1->PathsArray || a1->ModesArray )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v9 + 24) = 1765LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((unsigned int *)a3 + 34);
  v25 = 0;
  v28 = 0LL;
  v26 = v10;
  a1->NumPathArrayElements = v10;
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, 200 * v10, 0x4E506456u);
  v27 = PoolWithTag;
  v16 = PoolWithTag;
  a1->PathsArray = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( (_DWORD)v10 )
      memset(PoolWithTag, 0, 200 * v10);
    v28 = v16;
    LOBYTE(v25) = 0;
    v29 = 0LL;
    v19 = a4 != 0 ? 16 : 4640;
    LODWORD(v19) = v19 | 0x80;
    a1->SDCFlags = v19;
    v20 = CCD_BTL::Global(v19, v12);
    v21 = CCD_BTL::ConvertVidPnToPathsModality(v20, a3, &v29);
    if ( v21 >= 0 )
    {
      v21 = ConvertPathModalityToDisplayConfig(v29, 0LL, 0LL, (struct _QDC_CONTEXT *)&v25);
      operator delete[](v29);
      if ( v26 )
      {
        v22 = v27;
        v23 = v26;
        do
        {
          v24 = *v22 | 0x8000000000000000uLL;
          *v22 = v24;
          if ( a4 )
            *v22 = v24 & 0xFFFFFBFFFFFCF478uLL;
          v22 += 25;
          --v23;
        }
        while ( v23 );
      }
    }
    else
    {
      operator delete[](v29);
    }
    return (unsigned int)v21;
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = v10;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}
