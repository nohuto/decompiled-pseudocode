/*
 * XREFs of ndisEnableWppTracingCallback @ 0x1C004FF5C
 * Callers:
 *     WppClassicProviderCallback @ 0x1C004FB10 (WppClassicProviderCallback.c)
 *     WppTraceCallback @ 0x1C00EA470 (WppTraceCallback.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C00252E8 (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004F12C (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisEnableWppTracingCallback(__int64 a1, __int64 a2, char a3, int a4, char a5)
{
  char v6; // di
  int v7; // esi
  KIRQL v8; // al
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL v10; // di

  v6 = a4;
  v7 = 0;
  ndisWppExtendedCallback(a3, a4, a5);
  if ( a3 && (v6 & 2) != 0 && a5 )
  {
    if ( byte_1C00A0251 )
      WPP_SF_(0x60u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v9 = ndisMiniportList;
    v10 = v8;
    while ( v9 )
    {
      if ( (unsigned int)++v7 > 1 && byte_1C00A0251 )
        WPP_SF_(0x61u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
      if ( v9->PnPDeviceState == NdisPnPDeviceStarted && ndisReferenceMiniport((__int64)v9) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v10);
        ndisMEmitTraceRundown(v9);
        v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport((__int64)v9, 0x54u);
      }
      else if ( byte_1C00A0251 )
      {
        WPP_SF_qq(0x62u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v9, v9->DriverHandle);
      }
      v9 = v9->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v10);
    if ( byte_1C00A0251 )
      WPP_SF_(0x63u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
  }
}
