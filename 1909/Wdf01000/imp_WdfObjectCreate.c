/*
 * XREFs of imp_WdfObjectCreate @ 0x1C000CF60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C000D024 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000E9A4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfObjectCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Object)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  __int64 result; // rax
  int v7; // edi
  void *_a1; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxUserObject *pUserObject; // [rsp+50h] [rbp+8h] BYREF
  FxObject *pParent; // [rsp+60h] [rbp+18h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  pUserObject = 0LL;
  if ( FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Attributes, 0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !Object )
    FxVerifierNullBugCheck(DriverName, retaddr);
  result = FxValidateObjectAttributes(DriverName, Attributes, 2);
  if ( (int)result >= 0 )
  {
    v7 = FxUserObject::_Create(DriverName, Attributes, &pUserObject);
    if ( v7 >= 0 )
    {
      if ( pUserObject->m_ObjectSize )
        _a1 = (void *)((unsigned __int64)pUserObject ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      *Object = _a1;
      if ( DriverName->FxVerboseOn )
        WPP_IFR_SF_q(DriverName, 5u, 0x13u, 0xAu, WPP_FxUserObjectApi_cpp_Traceguids, _a1);
    }
    return (unsigned int)v7;
  }
  return result;
}
