/*
 * XREFs of ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C97C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C0219A38 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitPresentHistoryToken(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  struct VMBPACKETCOMPLETION__ *v9; // rcx
  _BYTE v11[40]; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v11,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_PRESENTHISTORYTOKEN>((__int64)a1);
    if ( v7 )
    {
      v8 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
             *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL),
             *(unsigned int *)(v7 + 24),
             *(_QWORD *)(v7 + 56),
             *(_QWORD *)(v7 + 32),
             *(_QWORD *)(v7 + 40),
             *(_QWORD *)(v7 + 48),
             *(_DWORD *)(v7 + 64));
      v9 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v12 = v8;
      VmBusCompletePacket(v9, &v12, 4u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 2762LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v5;
}
