/*
 * XREFs of ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18006A9FC
 * Callers:
 *     ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x18007F590 (-NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18007F740 (-NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfig.c)
 *     ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z @ 0x1801EA8F8 (-NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z.c)
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x1801EAA18 (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801EAB20 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801EBCCC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  _QWORD *v8; // rcx

  EnterCriticalSection(&stru_1803089E8);
  v5 = 0;
  if ( byte_1803089E4 )
  {
    v5 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147023781, 0x98u);
  }
  else
  {
    v6 = operator new(0x18uLL);
    if ( v6 )
    {
      v7 = 0;
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      v6[2] = a3;
      v8 = (_QWORD *)qword_1803089D8;
      if ( *(void ***)qword_1803089D8 != &CManipulationManager::s_InteractionUpdateQueue )
        __fastfail(3u);
      *v6 = &CManipulationManager::s_InteractionUpdateQueue;
      v6[1] = v8;
      *v8 = v6;
      ++dword_1803089E0;
      qword_1803089D8 = (__int64)v6;
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x9Bu);
    }
  }
  LeaveCriticalSection(&stru_1803089E8);
  return v5;
}
