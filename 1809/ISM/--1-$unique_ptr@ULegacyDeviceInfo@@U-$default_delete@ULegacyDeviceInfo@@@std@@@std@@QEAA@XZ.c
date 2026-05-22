/*
 * XREFs of ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x180043548
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$8 @ 0x18012FC13 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$8.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$2 @ 0x1801305CF (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$2.c)
 *     _HeatDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x180131621 (_HeatDeviceCollection--OnDeviceAttach_--_1_--dtor$1.c)
 *     _HIDDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x18013168C (_HIDDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x3D8);
}
