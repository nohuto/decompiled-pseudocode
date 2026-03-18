/*
 * XREFs of ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C000A950
 * Callers:
 *     imp_WdfRequestCreate @ 0x1C000A590 (imp_WdfRequestCreate.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C000CCF8 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C000DE30 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0053ED0 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C00589DC (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 * Callees:
 *     WPP_IFR_SF_DDid @ 0x1C0058B9C (WPP_IFR_SF_DDid.c)
 */

__int64 __fastcall FxCalculateObjectTotalSize2(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 RawObjectSize,
        unsigned __int16 ExtraSize,
        unsigned __int64 ContextSize,
        unsigned __int64 *Total)
{
  unsigned __int16 v5; // si
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rcx
  int id; // ebx
  const _GUID *v12; // [rsp+20h] [rbp-38h]

  v5 = RawObjectSize;
  v7 = -1LL;
  *Total = 0LL;
  v8 = ((unsigned __int16)(ExtraSize + 15) & 0xFFF0)
     + (unsigned __int64)((unsigned __int16)(RawObjectSize + 15) & 0xFFF0);
  v9 = v8 + 48;
  if ( v8 + 48 < v8 )
  {
    id = -1073741675;
    v9 = -1LL;
  }
  else
  {
    id = 0;
  }
  *Total = v9;
  if ( id < 0 )
  {
LABEL_19:
    WPP_IFR_SF_DDid(FxDriverGlobals, RawObjectSize, ExtraSize, ContextSize, v12, v5, ExtraSize, ContextSize, id);
    return (unsigned int)id;
  }
  if ( !ContextSize )
  {
LABEL_5:
    if ( id >= 0 )
    {
      if ( FxDriverGlobals->FxVerifierHandle )
      {
        if ( v9 + 48 >= v9 )
          v7 = v9 + 48;
        id = v9 + 48 < v9 ? 0xC0000095 : 0;
        *Total = v7;
      }
      if ( id >= 0 )
        return (unsigned int)id;
    }
    goto LABEL_19;
  }
  RawObjectSize = (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( RawObjectSize >= ContextSize )
  {
    if ( v9 + RawObjectSize < v9 )
    {
      id = -1073741675;
      v9 = -1LL;
    }
    else
    {
      id = 0;
      v9 += RawObjectSize;
    }
    *Total = v9;
    goto LABEL_5;
  }
  return 3221225621LL;
}
