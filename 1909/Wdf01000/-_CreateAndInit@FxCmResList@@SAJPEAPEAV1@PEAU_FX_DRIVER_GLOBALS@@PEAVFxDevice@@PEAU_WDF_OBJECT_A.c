/*
 * XREFs of ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0086B44
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0084710 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008E9B8 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C005E730 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 */

__int64 __fastcall FxCmResList::_CreateAndInit(
        FxCmResList **ResourceList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *AccessFlags,
        _WDF_OBJECT_ATTRIBUTES *a4,
        unsigned __int8 FxDriverGlobals_0)
{
  unsigned int v5; // ebx
  FxCmResList *v8; // rdi

  v5 = 0;
  *ResourceList = 0LL;
  v8 = (FxCmResList *)FxObjectHandleAlloc(
                        FxDriverGlobals,
                        ExDefaultNonPagedPoolType,
                        0x98uLL,
                        0,
                        0LL,
                        0,
                        FxObjectTypeExternal);
  if ( v8 )
  {
    FxResourceCollection::FxResourceCollection(v8, FxDriverGlobals, 0x1036u, 0x98u, FxDriverGlobals_0);
    v8->__vftable = (FxCmResList_vtbl *)FxCmResList::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    *ResourceList = v8;
  }
  else
  {
    v5 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxResource_hpp_Traceguids, -1073741670);
  }
  return v5;
}
