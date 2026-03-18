/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200A00
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00CCC90 (DxgkSetDisplayMode.c)
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 *     DxgkCreateAllocation @ 0x1C0116A30 (DxgkCreateAllocation.c)
 *     DxgkPinDirectFlipResources @ 0x1C0153770 (DxgkPinDirectFlipResources.c)
 *     DpiFdoHandleDevicePower @ 0x1C01586C0 (DpiFdoHandleDevicePower.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015FC34 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoStartAdapter @ 0x1C01631F8 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C0165580 (DpiAddDevice.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0172A20 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     DpiFdoHandleStartDevice @ 0x1C017D850 (DpiFdoHandleStartDevice.c)
 *     DpiInitializeEx @ 0x1C017E684 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0181900 (DpiLdaValidateSystemChainStatus.c)
 *     ?ProcessDeadlockThread@@YAXPEAX@Z @ 0x1C01EE8F0 (-ProcessDeadlockThread@@YAXPEAX@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02B61A0 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0040B58 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax

  v1 = 0;
  v4 = WdDbgReportCreate(0LL, a1);
  if ( v4 )
  {
    v8 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
    v9 = operator new[]((unsigned int)v8, 0x4B677844u, PagedPool);
    v14 = v9;
    if ( v9 )
    {
      v15 = TdrCollectBugcheckSecondaryDumpData(v9, v8, 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v4, v14, v15) )
      {
        v19 = WdLogNewEntry5_WdError(v17, v16, v18);
        *(_QWORD *)(v19 + 24) = 10183LL;
        WdLogEvent5_WdError(v19);
        v1 = -1073741823;
      }
      operator delete[](v14);
    }
    else
    {
      v20 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
      *(_QWORD *)(v20 + 24) = v8;
      WdLogEvent5_WdLowResource(v20);
      v1 = -1073741801;
    }
    WdDbgReportComplete(v4);
    return v1;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v5);
    *(_QWORD *)(v6 + 24) = 10170LL;
    WdLogEvent5_WdError(v6);
    return 3221225473LL;
  }
}
