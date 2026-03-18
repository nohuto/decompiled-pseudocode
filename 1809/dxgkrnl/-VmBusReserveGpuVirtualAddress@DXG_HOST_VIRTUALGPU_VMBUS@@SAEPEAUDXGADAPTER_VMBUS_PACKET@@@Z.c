/*
 * XREFs of ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F26F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RESERVEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_RESERVEGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00366AC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RESERVEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_RESERVE.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0140440 (DxgkReserveGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReserveGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  const GUID *v7; // r8
  __int64 v8; // rdi
  struct VMBPACKETCOMPLETION__ *v9; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-20h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v11,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_RESERVEGPUVIRTUALADDRESS>((__int64)a1);
    v8 = v5;
    if ( v5 && (int)DxgkReserveGpuVirtualAddress(v5 + 24, v6, v7) >= 0 )
    {
      v9 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v12[1] = *(_QWORD *)(v8 + 88);
      v12[0] = *(_QWORD *)(v8 + 80);
      VmBusCompletePacket(v9, v12, 0x10u);
      v3 = 1;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 4232LL;
    WdLogEvent5_WdError(v4);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v3;
}
