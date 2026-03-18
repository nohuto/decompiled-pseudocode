/*
 * XREFs of ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F2290
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0036684 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C01D6738 (DxgkQueryStatisticsInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryStatistics(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  const GUID *v7; // r8
  int StatisticsInternal; // eax
  __int64 v9; // rcx
  _OWORD *v10; // rax
  _OWORD *v11; // rdx
  __int128 v12; // xmm1
  struct VMBPACKETCOMPLETION__ *v13; // rcx
  _BYTE v15[24]; // [rsp+20h] [rbp-338h] BYREF
  _DWORD v16[196]; // [rsp+38h] [rbp-320h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v15,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_QUERYSTATISTICS>((__int64)a1);
    v6 = v5;
    if ( v5 && !*(_QWORD *)(v5 + 40) )
    {
      *(_QWORD *)(v5 + 28) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 276LL);
      memset(v16, 0, sizeof(v16));
      StatisticsInternal = DxgkQueryStatisticsInternal(v6 + 24, 0, v7);
      v9 = 6LL;
      v16[0] = StatisticsInternal;
      v10 = (_OWORD *)(v6 + 48);
      v11 = &v16[2];
      do
      {
        *v11 = *v10;
        v11[1] = v10[1];
        v11[2] = v10[2];
        v11[3] = v10[3];
        v11[4] = v10[4];
        v11[5] = v10[5];
        v11[6] = v10[6];
        v11 += 8;
        v12 = v10[7];
        v10 += 8;
        *(v11 - 1) = v12;
        --v9;
      }
      while ( v9 );
      v13 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      *(_QWORD *)v11 = *(_QWORD *)v10;
      VmBusCompletePacket(v13, v16, 0x310u);
      v3 = 1;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 4349LL;
    WdLogEvent5_WdError(v4);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v3;
}
