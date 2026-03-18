/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x1C0134E60
 * Callers:
 *     DpiOpenPnpRegistryKey @ 0x1C0134DC0 (DpiOpenPnpRegistryKey.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014F6C0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C01D3020 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01D3268 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0209904 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  switch ( a2 )
  {
    case 1:
      v5 = v3 + 512;
      goto LABEL_4;
    case 2:
      v5 = v3 + 528;
LABEL_4:
      *a3 = v5;
      return 0LL;
    case 3:
      v5 = *(_QWORD *)(v3 + 40) + 40LL;
      goto LABEL_4;
  }
  v7 = WdLogNewEntry5_WdError((unsigned int)(a2 - 2));
  *(_QWORD *)(v7 + 24) = v4;
  WdLogEvent5_WdError(v7);
  return 3221225485LL;
}
