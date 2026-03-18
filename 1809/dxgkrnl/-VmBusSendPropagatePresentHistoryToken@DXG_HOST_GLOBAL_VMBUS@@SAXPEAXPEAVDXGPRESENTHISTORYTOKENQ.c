/*
 * XREFs of ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C00371D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003702C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendPropagatePresentHistoryToken(
        struct VMBCHANNEL__ *a1,
        struct DXGPRESENTHISTORYTOKENQUEUE *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3,
        struct CRefCountedBuffer *a4)
{
  const GUID *v8; // r8
  struct _MDL *v9; // r9
  _QWORD v10[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  v10[0] = 0LL;
  v10[1] = 0x200000000LL;
  LODWORD(v10[2]) = 1;
  v10[5] = a4;
  v10[4] = a3;
  v10[3] = a2;
  VmBusSendAsyncMessage(a1, (struct DXGKVMB_COMMAND_BASE *)v10, v8, v9);
}
