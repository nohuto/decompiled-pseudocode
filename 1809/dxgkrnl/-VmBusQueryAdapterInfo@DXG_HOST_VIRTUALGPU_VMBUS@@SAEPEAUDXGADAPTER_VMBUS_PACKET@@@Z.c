/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F1E20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003651C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  char v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  void *pPrivateDriverData; // rdi
  KMTQUERYADAPTERINFOTYPE v10; // eax
  PVOID v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v16; // rax
  struct _D3DKMT_QUERYADAPTERINFO v17; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v18[24]; // [rsp+38h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v18,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = 0;
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
    v7 = v6;
    if ( !v6 )
      goto LABEL_15;
    v8 = *(unsigned int *)(v6 + 28);
    pPrivateDriverData = 0LL;
    v10 = *(_DWORD *)(v6 + 24);
    v17.hAdapter = 0;
    v17.Type = v10;
    v17.pPrivateDriverData = 0LL;
    *(_QWORD *)&v17.PrivateDriverDataSize = 0LL;
    if ( (_DWORD)v8 )
    {
      if ( (unsigned __int64)*((unsigned int *)a1 + 22) - 32 < v8 || (unsigned int)v8 > 0x20000 )
      {
        v16 = WdLogNewEntry5_WdError((unsigned int)v8);
        *(_QWORD *)(v16 + 24) = *(unsigned int *)(v7 + 28);
        WdLogEvent5_WdError(v16);
LABEL_12:
        if ( pPrivateDriverData )
          operator delete[](pPrivateDriverData);
        goto LABEL_14;
      }
      v17.PrivateDriverDataSize = v8;
      v11 = operator new[]((unsigned int)v8, 0x4B677844u, (POOL_TYPE)512);
      v17.pPrivateDriverData = v11;
      if ( !v11 )
      {
        v13 = WdLogNewEntry5_WdLowResource(v12);
        *(_QWORD *)(v13 + 24) = 3686LL;
        WdLogEvent5_WdLowResource(v13);
LABEL_14:
        v3 = v5;
        goto LABEL_15;
      }
      memmove(v11, (const void *)(v7 + 32), *(unsigned int *)(v7 + 28));
    }
    v14 = DxgkQueryAdapterInfoInternal(&v17, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL));
    pPrivateDriverData = v17.pPrivateDriverData;
    if ( v14 >= 0 )
    {
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v17.pPrivateDriverData, v17.PrivateDriverDataSize);
      v5 = 1;
    }
    goto LABEL_12;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 3665LL;
  WdLogEvent5_WdError(v4);
LABEL_15:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v3;
}
