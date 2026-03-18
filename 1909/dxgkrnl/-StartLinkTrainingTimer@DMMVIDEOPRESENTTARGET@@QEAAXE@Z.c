/*
 * XREFs of ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02BC694
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02BBDB0 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(DMMVIDEOPRESENTTARGET *this, __int64 a2)
{
  unsigned __int8 v3; // si
  __int64 v4; // rcx
  __int64 v5; // rax
  __int32 v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // ecx

  v3 = a2;
  v4 = *((_QWORD *)this + 67);
  if ( ((*(_DWORD *)(v4 + 152) - 1) & 0xFFFFFFFD) == 0 )
  {
    KeCancelTimer((PKTIMER)(v4 + 16));
    KeFlushQueuedDpcs();
  }
  if ( !v3 && *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) != 2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), v3 != 0 ? 1 : 3);
  v7 = WdLogNewEntry5_WdDmmEvent(v4, a2);
  *(_QWORD *)(v7 + 24) = v3;
  *(_QWORD *)(v7 + 32) = v6;
  WdLogEvent5_WdDmmEvent(v7);
  v8 = *((_QWORD *)this + 67);
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 2552LL);
  v10 = *(_DWORD *)(v9 + 428);
  if ( !v3 )
    v10 = *(_DWORD *)(v9 + 432) - v10;
  KeSetTimer((PKTIMER)(v8 + 16), (LARGE_INTEGER)(-100000LL * v10), (PKDPC)(v8 + 80));
}
