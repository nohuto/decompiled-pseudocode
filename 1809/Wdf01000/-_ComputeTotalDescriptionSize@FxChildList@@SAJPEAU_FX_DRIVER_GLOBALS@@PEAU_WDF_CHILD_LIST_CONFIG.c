/*
 * XREFs of ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C003E5E0
 * Callers:
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C003E79C (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0086CA0 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008E950 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxChildList::_ComputeTotalDescriptionSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_CHILD_LIST_CONFIG *Config,
        unsigned __int64 *TotalDescriptionSize)
{
  unsigned __int64 _a1; // rax
  unsigned __int64 v6; // rcx
  unsigned __int16 v7; // r9
  unsigned int v8; // ebx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  bool v13; // cf
  unsigned __int64 v14; // rcx
  unsigned __int16 v15; // r9

  _a1 = Config->IdentificationDescriptionSize;
  *TotalDescriptionSize = 0LL;
  v6 = (_a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v6 < _a1 )
  {
    v7 = 56;
LABEL_3:
    v8 = -1073741811;
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xCu, v7, WPP_FxChildList_cpp_Traceguids, _a1, -1073741811);
    return v8;
  }
  _a1 = Config->AddressDescriptionSize;
  v10 = (_a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v10 < _a1 )
  {
    v7 = 57;
    goto LABEL_3;
  }
  v11 = v6 + 88;
  v12 = -1LL;
  v13 = v6 >= 0xFFFFFFFFFFFFFFA8uLL;
  v14 = -1LL;
  if ( !v13 )
    v14 = v11;
  v8 = v13 ? 0xC0000095 : 0;
  *TotalDescriptionSize = v14;
  if ( v11 < 0x58 )
  {
    v15 = 58;
LABEL_11:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xCu, v15, WPP_FxChildList_cpp_Traceguids, v8);
    return v8;
  }
  if ( v14 + v10 >= v14 )
    v12 = v14 + v10;
  v8 = v14 + v10 < v14 ? 0xC0000095 : 0;
  *TotalDescriptionSize = v12;
  if ( v14 + v10 < v14 )
  {
    v15 = 59;
    goto LABEL_11;
  }
  return 0LL;
}
