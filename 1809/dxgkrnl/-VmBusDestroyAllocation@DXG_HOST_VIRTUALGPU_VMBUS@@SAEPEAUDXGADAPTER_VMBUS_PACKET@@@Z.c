/*
 * XREFs of ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EE840
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003660C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkDestroyAllocation2 @ 0x1C00FE650 (DxgkDestroyAllocation2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  int v8; // eax
  struct VMBPACKETCOMPLETION__ *v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  _BYTE v13[24]; // [rsp+38h] [rbp-18h] BYREF
  int v14; // [rsp+60h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v13,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( !v5 )
      goto LABEL_9;
    v7 = *(unsigned int *)(v5 + 32);
    if ( !(_DWORD)v7 || ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) / v7 >= 4 )
    {
      v11[0] = 0LL;
      v12 = 0LL;
      v11[0] = *(_QWORD *)(v5 + 24);
      v11[1] = v5 + 40;
      HIDWORD(v12) = *(_DWORD *)(v5 + 36);
      LODWORD(v12) = v7;
      v8 = DxgkDestroyAllocation2((ULONG64)v11);
      v9 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v14 = v8;
      VmBusCompletePacket(v9, &v14, 4u);
      v3 = 1;
      goto LABEL_9;
    }
    v4 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v4 + 24) = 1132LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 1125LL;
  }
  WdLogEvent5_WdError(v4);
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v3;
}
