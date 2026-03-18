/*
 * XREFs of ?VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z @ 0x1C01F37A0
 * Callers:
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02145E4 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        void *a4,
        struct _D3DKMT_CREATEHWQUEUE *a5,
        unsigned int *a6)
{
  UINT PrivateDriverDataSize; // eax
  __int64 v10; // rax
  unsigned int v12; // r14d
  _QWORD *v13; // rbx
  __int64 v14; // rax
  UINT v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rcx
  UINT v18; // eax
  __int64 v19; // rax
  UINT v20; // eax
  struct _MDL *v21; // [rsp+28h] [rbp-B0h]
  unsigned int v22; // [rsp+30h] [rbp-A8h] BYREF
  DXG_VMBUS_CHANNEL_BASE *v23; // [rsp+38h] [rbp-A0h]
  _QWORD v24[2]; // [rsp+40h] [rbp-98h] BYREF
  int v25; // [rsp+50h] [rbp-88h]

  v23 = this;
  PrivateDriverDataSize = a5->PrivateDriverDataSize;
  if ( PrivateDriverDataSize > 0x20000 )
  {
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = 5619LL;
    WdLogEvent5_WdError(v10);
    return 0LL;
  }
  v25 = 50;
  v24[0] = 0LL;
  v12 = (PrivateDriverDataSize + 78) & 0xFFFFFFF8;
  v24[1] = 0LL;
  v13 = v24;
  if ( PrivateDriverDataSize )
  {
    v13 = operator new[](v12, 0x4B677844u, (POOL_TYPE)512);
    if ( !v13 )
    {
      v14 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v14 + 24) = 5632LL;
      WdLogEvent5_WdLowResource(v14);
      return 0LL;
    }
  }
  *((_DWORD *)v13 + 2) = a2;
  *v13 = 0LL;
  *((_DWORD *)v13 + 3) = 0;
  *((_DWORD *)v13 + 4) = 50;
  *((_DWORD *)v13 + 14) = a3;
  *((_DWORD *)v13 + 15) = a5->Flags.0;
  *((_DWORD *)v13 + 16) = a5->PrivateDriverDataSize;
  v15 = a5->PrivateDriverDataSize;
  if ( v15 )
    memmove((char *)v13 + 68, a4, v15);
  v22 = v12;
  LODWORD(v16) = -1073741823;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v23, (struct DXGKVMB_COMMAND_BASE *)v13, v12, v13, &v22, v21) < 0
    || v22 < v12 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = v22;
    *(_QWORD *)(v19 + 32) = v12;
  }
  else
  {
    v16 = *((int *)v13 + 6);
    if ( (int)v16 >= 0 )
    {
      *a6 = *((_DWORD *)v13 + 7);
      a5->hHwQueueProgressFence = *((_DWORD *)v13 + 8);
      a5->HwQueueProgressFenceGPUVirtualAddress = v13[6];
      a5->HwQueueProgressFenceCPUVirtualAddress = (void *)v13[5];
      v18 = a5->PrivateDriverDataSize;
      if ( v18 )
        memmove(a4, (char *)v13 + 68, v18);
      goto LABEL_17;
    }
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = v16;
  }
  WdLogEvent5_WdError(v19);
LABEL_17:
  v20 = a5->PrivateDriverDataSize;
  if ( v20 )
  {
    memmove(a4, (char *)v13 + 68, v20);
    operator delete[](v13);
  }
  return (unsigned int)v16;
}
