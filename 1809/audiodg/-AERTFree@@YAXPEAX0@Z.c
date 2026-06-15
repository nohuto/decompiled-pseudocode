/*
 * XREFs of ?AERTFree@@YAXPEAX0@Z @ 0x140015B90
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z @ 0x14000F420 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z.c)
 *     ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400157A0 (--_G-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140015934 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140015AA0 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 *     ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x14004FEBC (--3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004FFF0 (--_E-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050070 (--_E-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400500F0 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050170 (--_G-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400501F0 (--_E-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050260 (--_G-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400502D0 (--_E-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x1400551D0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140059EA0 (--_G-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140059F20 (--_G-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140059FA0 (--_E-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005A010 (--_G-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001B8B0 (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 */

void __fastcall AERTFree(void *a1, void *a2)
{
  int v3; // edi
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-29h] BYREF
  __int64 v5; // [rsp+50h] [rbp+7h]
  int v6; // [rsp+58h] [rbp+Fh]
  void *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  __int64 v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  __int64 v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]
  __int64 v13; // [rsp+90h] [rbp+47h]

  if ( g_bSkipRTHeap )
  {
    operator delete(a1);
  }
  else
  {
    v3 = -2147467259;
    if ( a2 )
    {
      if ( a1 )
      {
        v3 = RtlFreeMemoryBlockLookaside(a2, a1);
        if ( (v3 & 0xC0000000) == 0xC0000000
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_c553bd3a27e539e4ab650ec0a4fc27b6_Traceguids, a2);
        }
      }
    }
    if ( g_u32AEWMILogLevel >= 5 )
    {
      memset_0(&EventTrace, 0, 0x40uLL);
      v5 = 0LL;
      v6 = 0;
      v11 = 0LL;
      v12 = 0LL;
      v8 = 0LL;
      v10 = 0LL;
      v9 = 0LL;
      EventTrace.Size = 120;
      v13 = v3;
      EventTrace.UserTime = 0x20000;
      EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
      LOWORD(EventTrace.Version) = 1286;
      v7 = a2;
      TraceEvent(g_hAEWMITraceHandle, &EventTrace);
    }
  }
}
