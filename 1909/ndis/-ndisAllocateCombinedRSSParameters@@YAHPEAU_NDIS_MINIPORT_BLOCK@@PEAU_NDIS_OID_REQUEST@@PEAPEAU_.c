/*
 * XREFs of ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C00C46B8
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C5EDC (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6348 (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6750 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z @ 0x1C00C4900 (-ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00C4D20 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00C6AB0 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisAllocateCombinedRSSParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_VPORT_BLOCK **a3,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a4,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a5,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a6)
{
  struct _NDIS_VPORT_BLOCK *VPortBlockForRequest; // rsi
  const struct _NDIS_OID_REQUEST *v10; // r11
  unsigned int v11; // ebx
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *PoolWithTag; // rax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rdi
  unsigned __int64 v14; // rcx
  _PROCESSOR_NUMBER DefaultProcessorNumber; // ecx
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *v16; // rax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *RssParametersBuffer; // rdi
  unsigned __int64 v18; // rcx
  __int64 IndirectionTableOffset; // rcx

  VPortBlockForRequest = ndisGetVPortBlockForRequest(a1, a2);
  v11 = 0;
  if ( ndisShouldCacheRSSv2ParametersInMiniport(v10) )
  {
    if ( !a1->RssParametersBuffer )
    {
      PoolWithTag = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)ExAllocatePoolWithTag(
                                                             NonPagedPoolNxCacheAligned,
                                                             0x728uLL,
                                                             0x7372444Eu);
      a1->RssParametersBuffer = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, sizeof(_NDIS_MINIPORT_RSS_PARAMETERS_CACHE));
    }
    CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
    if ( !CombinedNdisRSSParameters )
    {
      CombinedNdisRSSParameters = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer;
      ndisCreateRssV1Parameters(CombinedNdisRSSParameters, 1u, 1u);
      CombinedNdisRSSParameters->Flags = 16;
      if ( VPortBlockForRequest )
      {
        _BitScanForward64(&v14, VPortBlockForRequest->VPortParams.ProcessorAffinity.Mask);
        *(_WORD *)&CombinedNdisRSSParameters->DefaultProcessorNumber.Number = (unsigned __int8)v14;
        CombinedNdisRSSParameters->DefaultProcessorNumber.Group = VPortBlockForRequest->VPortParams.ProcessorAffinity.Group;
        DefaultProcessorNumber = CombinedNdisRSSParameters->DefaultProcessorNumber;
      }
      else
      {
        DefaultProcessorNumber = a1->RssBaseProcessor;
        CombinedNdisRSSParameters->DefaultProcessorNumber = DefaultProcessorNumber;
      }
      *(_PROCESSOR_NUMBER *)((char *)&CombinedNdisRSSParameters->Header
                           + CombinedNdisRSSParameters->IndirectionTableOffset) = DefaultProcessorNumber;
      a1->CombinedNdisRSSParameters = CombinedNdisRSSParameters;
    }
    if ( a4 )
      *a4 = CombinedNdisRSSParameters;
    if ( a5 )
      *a5 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer;
    if ( a6 )
      *a6 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer->Oid;
  }
  else
  {
    if ( !VPortBlockForRequest->RssParametersBuffer )
    {
      v16 = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)ExAllocatePoolWithTag(
                                                     NonPagedPoolNxCacheAligned,
                                                     0x728uLL,
                                                     0x7372444Eu);
      VPortBlockForRequest->RssParametersBuffer = v16;
      if ( !v16 )
        return (unsigned int)-1073741670;
      memset(v16, 0, sizeof(_NDIS_MINIPORT_RSS_PARAMETERS_CACHE));
    }
    RssParametersBuffer = VPortBlockForRequest->CombinedNdisRSSParameters;
    if ( !RssParametersBuffer )
    {
      RssParametersBuffer = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)VPortBlockForRequest->RssParametersBuffer;
      ndisCreateRssV1Parameters(RssParametersBuffer, 1u, 1u);
      RssParametersBuffer->Flags = 16;
      _BitScanForward64(&v18, VPortBlockForRequest->VPortParams.ProcessorAffinity.Mask);
      *(_WORD *)&RssParametersBuffer->DefaultProcessorNumber.Number = (unsigned __int8)v18;
      IndirectionTableOffset = RssParametersBuffer->IndirectionTableOffset;
      RssParametersBuffer->DefaultProcessorNumber.Group = VPortBlockForRequest->VPortParams.ProcessorAffinity.Group;
      *(_NDIS_OBJECT_HEADER *)((char *)&RssParametersBuffer->Header + IndirectionTableOffset) = (_NDIS_OBJECT_HEADER)RssParametersBuffer->DefaultProcessorNumber;
      VPortBlockForRequest->CombinedNdisRSSParameters = RssParametersBuffer;
    }
    if ( a4 )
      *a4 = RssParametersBuffer;
    if ( a5 )
      *a5 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)VPortBlockForRequest->RssParametersBuffer;
    if ( a6 )
      *a6 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)VPortBlockForRequest->RssParametersBuffer->Oid;
  }
  if ( a3 )
    *a3 = VPortBlockForRequest;
  return v11;
}
