/*
 * XREFs of ?NotifyVisualPropertyChange@CGlobalManipulationManager@@UEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x180237330
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007897C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     McTemplateU0p @ 0x18015D458 (McTemplateU0p.c)
 *     ?QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18023853C (-QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCV.c)
 */

__int64 __fastcall CGlobalManipulationManager::NotifyVisualPropertyChange(
        CGlobalManipulationManager *this,
        struct CVisual *a2,
        const struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct CInteraction *InteractionInternal; // rax

  v3 = *((_QWORD *)this + 2);
  v7 = 0;
  if ( GetCurrentThreadId() == *(_DWORD *)(v3 + 576) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
      McTemplateU0p(v8, &MIDMANIPULATION_UPDATE_VISUAL_PROP, (__int64)a2);
    InteractionInternal = CVisual::GetInteractionInternal(a2);
    if ( InteractionInternal )
    {
      *((_OWORD *)InteractionInternal + 7) = *(_OWORD *)a3;
      *((_OWORD *)InteractionInternal + 8) = *((_OWORD *)a3 + 1);
      *((_OWORD *)InteractionInternal + 9) = *((_OWORD *)a3 + 2);
      *((_OWORD *)InteractionInternal + 10) = *((_OWORD *)a3 + 3);
      *((_DWORD *)InteractionInternal + 44) = *((_DWORD *)a3 + 16);
    }
  }
  else
  {
    return (unsigned int)CGlobalManipulationManager::QueueMidManipulationUpdate(this, 4LL, a2);
  }
  return v7;
}
