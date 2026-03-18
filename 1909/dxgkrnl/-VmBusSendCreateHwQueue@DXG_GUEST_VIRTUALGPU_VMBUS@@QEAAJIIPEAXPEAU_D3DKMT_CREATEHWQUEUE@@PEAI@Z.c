/*
 * XREFs of ?VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z @ 0x1C0223B40
 * Callers:
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02487B0 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        __int64 a2,
        __int64 a3,
        void *a4,
        struct _D3DKMT_CREATEHWQUEUE *a5,
        unsigned int *a6)
{
  int v7; // ebp
  int v8; // r15d
  UINT PrivateDriverDataSize; // eax
  __int64 v10; // rax
  unsigned int v12; // r14d
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  UINT v18; // eax
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  UINT v23; // eax
  __int64 v24; // rax
  UINT v25; // eax
  struct _MDL *v26; // [rsp+28h] [rbp-B0h]
  unsigned int v27; // [rsp+30h] [rbp-A8h] BYREF
  DXG_VMBUS_CHANNEL_BASE *v28; // [rsp+38h] [rbp-A0h]
  _QWORD v29[2]; // [rsp+40h] [rbp-98h] BYREF
  int v30; // [rsp+50h] [rbp-88h]

  v7 = a3;
  v8 = a2;
  v28 = this;
  PrivateDriverDataSize = a5->PrivateDriverDataSize;
  if ( PrivateDriverDataSize > 0x20000 )
  {
    v10 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v10 + 24) = 5549LL;
    WdLogEvent5_WdError(v10);
    return 0LL;
  }
  v30 = 50;
  v29[0] = 0LL;
  v12 = (PrivateDriverDataSize + 78) & 0xFFFFFFF8;
  v29[1] = 0LL;
  v13 = v29;
  if ( PrivateDriverDataSize )
  {
    v13 = operator new[](v12, 0x4B677844u, (POOL_TYPE)512);
    if ( !v13 )
    {
      v17 = WdLogNewEntry5_WdLowResource(0LL, v14, v15, v16);
      *(_QWORD *)(v17 + 24) = 5562LL;
      WdLogEvent5_WdLowResource(v17);
      return 0LL;
    }
  }
  *((_DWORD *)v13 + 2) = v8;
  *v13 = 0LL;
  *((_DWORD *)v13 + 3) = 0;
  *((_DWORD *)v13 + 4) = 50;
  *((_DWORD *)v13 + 14) = v7;
  *((_DWORD *)v13 + 15) = a5->Flags.0;
  *((_DWORD *)v13 + 16) = a5->PrivateDriverDataSize;
  v18 = a5->PrivateDriverDataSize;
  if ( v18 )
    memmove((char *)v13 + 68, a4, v18);
  v27 = v12;
  LODWORD(v19) = -1073741823;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v28, (struct DXGKVMB_COMMAND_BASE *)v13, v12, v13, &v27, v26) < 0
    || v27 < v12 )
  {
    v24 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = v27;
    *(_QWORD *)(v24 + 32) = v12;
  }
  else
  {
    v19 = *((int *)v13 + 6);
    if ( (int)v19 >= 0 )
    {
      *a6 = *((_DWORD *)v13 + 7);
      a5->hHwQueueProgressFence = *((_DWORD *)v13 + 8);
      a5->HwQueueProgressFenceGPUVirtualAddress = v13[6];
      a5->HwQueueProgressFenceCPUVirtualAddress = (void *)v13[5];
      v23 = a5->PrivateDriverDataSize;
      if ( v23 )
        memmove(a4, (char *)v13 + 68, v23);
      goto LABEL_17;
    }
    v24 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = v19;
  }
  WdLogEvent5_WdError(v24);
LABEL_17:
  v25 = a5->PrivateDriverDataSize;
  if ( v25 )
  {
    memmove(a4, (char *)v13 + 68, v25);
    operator delete[](v13);
  }
  return (unsigned int)v19;
}
