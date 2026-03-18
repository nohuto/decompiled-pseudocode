/*
 * XREFs of ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00184AC
 * Callers:
 *     DxgkOpenAdapterFromDeviceName @ 0x1C013EA00 (DxgkOpenAdapterFromDeviceName.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0145F88 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C016A924 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C020115C (-GenerateUmdFileName@@YAJQEAGPEBG1@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C0201B60 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORMATION@@@Z @ 0x1C0224D70 (-VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORM.c)
 *     ?VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0224F94 (-VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DX.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C023ACE8 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z @ 0x1C023B318 (-DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C023B8FC (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z @ 0x1C023BF80 (-GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C023C104 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C023C1BC (-ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C023C800 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     DpiGetDriverStorePath @ 0x1C029CCB0 (DpiGetDriverStorePath.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x1C00184F0 (RtlStringCopyWorkerW_0.c)
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
