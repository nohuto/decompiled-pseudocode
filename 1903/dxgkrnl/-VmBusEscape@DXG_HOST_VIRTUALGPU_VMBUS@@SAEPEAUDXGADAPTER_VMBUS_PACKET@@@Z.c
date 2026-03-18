/*
 * XREFs of ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C8DC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEscape(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  _BYTE v22[24]; // [rsp+20h] [rbp-40h] BYREF
  _D3DKMT_ESCAPE v23; // [rsp+38h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v22,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = *((_QWORD *)a1 + 5);
  v6 = 0;
  if ( !*(_BYTE *)(v5 + 157) )
  {
    v7 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v7 + 24) = 3848LL;
LABEL_14:
    v14 = v7;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(v5 + 145) )
  {
    v8 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v8 + 24) = 3852LL;
    WdLogEvent5_WdWarning(v8);
    goto LABEL_16;
  }
  v9 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v12 = v9;
  if ( !v9 )
    goto LABEL_16;
  v13 = *((unsigned int *)a1 + 22) - 55LL;
  if ( v13 < *(unsigned int *)(v9 + 40) )
  {
    v14 = WdLogNewEntry5_WdError(v13, v10, v11);
    *(_QWORD *)(v14 + 24) = *((unsigned int *)a1 + 22);
LABEL_15:
    WdLogEvent5_WdError(v14);
    goto LABEL_16;
  }
  v15 = *(_DWORD *)(v9 + 32);
  if ( v15 && v15 != 8 )
  {
    v14 = WdLogNewEntry5_WdError(v13, v10, v11);
    *(_QWORD *)(v14 + 24) = *(int *)(v12 + 32);
    *(_QWORD *)(v14 + 32) = 3870LL;
    goto LABEL_15;
  }
  memset(&v23, 0, sizeof(v23));
  v23.hAdapter = *(_DWORD *)(v12 + 24);
  v23.Flags.Value = *(_DWORD *)(v12 + 36);
  v23.hDevice = *(_DWORD *)(v12 + 28);
  v23.hContext = *(_DWORD *)(v12 + 44);
  v23.Type = *(_DWORD *)(v12 + 32);
  v23.PrivateDriverDataSize = *(_DWORD *)(v12 + 40);
  v23.pPrivateDriverData = (void *)(v12 + 48);
  v16 = DxgkEscape(&v23);
  v20 = v16;
  if ( v16 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v7 + 24) = v20;
    goto LABEL_14;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v23.pPrivateDriverData, v23.PrivateDriverDataSize);
  v6 = 1;
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return v6;
}
