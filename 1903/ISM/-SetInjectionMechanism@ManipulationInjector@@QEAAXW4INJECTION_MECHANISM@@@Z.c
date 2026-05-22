/*
 * XREFs of ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x1800E8FB4
 * Callers:
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180078088 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18008CC98 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800E7A88 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 */

void __fastcall ManipulationInjector::SetInjectionMechanism(ManipulationInjector *a1)
{
  if ( *(_DWORD *)a1 != 4 )
  {
    ManipulationInjector::EndManipulation(a1, 0);
    *((_DWORD *)a1 + 184) = 0;
    *((_DWORD *)a1 + 183) = 0;
    *(_DWORD *)a1 = 4;
  }
}
