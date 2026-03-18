/*
 * XREFs of ?VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0224F94
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C023ACE8 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00184AC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        unsigned __int16 *const a2,
        unsigned __int16 *const a3,
        enum DXGKP_HARDLINKTYPE *a4,
        enum DXGKP_HARDLINKOVERWRITETYPE *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rax
  struct _MDL *v14; // [rsp+28h] [rbp-D8h]
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  _DWORD v18[3]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v19[260]; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int16 v20[262]; // [rsp+264h] [rbp+164h] BYREF

  v17 = 55;
  v16[0] = 0LL;
  v16[1] = 0LL;
  v15 = 1056;
  v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)v16, 0x18u, v18, &v15, v14);
  if ( v10 < 0 )
    goto LABEL_5;
  v10 = -1073741823;
  if ( v15 < 0x41C )
    goto LABEL_6;
  v10 = v18[0];
  if ( v18[0] < 0 )
  {
LABEL_5:
    if ( v10 == -2147483642 )
      return (unsigned int)v10;
LABEL_6:
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v11);
    *(_QWORD *)(v12 + 24) = v10;
    WdLogEvent5_WdWarning(v12);
    return (unsigned int)v10;
  }
  v20[259] = 0;
  v19[259] = 0;
  RtlStringCbCopyW(a2, 0x208uLL, (size_t *)v20);
  RtlStringCbCopyW(a3, 0x208uLL, (size_t *)v19);
  *(_DWORD *)a4 = v18[1];
  *(_DWORD *)a5 = v18[2];
  return (unsigned int)v10;
}
