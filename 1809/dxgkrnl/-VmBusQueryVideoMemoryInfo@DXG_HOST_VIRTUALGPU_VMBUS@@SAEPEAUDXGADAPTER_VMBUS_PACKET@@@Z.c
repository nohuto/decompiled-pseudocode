/*
 * XREFs of ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F2410
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C00B3150 (DxgkQueryVideoMemoryInfo.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryVideoMemoryInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  _DWORD *v5; // rdi
  struct VMBPACKETCOMPLETION__ *v6; // rcx
  _BYTE v8[56]; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v9[24]; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v10[4]; // [rsp+78h] [rbp+27h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v9,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v5 )
    {
      memset(v8, 0, sizeof(v8));
      *(_DWORD *)&v8[8] = v5[6];
      *(_DWORD *)&v8[12] = v5[7];
      *(_DWORD *)&v8[48] = v5[8];
      if ( (int)DxgkQueryVideoMemoryInfo(v8) >= 0 )
      {
        memset(v10, 0, sizeof(v10));
        v6 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
        v10[3] = *(_QWORD *)&v8[40];
        v10[0] = *(_QWORD *)&v8[16];
        v10[2] = *(_QWORD *)&v8[32];
        v10[1] = *(_QWORD *)&v8[24];
        VmBusCompletePacket(v6, v10, 0x20u);
        v3 = 1;
      }
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 4077LL;
    WdLogEvent5_WdError(v4);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v3;
}
