/*
 * XREFs of ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002EC68
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014F6C0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01D3268 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C01D38AC (-GenerateUmdFileName@@YAJQEAGPEBG1@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C01D4258 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0208B5C (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z @ 0x1C02091C8 (-GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0209258 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0209310 (-ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0209904 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     DpiGetDriverStorePath @ 0x1C0262DC0 (DpiGetDriverStorePath.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x1C002ECB4 (RtlStringCopyWorkerW_0.c)
 */

__int64 __fastcall RtlStringCbCopyW(unsigned __int16 *a1, unsigned __int64 a2, size_t *a3)
{
  size_t v3; // rdx
  int v4; // r9d
  size_t v6; // [rsp+20h] [rbp-18h]

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringCopyWorkerW_0(a1, v3, a3, (STRSAFE_PCNZWCH)a3, v6);
  }
  return (unsigned int)v4;
}
