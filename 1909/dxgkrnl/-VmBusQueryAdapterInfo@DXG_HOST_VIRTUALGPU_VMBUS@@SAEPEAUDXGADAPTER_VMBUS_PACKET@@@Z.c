/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0222170
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA64 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  char v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  void *pPrivateDriverData; // rdi
  KMTQUERYADAPTERINFOTYPE v13; // eax
  PVOID v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // eax
  __int64 v22; // rax
  struct _D3DKMT_QUERYADAPTERINFO v23; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v24[24]; // [rsp+38h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v24,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = 0;
    v8 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
    v10 = v8;
    if ( !v8 )
      goto LABEL_15;
    v11 = *(unsigned int *)(v8 + 28);
    pPrivateDriverData = 0LL;
    v13 = *(_DWORD *)(v8 + 24);
    v23.hAdapter = 0;
    v23.Type = v13;
    v23.pPrivateDriverData = 0LL;
    *(_QWORD *)&v23.PrivateDriverDataSize = 0LL;
    if ( (_DWORD)v11 )
    {
      if ( (unsigned __int64)*((unsigned int *)a1 + 22) - 32 < v11 || (unsigned int)v11 > 0x20000 )
      {
        v22 = WdLogNewEntry5_WdError((unsigned int)v11, v11, v9);
        *(_QWORD *)(v22 + 24) = *(unsigned int *)(v10 + 28);
        WdLogEvent5_WdError(v22);
LABEL_12:
        if ( pPrivateDriverData )
          operator delete[](pPrivateDriverData);
        goto LABEL_14;
      }
      v23.PrivateDriverDataSize = v11;
      v14 = operator new[]((unsigned int)v11, 0x4B677844u, (POOL_TYPE)512);
      v23.pPrivateDriverData = v14;
      if ( !v14 )
      {
        v19 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
        *(_QWORD *)(v19 + 24) = 3646LL;
        WdLogEvent5_WdLowResource(v19);
LABEL_14:
        v5 = v7;
        goto LABEL_15;
      }
      memmove(v14, (const void *)(v10 + 32), *(unsigned int *)(v10 + 28));
    }
    v20 = DxgkQueryAdapterInfoInternal(&v23, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL));
    pPrivateDriverData = v23.pPrivateDriverData;
    if ( v20 >= 0 )
    {
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v23.pPrivateDriverData, v23.PrivateDriverDataSize);
      v7 = 1;
    }
    goto LABEL_12;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 3625LL;
  WdLogEvent5_WdError(v6);
LABEL_15:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return v5;
}
