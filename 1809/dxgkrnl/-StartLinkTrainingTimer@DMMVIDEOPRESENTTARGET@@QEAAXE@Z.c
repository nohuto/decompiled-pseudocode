/*
 * XREFs of ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C0284270
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0282754 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0283A50 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 v5; // si
  __int64 v6; // rcx
  __int64 v7; // rax
  __int32 v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // ecx

  v5 = a2;
  v6 = *((_QWORD *)this + 65);
  if ( ((*(_DWORD *)(v6 + 168) - 1) & 0xFFFFFFFD) == 0 )
  {
    KeCancelTimer((PKTIMER)(v6 + 32));
    KeFlushQueuedDpcs();
  }
  if ( !v5 && *(_DWORD *)(*((_QWORD *)this + 65) + 168LL) != 2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 65) + 168LL), v5 != 0 ? 1 : 3);
  v9 = WdLogNewEntry5_WdDmmEvent(v6, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = v5;
  *(_QWORD *)(v9 + 32) = v8;
  WdLogEvent5_WdDmmEvent(v9);
  v10 = *((_QWORD *)this + 65);
  v11 = *(_QWORD *)(*(_QWORD *)v10 + 2520LL);
  v12 = *(_DWORD *)(v11 + 324);
  if ( !v5 )
    v12 = *(_DWORD *)(v11 + 328) - v12;
  KeSetTimer((PKTIMER)(v10 + 32), (LARGE_INTEGER)(-100000LL * v12), (PKDPC)(v10 + 96));
}
