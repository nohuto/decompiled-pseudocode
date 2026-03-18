/*
 * XREFs of ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C01F3CF8
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00AD028 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
        DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
        int a3,
        __int128 *a4,
        int a5,
        _OWORD *a6)
{
  __int128 v6; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rcx
  bool v14; // zf
  __int64 result; // rax
  __int128 v16; // xmm1
  __int64 v17; // rax
  struct _MDL *v18; // [rsp+28h] [rbp-81h]
  unsigned int v19[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  int v21; // [rsp+48h] [rbp-61h]
  int v22; // [rsp+4Ch] [rbp-5Dh]
  int v23; // [rsp+50h] [rbp-59h]
  __int128 v24; // [rsp+58h] [rbp-51h]
  __int128 v25; // [rsp+68h] [rbp-41h]
  __int128 v26; // [rsp+78h] [rbp-31h]
  __int128 v27; // [rsp+88h] [rbp-21h]
  __int128 v28; // [rsp+98h] [rbp-11h]
  __int128 v29; // [rsp+A8h] [rbp-1h]
  int v30; // [rsp+B8h] [rbp+Fh]
  _OWORD v31[2]; // [rsp+C0h] [rbp+17h] BYREF

  v6 = *a4;
  v8 = a4[1];
  v20 = 0LL;
  v22 = 0;
  v24 = v6;
  v30 = a5;
  v9 = a4[2];
  v21 = a2;
  v25 = v8;
  LODWORD(v24) = a3;
  v10 = a4[3];
  v23 = 8;
  v26 = v9;
  v19[0] = 32;
  v11 = a4[4];
  v27 = v10;
  v12 = a4[5];
  v28 = v11;
  v29 = v12;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(a1, (struct DXGKVMB_COMMAND_BASE *)&v20, 0x80u, v31, v19, v18) < 0
    || v19[0] < 0x20
    || (!a3 ? (v14 = DWORD1(v31[0]) == 0) : (v14 = LODWORD(v31[0]) == 0), v14) )
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v17);
    return 3221225473LL;
  }
  else
  {
    result = 0LL;
    v16 = v31[1];
    *a6 = v31[0];
    a6[1] = v16;
  }
  return result;
}
