/*
 * XREFs of ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180037698
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180034B5C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800351D4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180036210 (-UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180037954 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800B9190 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 */

void __fastcall ControllerProcessor::TryUpdateInteractionType(__int64 a1, __int64 a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 2676);
  if ( v2 == (_DWORD)a2 )
    return;
  if ( !(_DWORD)a2 )
  {
    ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 1872), 0);
    if ( *(_BYTE *)(a1 + 2680) )
    {
      ControllerProcessor::UpdateManipulationInjectionRect((ControllerProcessor *)a1);
      *(_BYTE *)(a1 + 2680) = 0;
    }
LABEL_16:
    *(_DWORD *)(a1 + 2676) = 0;
    return;
  }
  if ( (_DWORD)a2 == 1 )
  {
    if ( ((v2 - 16) & 0xFFFFFFEF) == 0 )
    {
      ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 1872), 0);
      if ( *(_BYTE *)(a1 + 2680) )
      {
        ControllerProcessor::UpdateManipulationInjectionRect((ControllerProcessor *)a1);
        *(_BYTE *)(a1 + 2680) = 0;
      }
    }
    if ( *(_BYTE *)(a1 + 2681) )
    {
      a2 = 1LL;
LABEL_8:
      ControllerProcessor::StartInteractionHelper(a1, a2);
      return;
    }
    goto LABEL_16;
  }
  if ( ((_DWORD)a2 == 16 || (_DWORD)a2 == 32) && !v2 && *(_BYTE *)(a1 + 2681) )
    goto LABEL_8;
}
