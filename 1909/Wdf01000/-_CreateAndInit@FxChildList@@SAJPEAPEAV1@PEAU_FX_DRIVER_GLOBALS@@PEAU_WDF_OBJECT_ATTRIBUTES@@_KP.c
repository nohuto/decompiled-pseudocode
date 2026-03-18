/*
 * XREFs of ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C003D95C
 * Callers:
 *     imp_WdfChildListCreate @ 0x1C0039520 (imp_WdfChildListCreate.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0087DD0 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0090100 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C003B95C (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 *     ?Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z @ 0x1C003CA34 (-Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z.c)
 */

__int64 __fastcall FxChildList::_CreateAndInit(
        FxChildList **ChildList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *ListAttributes,
        unsigned __int64 TotalDescriptionSize,
        FxDevice *Device,
        _WDF_CHILD_LIST_CONFIG *ListConfig,
        unsigned __int8 Static)
{
  _POOL_TYPE v8; // edx
  unsigned int v9; // ebx
  FxChildList *v12; // rcx
  FxChildList *v13; // rax
  FxChildList *v14; // rdi

  v8 = ExDefaultNonPagedPoolType;
  v9 = 0;
  *ChildList = 0LL;
  v12 = (FxChildList *)FxObjectHandleAlloc(FxDriverGlobals, v8, 0x168uLL, 0, ListAttributes, 0, FxObjectTypeExternal);
  if ( v12 )
  {
    FxChildList::FxChildList(v12, FxDriverGlobals, TotalDescriptionSize, Device, Static);
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    FxChildList::Initialize(v14, ListConfig);
    *ChildList = v14;
  }
  else
  {
    v9 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xCu, 0xAu, WPP_FxChildList_cpp_Traceguids, -1073741670);
  }
  return v9;
}
