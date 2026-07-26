/*
 * XREFs of ndisEnableWppTracingCallback @ 0x1C007E5EC
 * Callers:
 *     WppClassicProviderCallback @ 0x1C007E3B0 (WppClassicProviderCallback.c)
 *     WppTraceCallback @ 0x1C0116000 (WppTraceCallback.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C003DFE0 (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C5B8 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisEnableWppTracingCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  char v5; // bl
  char v6; // di
  int v7; // esi
  int v8; // edx
  KIRQL v9; // al
  int v10; // edx
  struct _NDIS_MINIPORT_BLOCK *v11; // rbx
  KIRQL v12; // di
  int v13; // edx

  v5 = a3;
  LOBYTE(a3) = a5;
  v6 = a4;
  v7 = 0;
  ndisWppExtendedCallback(v5, a4, a3);
  if ( v5 && (v6 & 2) != 0 && a5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        2,
        94,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
    }
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v11 = ndisMiniportList;
    v12 = v9;
    while ( v11 )
    {
      if ( (unsigned int)++v7 > 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 1;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          2,
          95,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
      }
      if ( v11->PnPDeviceState == NdisPnPDeviceStarted && (unsigned __int8)ndisReferenceMiniport((__int64)v11) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v12);
        ndisMEmitTraceRundown(v11);
        v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport((__int64)v11, 0x54u);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 1;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          2,
          96,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
          (char)v11,
          (char)v11->DriverHandle);
      }
      v11 = v11->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        2,
        97,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
    }
  }
}
