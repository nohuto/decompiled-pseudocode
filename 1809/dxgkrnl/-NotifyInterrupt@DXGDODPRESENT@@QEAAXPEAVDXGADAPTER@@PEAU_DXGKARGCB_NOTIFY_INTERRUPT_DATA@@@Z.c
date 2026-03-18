/*
 * XREFs of ?NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z @ 0x1C0040224
 * Callers:
 *     DxgNotifyInterruptCB @ 0x1C0014050 (DxgNotifyInterruptCB.c)
 * Callees:
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0004034 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 */

void __fastcall DXGDODPRESENT::NotifyInterrupt(
        DXGDODPRESENT *this,
        ADAPTER_DISPLAY **a2,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a3)
{
  unsigned int v5; // eax
  UINT SubmissionFenceId; // ecx
  UINT NodeOrdinal; // eax
  _QWORD *v8; // rax
  __int64 InterruptType; // rcx

  if ( a3->InterruptType == DXGK_INTERRUPT_DISPLAYONLY_VSYNC )
  {
    v5 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(a2[315], a3->DmaCompleted.SubmissionFenceId);
    if ( v5 != -1 )
      _InterlockedAdd((volatile signed __int32 *)this + v5 + 4, 1u);
  }
  else if ( a3->InterruptType == DXGK_INTERRUPT_DISPLAYONLY_PRESENT_PROGRESS )
  {
    SubmissionFenceId = a3->DmaCompleted.SubmissionFenceId;
    if ( SubmissionFenceId < *(_DWORD *)this )
    {
      NodeOrdinal = a3->DmaCompleted.NodeOrdinal;
      if ( NodeOrdinal )
      {
        if ( NodeOrdinal == 1 )
          _InterlockedOr64((volatile signed __int64 *)this + 10, 2LL << (2 * (unsigned __int8)SubmissionFenceId));
      }
      else
      {
        _InterlockedOr64((volatile signed __int64 *)this + 10, 1LL << (2 * (unsigned __int8)SubmissionFenceId));
      }
    }
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this);
    v8[3] = 275LL;
    v8[4] = 24LL;
    v8[5] = *((_QWORD *)this + 11);
    InterruptType = a3->InterruptType;
    v8[7] = 0LL;
    v8[6] = InterruptType;
    WdLogEvent5_WdCriticalError(v8);
  }
}
