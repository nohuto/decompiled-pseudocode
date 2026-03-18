/*
 * XREFs of ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA180
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00366FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGP.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01DB6D0 (DxgkUpdateGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUpdateGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  const GUID *v7; // r8
  int v8; // eax
  unsigned __int64 v9; // rdx
  int updated; // eax
  __int64 v11; // rax
  struct VMBPACKETCOMPLETION__ *v12; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v15[7]; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+80h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS>((__int64)a1);
    if ( v5 )
    {
      memset(v15, 0, sizeof(v15));
      v15[5] = *(_QWORD *)(v5 + 24);
      LODWORD(v15[6]) = *(_DWORD *)(v5 + 48);
      v15[0] = *(_QWORD *)(v5 + 32);
      v15[1] = *(_QWORD *)(v5 + 40);
      v15[2] = v5 + 56;
      v8 = *(_DWORD *)(v5 + 44);
      if ( v8 && (v6 = (unsigned int)(v8 - 1), v9 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 120) >> 6, v9 >= v6) )
      {
        updated = DxgkUpdateGpuVirtualAddress((__int64)v15, v9, v7);
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v11 + 24) = *(unsigned int *)(v5 + 44);
        WdLogEvent5_WdError(v11);
        updated = -1073741811;
      }
      v12 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v16 = updated;
      VmBusCompletePacket(v12, &v16, 4u);
      v3 = 1;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 4255LL;
    WdLogEvent5_WdError(v4);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v3;
}
