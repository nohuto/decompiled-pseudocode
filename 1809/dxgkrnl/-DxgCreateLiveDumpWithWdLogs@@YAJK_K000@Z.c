/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     DxgkSetDisplayMode @ 0x1C011E5E0 (DxgkSetDisplayMode.c)
 *     DpiFdoHandleDevicePower @ 0x1C01428E0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 *     DpiFdoHandleStartDevice @ 0x1C0151AF0 (DpiFdoHandleStartDevice.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiInitializeEx @ 0x1C015A200 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C015D420 (DpiLdaValidateSystemChainStatus.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C027DD48 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C003A628 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  void *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v5 = 0;
  v7 = WdDbgReportCreate(0LL, a1, a2, a3, a4, a5);
  if ( v7 )
  {
    v10 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
    v11 = operator new((unsigned int)v10, 0x4B677844u, PagedPool);
    v13 = v11;
    if ( v11 )
    {
      v14 = TdrCollectBugcheckSecondaryDumpData(v11, v10, 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v7, v13, v14) )
      {
        v16 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v16 + 24) = 9433LL;
        WdLogEvent5_WdError(v16);
        v5 = -1073741823;
      }
      operator delete[](v13);
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v17 + 24) = v10;
      WdLogEvent5_WdLowResource(v17);
      v5 = -1073741801;
    }
    WdDbgReportComplete(v7);
    return v5;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 9420LL;
    WdLogEvent5_WdError(v8);
    return 3221225473LL;
  }
}
