/*
 * XREFs of ?OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0044420
 * Callers:
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0043EE4 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?LoadReflectorServiceAndOpenInterfaceLocked@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0044118 (-LoadReflectorServiceAndOpenInterfaceLocked@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxCompanionLibrary::OpenCompanionLibraryInterface(
        FxCompanionLibrary *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  unsigned int v4; // edi
  int _a1; // eax

  v4 = KeWaitForSingleObject(this, Executive, 0, 0, 0LL);
  if ( this->m_InitCount
    || (_a1 = FxCompanionLibrary::LoadReflectorServiceAndOpenInterfaceLocked(this, DriverGlobals), v4 = _a1, _a1 >= 0) )
  {
    ++this->m_InitCount;
  }
  else
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, 0xEu, WPP_FxCompanionLibrary_cpp_Traceguids, _a1);
  }
  KeSetEvent(&this->m_CompanionLibrarySyncEvent, 0, 0);
  return v4;
}
