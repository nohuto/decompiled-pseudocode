/*
 * XREFs of NdisGetRssProcessorInformation @ 0x1C0034500
 * Callers:
 *     ndisGetAdapterRssInfo @ 0x1C0021168 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00952A8 (ndisGetHardwareInfo.c)
 * Callees:
 *     ndisCalculateRssProcessorCount @ 0x1C003460C (ndisCalculateRssProcessorCount.c)
 *     ndisPopulateRssProcessorSet @ 0x1C00346B0 (ndisPopulateRssProcessorSet.c)
 */

NDIS_STATUS __stdcall NdisGetRssProcessorInformation(
        NDIS_HANDLE NdisHandle,
        PNDIS_RSS_PROCESSOR_INFO RssProcessorInfo,
        PSIZE_T Size)
{
  NDIS_STATUS v3; // edi
  NDIS_HANDLE v6; // rbx
  ULONG_PTR v7; // rbp
  ULONG v8; // ecx
  NDIS_STATUS result; // eax

  v3 = 0;
  v6 = NdisHandle;
  v7 = 0LL;
  if ( *(_BYTE *)NdisHandle != 17 )
  {
    if ( *(_BYTE *)NdisHandle != 18 )
    {
      v3 = -1073741811;
      goto LABEL_5;
    }
    v6 = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
  }
  v7 = 8LL * (unsigned int)ndisCalculateRssProcessorCount(v6) + 40;
  if ( *Size < v7 )
  {
    v3 = -1073676266;
  }
  else
  {
    RssProcessorInfo->Header = (NDIS_OBJECT_HEADER)2622129;
    RssProcessorInfo->PreferredNumaNode = *((_WORD *)v6 + 2196);
    RssProcessorInfo->RssBaseProcessor = (PROCESSOR_NUMBER)*((_DWORD *)v6 + 1095);
    RssProcessorInfo[1].Header = (NDIS_OBJECT_HEADER)*((_DWORD *)v6 + 1096);
    RssProcessorInfo[1].Flags = *((_DWORD *)v6 + 1097);
    v8 = *((_DWORD *)v6 + 1094);
    if ( !v8 )
    {
      if ( *((_DWORD *)v6 + 380) == 1 )
      {
        if ( *((_BYTE *)v6 + 1992) )
          v8 = *((_QWORD *)v6 + 285) < 0x2540BE400uLL ? 8 : 16;
        else
          v8 = 4;
      }
      else
      {
        v8 = 16;
      }
    }
    RssProcessorInfo->MaxNumRssProcessors = v8;
    ndisPopulateRssProcessorSet(v6, RssProcessorInfo);
  }
LABEL_5:
  result = v3;
  *Size = v7;
  return result;
}
