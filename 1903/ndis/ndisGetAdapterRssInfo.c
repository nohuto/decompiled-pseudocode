/*
 * XREFs of ndisGetAdapterRssInfo @ 0x1C0021168
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     NdisGetRssProcessorInformation @ 0x1C0034510 (NdisGetRssProcessorInformation.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003B48C (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisGetAdapterRssInfo(struct _NDIS_MINIPORT_BLOCK *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v4; // rcx
  unsigned int v6; // r12d
  unsigned int v7; // esi
  __int64 v8; // rbx
  unsigned int v9; // r15d
  NDIS_STATUS RssProcessorInformation; // ebp
  struct _NDIS_RSS_PROCESSOR_INFO *PoolWithTagPriority; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v12; // rdi
  unsigned int v13; // r15d
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rax
  __int64 v16; // rcx
  int v17; // esi
  ULONG_PTR Size; // [rsp+58h] [rbp+10h] BYREF

  *a3 = -1073741823;
  v4 = a2[23];
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 24LL) + 24LL) )
  {
    v6 = *(_DWORD *)(v4 + 8);
    v7 = 144;
    if ( v6 < 0x90 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8 = a2[3];
      *a3 = 0;
      memset((void *)(v8 + 4), 0, 0x8CuLL);
      *(_DWORD *)v8 = 9437568;
      v9 = 144;
      *(_BYTE *)(v8 + 12) = a1->MajorNdisVersion;
      *(_BYTE *)(v8 + 13) = a1->MinorNdisVersion;
      *(_DWORD *)(v8 + 8) = 144;
      *(_DWORD *)(v8 + 16) = 40;
      *(_DWORD *)(v8 + 20) = 20;
      *(_OWORD *)(v8 + 40) = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
      *(_DWORD *)(v8 + 56) = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
      if ( ndisIsRssEnabledForMiniport(a1) )
      {
        *(_DWORD *)(v8 + 24) = 60;
        *(_DWORD *)(v8 + 28) = 44;
        CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        *(_OWORD *)(v8 + 60) = *(_OWORD *)&CombinedNdisRSSParameters->Header.Type;
        *(_OWORD *)(v8 + 76) = *(_OWORD *)&CombinedNdisRSSParameters->IndirectionTableOffset;
        *(_QWORD *)(v8 + 92) = *(_QWORD *)&CombinedNdisRSSParameters->NumberOfProcessorMasks;
        *(_PROCESSOR_NUMBER *)(v8 + 100) = CombinedNdisRSSParameters->DefaultProcessorNumber;
        v9 = a1->CombinedNdisRSSParameters->HashSecretKeySize
           + a1->CombinedNdisRSSParameters->IndirectionTableSize
           + 144;
        *(_DWORD *)(v8 + 8) = v9;
        if ( v6 < v9 )
        {
          *(_DWORD *)(v8 + 76) = 0;
          *(_DWORD *)(v8 + 84) = 0;
        }
        else
        {
          *(_DWORD *)(v8 + 84) = 84;
          memmove(
            (void *)(v8 + 144),
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->HashSecretKeyOffset,
            a1->CombinedNdisRSSParameters->HashSecretKeySize);
          v16 = (unsigned int)a1->CombinedNdisRSSParameters->HashSecretKeySize + 144;
          v17 = a1->CombinedNdisRSSParameters->HashSecretKeySize + 144;
          *(_DWORD *)(v8 + 76) = a1->CombinedNdisRSSParameters->HashSecretKeySize + 84;
          memmove(
            (void *)(v8 + v16),
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->IndirectionTableOffset,
            a1->CombinedNdisRSSParameters->IndirectionTableSize);
          v7 = a1->CombinedNdisRSSParameters->IndirectionTableSize + v17;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 4) |= 0x40u;
      }
      Size = 0LL;
      RssProcessorInformation = NdisGetRssProcessorInformation(a1, 0LL, &Size);
      PoolWithTagPriority = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePoolWithTagPriority(
                                                                 NonPagedPoolNx,
                                                                 Size,
                                                                 0x2020444Eu,
                                                                 LowPoolPriority);
      v12 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        RssProcessorInformation = NdisGetRssProcessorInformation(a1, PoolWithTagPriority, &Size);
        if ( RssProcessorInformation >= 0 )
        {
          *(_DWORD *)(v8 + 32) = 104;
          *(_DWORD *)(v8 + 36) = 40;
          *(_OWORD *)(v8 + 104) = *(_OWORD *)&v12->Header.Type;
          *(_OWORD *)(v8 + 120) = *(_OWORD *)&v12->PreferredNumaNode;
          *(_QWORD *)(v8 + 136) = *(_QWORD *)&v12[1].Header.Type;
          v13 = v12->RssProcessorEntrySize * v12->RssProcessorCount + v9;
          *(_DWORD *)(v8 + 8) = v13;
          if ( v6 < v13 )
          {
            *(_DWORD *)(v8 + 124) = 0;
          }
          else
          {
            *(_DWORD *)(v8 + 124) = v7 - 104;
            memmove(
              (void *)(v8 + v7),
              &v12->Header.Type + v12->RssProcessorArrayOffset,
              v12->RssProcessorEntrySize * v12->RssProcessorCount);
            v7 += v12->RssProcessorEntrySize * v12->RssProcessorCount;
          }
        }
        ExFreePoolWithTag(v12, 0x2020444Eu);
      }
      a2[7] = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)RssProcessorInformation;
}
