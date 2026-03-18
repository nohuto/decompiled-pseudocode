/*
 * XREFs of ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C002D634
 * Callers:
 *     DxgkCompleteFStateTransitionCB @ 0x1C00383D0 (DxgkCompleteFStateTransitionCB.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C002FE6C (McTemplateK0xq.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C003BFC0 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C003D034 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::CompleteFStateTransitionCB(DXGADAPTER *this, int a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rcx

  if ( *((_QWORD *)this + 321) )
  {
    v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1288);
    v5 = *((_QWORD *)this + 320) + 520LL * v4;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0xq(
        this,
        &Dxgk_CompleteFStateTransitionCB,
        a3,
        this,
        (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1288));
    *(_BYTE *)(v5 + 359) = 0;
    PoFxCompleteIdleState(*((_QWORD *)this + 321), v4);
    v6 = *(_QWORD *)(v5 + 512);
    if ( v6 && !*(_DWORD *)(v5 + 344) )
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v6 + 136));
    if ( *(_DWORD *)(v5 + 208) == 7 )
      DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v5 + 4), *(_DWORD *)(v5 + 344), 0);
    if ( *((_QWORD *)this + 422)
      && (v4 == 1 || v4 == 4)
      && _InterlockedExchangeAdd((volatile signed __int32 *)this + 832, 0xFFFFFFFF) != 1 )
    {
      KeSetEvent((PRKEVENT)((char *)this + 3272), 0, 0);
    }
  }
}
