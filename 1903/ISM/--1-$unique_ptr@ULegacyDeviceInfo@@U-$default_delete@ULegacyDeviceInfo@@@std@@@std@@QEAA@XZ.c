/*
 * XREFs of ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x180080594
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$9 @ 0x18003CF2A (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$9.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$2 @ 0x18008CF3B (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$2.c)
 *     _HeatDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x1800A461E (_HeatDeviceCollection--OnDeviceAttach_--_1_--dtor$1.c)
 *     _HIDDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800A5B9B (_HIDDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x620);
}
