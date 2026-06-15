/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140008C70
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140007E40 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14000F268 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004F1F4 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004F32C (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004F464 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004F59C (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058614 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@AT.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005874C (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL.c)
 *     privateCreateSpatialCrossProcessEndpoint @ 0x140059040 (privateCreateSpatialCrossProcessEndpoint.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140015704 (--2@YAPEAX_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x1400407BC (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     McTemplateU0pqpqqqqqq @ 0x140041190 (McTemplateU0pqpqqqqqq.c)
 *     WPP_SF_Pq @ 0x140041350 (WPP_SF_Pq.c)
 */

void *__fastcall AERTAllocate(_QWORD *a1, void *a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF

  v4 = (unsigned __int64)a1;
  if ( g_bSkipRTHeap )
    return operator new((size_t)a1);
  v9 = 0LL;
  if ( a2 )
  {
    v5 = RtlAllocateMemoryBlockLookaside(a2, a1, &v9);
    if ( v5 < 0 )
    {
      if ( v5 == -1073741670 )
      {
        v7 = 0x100000LL;
        if ( v4 > 0x100000 )
          v7 = (v4 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
        AERTAddMemoryToHeap(a2, v7);
        if ( (int)RtlAllocateMemoryBlockLookaside(a2, v4, &v9) >= 0 )
          goto LABEL_4;
        a1 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
        {
          goto LABEL_4;
        }
        v8 = 35LL;
      }
      else
      {
        a1 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
        {
          goto LABEL_4;
        }
        v8 = 36LL;
      }
      WPP_SF_Pq(a1[2], v8, a3, v4, a2);
    }
  }
LABEL_4:
  if ( (byte_140087281 & 4) != 0 )
    McTemplateU0pqpqqqqqq((_DWORD)a1, (_DWORD)a2, a3, 6, (char)a2, v4, 0, 0);
  return (void *)v9;
}
