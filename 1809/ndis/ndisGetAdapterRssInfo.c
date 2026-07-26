/*
 * XREFs of ndisGetAdapterRssInfo @ 0x1C00B99DC
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 * Callees:
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001F2A4 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisGetRssProcessorInformation @ 0x1C0021390 (NdisGetRssProcessorInformation.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall ndisGetAdapterRssInfo(struct _NDIS_MINIPORT_BLOCK *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v4; // rcx
  unsigned int v6; // r12d
  unsigned int v7; // esi
  _DWORD *v8; // rbx
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
      v8 = (_DWORD *)a2[3];
      *a3 = 0;
      memset(v8, 0, 0x90uLL);
      *v8 = 9437568;
      v9 = 144;
      *((_BYTE *)v8 + 12) = a1->MajorNdisVersion;
      *((_BYTE *)v8 + 13) = a1->MinorNdisVersion;
      v8[2] = 144;
      v8[4] = 40;
      v8[5] = 20;
      *(_OWORD *)(v8 + 10) = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
      v8[14] = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
      if ( ndisIsRssEnabledForMiniport(a1) )
      {
        v8[6] = 60;
        v8[7] = 44;
        CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        *(_OWORD *)(v8 + 15) = *(_OWORD *)&CombinedNdisRSSParameters->Header.Type;
        *(_OWORD *)(v8 + 19) = *(_OWORD *)&CombinedNdisRSSParameters->IndirectionTableOffset;
        *(_QWORD *)(v8 + 23) = *(_QWORD *)&CombinedNdisRSSParameters->NumberOfProcessorMasks;
        v8[25] = CombinedNdisRSSParameters->DefaultProcessorNumber;
        v9 = a1->CombinedNdisRSSParameters->HashSecretKeySize
           + a1->CombinedNdisRSSParameters->IndirectionTableSize
           + 144;
        v8[2] = v9;
        if ( v6 < v9 )
        {
          v8[19] = 0;
          v8[21] = 0;
        }
        else
        {
          v8[21] = 84;
          memmove(
            v8 + 36,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->HashSecretKeyOffset,
            a1->CombinedNdisRSSParameters->HashSecretKeySize);
          v16 = (unsigned int)a1->CombinedNdisRSSParameters->HashSecretKeySize + 144;
          v17 = a1->CombinedNdisRSSParameters->HashSecretKeySize + 144;
          v8[19] = a1->CombinedNdisRSSParameters->HashSecretKeySize + 84;
          memmove(
            (char *)v8 + v16,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->IndirectionTableOffset,
            a1->CombinedNdisRSSParameters->IndirectionTableSize);
          v7 = a1->CombinedNdisRSSParameters->IndirectionTableSize + v17;
        }
      }
      else
      {
        v8[1] |= 0x40u;
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
          v8[8] = 104;
          v8[9] = 40;
          *(_OWORD *)(v8 + 26) = *(_OWORD *)&v12->Header.Type;
          *(_OWORD *)(v8 + 30) = *(_OWORD *)&v12->PreferredNumaNode;
          *((_QWORD *)v8 + 17) = *(_QWORD *)&v12[1].Header.Type;
          v13 = v12->RssProcessorEntrySize * v12->RssProcessorCount + v9;
          v8[2] = v13;
          if ( v6 < v13 )
          {
            v8[31] = 0;
          }
          else
          {
            v8[31] = v7 - 104;
            memmove(
              (char *)v8 + v7,
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
