/*
 * XREFs of ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C0224098
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F9C74 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  __int64 result; // rax
  __int128 v18; // xmm1
  __int64 v19; // rax
  struct _MDL *v20; // [rsp+28h] [rbp-81h]
  unsigned int v21[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v22; // [rsp+40h] [rbp-69h] BYREF
  int v23; // [rsp+48h] [rbp-61h]
  int v24; // [rsp+4Ch] [rbp-5Dh]
  int v25; // [rsp+50h] [rbp-59h]
  __int128 v26; // [rsp+58h] [rbp-51h]
  __int128 v27; // [rsp+68h] [rbp-41h]
  __int128 v28; // [rsp+78h] [rbp-31h]
  __int128 v29; // [rsp+88h] [rbp-21h]
  __int128 v30; // [rsp+98h] [rbp-11h]
  __int128 v31; // [rsp+A8h] [rbp-1h]
  int v32; // [rsp+B8h] [rbp+Fh]
  _OWORD v33[2]; // [rsp+C0h] [rbp+17h] BYREF

  v6 = *a4;
  v8 = a4[1];
  v22 = 0LL;
  v24 = 0;
  v26 = v6;
  v32 = a5;
  v9 = a4[2];
  v23 = a2;
  v27 = v8;
  LODWORD(v26) = a3;
  v10 = a4[3];
  v25 = 8;
  v28 = v9;
  v21[0] = 32;
  v11 = a4[4];
  v29 = v10;
  v12 = a4[5];
  v30 = v11;
  v31 = v12;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(a1, (struct DXGKVMB_COMMAND_BASE *)&v22, 0x80u, v33, v21, v20) < 0
    || v21[0] < 0x20
    || (!a3 ? (v16 = DWORD1(v33[0]) == 0) : (v16 = LODWORD(v33[0]) == 0), v16) )
  {
    v19 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v19 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v19);
    return 3221225473LL;
  }
  else
  {
    result = 0LL;
    v18 = v33[1];
    *a6 = v33[0];
    a6[1] = v18;
  }
  return result;
}
