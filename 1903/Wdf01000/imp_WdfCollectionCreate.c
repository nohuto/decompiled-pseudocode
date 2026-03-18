/*
 * XREFs of imp_WdfCollectionCreate @ 0x1C000CB70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000E938 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000E9A4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfCollectionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *CollectionAttributes,
        WDFCOLLECTION__ **Collection)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  __int64 result; // rax
  FxNonPagedObject *v7; // rax
  FxNonPagedObject *v8; // rdi
  int v9; // eax
  unsigned int v10; // esi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxObject *pParent; // [rsp+60h] [rbp+8h] BYREF
  WDFCOLLECTION__ *hCol; // [rsp+70h] [rbp+18h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( FxValidateObjectAttributesForParentHandle(
         (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
         CollectionAttributes,
         0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)CollectionAttributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !Collection )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *Collection = 0LL;
  result = FxValidateObjectAttributes(DriverName, CollectionAttributes, 0);
  if ( (int)result >= 0 )
  {
    v7 = (FxNonPagedObject *)FxObjectHandleAlloc(
                               DriverName,
                               ExDefaultNonPagedPoolType,
                               0x90uLL,
                               0,
                               CollectionAttributes,
                               0,
                               FxObjectTypeExternal);
    v8 = v7;
    if ( v7 )
    {
      FxNonPagedObject::FxNonPagedObject(v7, 0x100Eu, 0x90u, DriverName);
      LODWORD(v8[1].__vftable) = 0;
      v8[1].m_Globals = (_FX_DRIVER_GLOBALS *)&v8[1].m_Type;
      *(_QWORD *)&v8[1].m_Type = (char *)v8 + 128;
      v8->__vftable = (FxNonPagedObject_vtbl *)FxCollection::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      v9 = FxObject::Commit(v8, (_FX_DRIVER_GLOBALS *)CollectionAttributes, (void **)&hCol, 0LL, 1u);
      v10 = v9;
      if ( v9 < 0 )
      {
        WPP_IFR_SF_d(DriverName, 2u, 2u, 0xAu, WPP_FxCollectionApi_cpp_Traceguids, v9);
        FxObject::ClearEvtCallbacks(v8);
        ((void (*)(void))v8->DeleteObject)();
      }
      else
      {
        *Collection = hCol;
      }
    }
    else
    {
      WPP_IFR_SF_(DriverName, 2u, 2u, 0xBu, WPP_FxCollectionApi_cpp_Traceguids);
      return (unsigned int)-1073741670;
    }
    return v10;
  }
  return result;
}
