/*
 * XREFs of ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0222760
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CAB4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C00C5650 (DxgkQueryVideoMemoryInfo.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryVideoMemoryInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  _DWORD *v7; // rsi
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  _BYTE v10[56]; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v11[24]; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v12[4]; // [rsp+78h] [rbp+27h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v11,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v7 )
    {
      memset(v10, 0, sizeof(v10));
      *(_DWORD *)&v10[8] = v7[6];
      *(_DWORD *)&v10[12] = v7[7];
      *(_DWORD *)&v10[48] = v7[8];
      if ( (int)DxgkQueryVideoMemoryInfo(v10) >= 0 )
      {
        v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
        v12[3] = *(_QWORD *)&v10[40];
        v12[0] = *(_QWORD *)&v10[16];
        v12[2] = *(_QWORD *)&v10[32];
        v12[1] = *(_QWORD *)&v10[24];
        VmBusCompletePacket(v8, v12, 0x20u);
        v5 = 1;
      }
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 4022LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v5;
}
