/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180054800
 * Callers:
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x180054548 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x180055D50 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003479C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800347E0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x1800545DC (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        const struct _tagpropertykey *a2,
        const struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  struct _GUID **v6; // rax
  unsigned __int16 *v9; // rsi
  int ConnectorSignalProcessingModes; // ebx
  unsigned int v12; // r12d
  unsigned __int16 *v13; // r15
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  int v16; // eax
  PROPVARIANT pvar; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int16 *v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  unsigned __int16 *v20; // [rsp+90h] [rbp+30h] BYREF

  pvar = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v6 = a5;
  *a4 = 0;
  v20 = 0LL;
  v9 = 0LL;
  *v6 = 0LL;
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
      goto LABEL_20;
    v12 = (unsigned int)v18;
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
LABEL_20:
      ConnectorSignalProcessingModes = -2147418113;
      goto LABEL_4;
    }
    v13 = v18;
    v14 = -1LL;
    do
      ++v14;
    while ( v18[v14] );
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      ConnectorSignalProcessingModes = -2147024362;
    }
    else
    {
      if ( is_mul_ok(v15, 2uLL) )
      {
        v16 = CTCoAllocPolicy::Alloc(0LL, (v15 * (unsigned __int128)2uLL) >> 64, 2 * v15, (void **)&v20);
        v9 = v20;
        ConnectorSignalProcessingModes = v16;
        if ( v16 >= 0 )
          StringCchCopyNExW((char *)v20, v14 + 1, v13, v14);
      }
      else
      {
        ConnectorSignalProcessingModes = -2147024362;
      }
      if ( ConnectorSignalProcessingModes >= 0 )
      {
        PropVariantClear(&pvar);
        ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(v9, v12, a4, a5);
        if ( ConnectorSignalProcessingModes >= 0 )
          ConnectorSignalProcessingModes = 0;
      }
    }
  }
LABEL_4:
  CoTaskMemFree(v9);
  PropVariantClear(&pvar);
  return (unsigned int)ConnectorSignalProcessingModes;
}
