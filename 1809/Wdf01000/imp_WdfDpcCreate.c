/*
 * XREFs of imp_WdfDpcCreate @ 0x1C0039B80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000E4E4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_DDd @ 0x1C0030484 (WPP_IFR_SF_DDd.c)
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C003C620 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDpcCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DPC_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDPC__ **Dpc)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  int result; // eax
  unsigned __int8 v9; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxObject *pParent; // [rsp+50h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  result = FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Attributes, 24);
  if ( result >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
    if ( !Config )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    if ( !Dpc )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    if ( Config->Size == 24 )
    {
      result = FxValidateObjectAttributes(pParent->m_Globals, Attributes, 0);
      if ( result >= 0 )
        return FxDpc::_Create(m_Globals, Config, Attributes, pParent, Dpc);
    }
    else
    {
      WPP_IFR_SF_DDd(m_Globals, v9, 0x12u, 0xAu, WPP_FxDpcApi_cpp_Traceguids, Config->Size, 24, -1073741820);
      return -1073741820;
    }
  }
  return result;
}
