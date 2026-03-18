/*
 * XREFs of ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C003D650
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003D3FC (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendPropagatePresentHistoryToken(
        struct VMBCHANNEL__ *a1,
        struct DXGPRESENTHISTORYTOKENQUEUE *a2,
        const GUID *a3,
        struct _MDL *a4)
{
  __int64 v4; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+28h] [rbp-40h]
  int v6; // [rsp+2Ch] [rbp-3Ch]
  __int64 v7; // [rsp+30h] [rbp-38h]
  struct DXGPRESENTHISTORYTOKENQUEUE *v8; // [rsp+38h] [rbp-30h]
  const GUID *v9; // [rsp+40h] [rbp-28h]
  struct _MDL *v10; // [rsp+48h] [rbp-20h]

  v7 = 1LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 2;
  v8 = a2;
  v10 = a4;
  v9 = a3;
  VmBusSendAsyncMessage(a1, (struct DXGKVMB_COMMAND_BASE *)&v4, a3, a4);
}
