/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18004FB44
 * Callers:
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x18004DE48 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004ECF4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18004FCC8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x18004FFE4 (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        const struct _tagpropertykey *a2,
        const struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  int ConnectorSignalProcessingModes; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  PROPVARIANT pvar; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v15[2]; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp-10h]

  pvar = 0LL;
  *a4 = 0;
  *(_QWORD *)v15 = 0LL;
  v16 = 0LL;
  *a5 = 0LL;
  ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                     a1,
                                     a3,
                                     &pvar);
  if ( ConnectorSignalProcessingModes >= 0 )
  {
    if ( !(_WORD)pvar )
    {
LABEL_3:
      ConnectorSignalProcessingModes = -2147023728;
      goto LABEL_4;
    }
    if ( (_WORD)pvar != 19 )
      goto LABEL_16;
    v10 = v15[0];
    PropVariantClear(&pvar);
    ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                       a1,
                                       a2,
                                       &pvar);
    if ( ConnectorSignalProcessingModes < 0 )
      goto LABEL_4;
    if ( !(_WORD)pvar )
      goto LABEL_3;
    if ( (_WORD)pvar != 31 )
    {
LABEL_16:
      ConnectorSignalProcessingModes = -2147418113;
      goto LABEL_4;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(*(_QWORD *)v15 + 2 * v13) );
    ConnectorSignalProcessingModes = _AllocStringWorker<CTCoAllocPolicy>(v12, v11, *(_QWORD *)v15);
    if ( ConnectorSignalProcessingModes >= 0 )
    {
      PropVariantClear(&pvar);
      ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(0LL, v10, a4, a5);
      if ( ConnectorSignalProcessingModes >= 0 )
        ConnectorSignalProcessingModes = 0;
    }
  }
LABEL_4:
  CoTaskMemFree(0LL);
  PropVariantClear(&pvar);
  return (unsigned int)ConnectorSignalProcessingModes;
}
