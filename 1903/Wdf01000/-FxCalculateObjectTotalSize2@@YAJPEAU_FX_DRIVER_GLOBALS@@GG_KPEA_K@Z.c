/*
 * XREFs of ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C000A040
 * Callers:
 *     imp_WdfRequestCreate @ 0x1C0009C70 (imp_WdfRequestCreate.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C000B350 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00538E8 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C005843C (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 * Callees:
 *     WPP_IFR_SF_DDid @ 0x1C0058700 (WPP_IFR_SF_DDid.c)
 */

__int64 __fastcall FxCalculateObjectTotalSize2(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 RawObjectSize,
        unsigned __int64 ExtraSize,
        unsigned __int64 ContextSize,
        unsigned __int64 *Total)
{
  unsigned __int16 v6; // di
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  int id; // ebx
  const _GUID *v12; // [rsp+20h] [rbp-38h]

  v6 = ExtraSize;
  v7 = -1LL;
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
    WPP_IFR_SF_DDid(
      FxDriverGlobals,
      v9,
      (unsigned __int16)ExtraSize,
      ContextSize,
      v12,
      RawObjectSize,
      v6,
      ContextSize,
      id);
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
  ExtraSize = (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( ExtraSize >= ContextSize )
  {
    if ( v9 + ExtraSize < v9 )
    {
      id = -1073741675;
      v9 = -1LL;
    }
    else
    {
      id = 0;
      v9 += ExtraSize;
    }
    *Total = v9;
    goto LABEL_5;
  }
  return 3221225621LL;
}
