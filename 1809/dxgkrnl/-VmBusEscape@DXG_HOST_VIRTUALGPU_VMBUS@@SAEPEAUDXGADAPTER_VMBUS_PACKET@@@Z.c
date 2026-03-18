/*
 * XREFs of ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EF010
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00364F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
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
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  _BYTE v18[24]; // [rsp+20h] [rbp-40h] BYREF
  _D3DKMT_ESCAPE v19; // [rsp+38h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v18,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = *((_QWORD *)a1 + 5);
  v6 = 0;
  if ( !*(_BYTE *)(v5 + 157) )
  {
    v7 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v7 + 24) = 3903LL;
LABEL_14:
    v12 = v7;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(v5 + 145) )
  {
    v8 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v8 + 24) = 3907LL;
    WdLogEvent5_WdWarning(v8);
    goto LABEL_16;
  }
  v9 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v10 = v9;
  if ( !v9 )
    goto LABEL_16;
  v11 = *((unsigned int *)a1 + 22) - 55LL;
  if ( v11 < *(unsigned int *)(v9 + 40) )
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = *((unsigned int *)a1 + 22);
LABEL_15:
    WdLogEvent5_WdError(v12);
    goto LABEL_16;
  }
  v13 = *(_DWORD *)(v9 + 32);
  if ( v13 && v13 != 8 )
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = *(int *)(v10 + 32);
    *(_QWORD *)(v12 + 32) = 3925LL;
    goto LABEL_15;
  }
  memset(&v19, 0, sizeof(v19));
  v19.hAdapter = *(_DWORD *)(v10 + 24);
  v19.Flags.Value = *(_DWORD *)(v10 + 36);
  v19.hDevice = *(_DWORD *)(v10 + 28);
  v19.hContext = *(_DWORD *)(v10 + 44);
  v19.Type = *(_DWORD *)(v10 + 32);
  v19.PrivateDriverDataSize = *(_DWORD *)(v10 + 40);
  v19.pPrivateDriverData = (void *)(v10 + 48);
  v14 = DxgkEscape(&v19);
  v16 = v14;
  if ( v14 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v7 + 24) = v16;
    goto LABEL_14;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v19.pPrivateDriverData, v19.PrivateDriverDataSize);
  v6 = 1;
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v6;
}
