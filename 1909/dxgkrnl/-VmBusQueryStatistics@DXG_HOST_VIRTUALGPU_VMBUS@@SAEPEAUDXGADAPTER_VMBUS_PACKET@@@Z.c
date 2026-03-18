/*
 * XREFs of ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02225E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CBCC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0204C38 (DxgkQueryStatisticsInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryStatistics(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  const GUID *v9; // r8
  int StatisticsInternal; // eax
  __int64 v11; // rcx
  _OWORD *v12; // rax
  _OWORD *v13; // rdx
  __int128 v14; // xmm1
  struct VMBPACKETCOMPLETION__ *v15; // rcx
  _BYTE v17[24]; // [rsp+20h] [rbp-338h] BYREF
  _DWORD v18[196]; // [rsp+38h] [rbp-320h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v17,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_QUERYSTATISTICS>((__int64)a1);
    v8 = v7;
    if ( v7 && !*(_QWORD *)(v7 + 40) )
    {
      *(_QWORD *)(v7 + 28) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 276LL);
      memset(v18, 0, sizeof(v18));
      StatisticsInternal = DxgkQueryStatisticsInternal(v8 + 24, 0, v9);
      v11 = 6LL;
      v18[0] = StatisticsInternal;
      v12 = (_OWORD *)(v8 + 48);
      v13 = &v18[2];
      do
      {
        *v13 = *v12;
        v13[1] = v12[1];
        v13[2] = v12[2];
        v13[3] = v12[3];
        v13[4] = v12[4];
        v13[5] = v12[5];
        v13[6] = v12[6];
        v13 += 8;
        v14 = v12[7];
        v12 += 8;
        *(v13 - 1) = v14;
        --v11;
      }
      while ( v11 );
      v15 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      *(_QWORD *)v13 = *(_QWORD *)v12;
      VmBusCompletePacket(v15, v18, 0x310u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 4279LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v5;
}
