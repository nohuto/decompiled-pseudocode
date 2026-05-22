/*
 * XREFs of _MPCGestureHandlerManager::MapGestureHandlerToWorkspace_::_1_::dtor$4 @ 0x18012FF18
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall MPCGestureHandlerManager::MapGestureHandlerToWorkspace_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 56));
}
