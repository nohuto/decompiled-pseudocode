/*
 * XREFs of ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18009FACC
 * Callers:
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x18009FA40 (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18009FACC (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180029548 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18009F65C (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18009FACC (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x18009FB94 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18009FBD0 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18009FC60 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18009FC98 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetInteraction(CVisual *this, struct CInteraction *a2)
{
  unsigned int v4; // ebx
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ecx
  CVisual *v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx

  v4 = 0;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  v6 = InteractionInternal;
  if ( a2 != InteractionInternal )
  {
    if ( InteractionInternal )
    {
      CVisual::NotifyMidManipulationUpdate(this, 1LL, this);
      CInteraction::SetVisual(v6, 0LL);
      CVisual::ClearInteraction(this);
    }
    if ( a2 )
    {
      v7 = *((_QWORD *)a2 + 13);
      if ( v7 )
      {
        v11 = *(CVisual **)(v7 + 16);
        if ( v11 )
        {
          v12 = CVisual::SetInteraction(v11, 0LL);
          v4 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE40u);
            return v4;
          }
        }
      }
      v8 = CInteraction::SetVisual(a2, this);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xE44u);
        return v4;
      }
      (**(void (__fastcall ***)(struct CInteraction *))a2)(a2);
      CVisual::SetInteractionInternal(this, a2);
      CVisual::NotifyMidManipulationUpdate(this, 0LL, this);
    }
    CVisual::OnInputSinkChange(this);
  }
  return v4;
}
