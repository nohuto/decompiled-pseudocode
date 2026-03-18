/*
 * XREFs of ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C781C
 * Callers:
 *     ?NotifyUpdateRails@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x1800C55C0 (-NotifyUpdateRails@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     ?NotifyUpdateConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x1800C5670 (-NotifyUpdateConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4Enum@Interaction.c)
 *     ?NotifyCaptureManipulation@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I_K@Z @ 0x1802386B0 (-NotifyCaptureManipulation@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I_K@Z.c)
 *     ?NotifyCapturePointer@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I@Z @ 0x1802387D0 (-NotifyCapturePointer@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I@Z.c)
 *     ?NotifyUpdateTemporaryConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1802388F0 (-NotifyUpdateTemporaryConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4Tempora.c)
 *     ?QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180239C4C (-QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCV.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx

  v4 = 0;
  EnterCriticalSection(&stru_180340488);
  if ( byte_180340484 )
  {
    v4 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007045B, 0x97u, 0LL);
  }
  else
  {
    v6 = operator new(0x18uLL);
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      v6[2] = a3;
      v8 = (_QWORD *)qword_180340478;
      if ( *(void ***)qword_180340478 != &CManipulationManager::s_InteractionUpdateQueue )
        __fastfail(3u);
      *v6 = &CManipulationManager::s_InteractionUpdateQueue;
      v6[1] = v8;
      *v8 = v6;
      ++dword_180340480;
      qword_180340478 = (__int64)v6;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x9Cu, 0LL);
    }
  }
  LeaveCriticalSection(&stru_180340488);
  return v4;
}
