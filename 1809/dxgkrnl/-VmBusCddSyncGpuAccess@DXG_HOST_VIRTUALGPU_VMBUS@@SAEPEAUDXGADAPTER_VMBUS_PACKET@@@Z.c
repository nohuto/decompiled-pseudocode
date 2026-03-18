/*
 * XREFs of ?VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EBAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003651C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@IH@Z @ 0x1C00EBFB0 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@IH@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddSyncGpuAccess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax
  struct VMBPACKETCOMPLETION__ *v7; // rcx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v9,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
    if ( v5 )
    {
      v6 = DxgkpCddSyncGPUAccess(
             *((struct _KTHREAD ***)a1 + 6),
             *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL),
             *(_DWORD *)(v5 + 24),
             *(unsigned __int8 *)(v5 + 28));
      v7 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v10 = v6;
      VmBusCompletePacket(v7, &v10, 4u);
      v3 = 1;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 2217LL;
    WdLogEvent5_WdError(v4);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v3;
}
