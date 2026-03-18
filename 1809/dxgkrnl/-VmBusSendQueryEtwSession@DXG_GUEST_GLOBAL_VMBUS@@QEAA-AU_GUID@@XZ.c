/*
 * XREFs of ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C01F5D14
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0211AA8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

struct _GUID *__fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax
  struct _MDL *v4; // [rsp+28h] [rbp-48h]
  unsigned int v5; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+38h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+44h] [rbp-2Ch]
  int v9; // [rsp+48h] [rbp-28h]
  struct _GUID v10; // [rsp+50h] [rbp-20h] BYREF

  v6 = 0LL;
  v7 = 0;
  v8 = 1;
  v9 = 1009;
  v5 = 16;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v6, 0x18u, &v10, &v5, v4) < 0
    || v5 < 0x10 )
  {
    v10 = (struct _GUID)0LL;
  }
  result = retstr;
  *retstr = v10;
  return result;
}
