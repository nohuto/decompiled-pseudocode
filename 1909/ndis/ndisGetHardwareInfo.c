/*
 * XREFs of ndisGetHardwareInfo @ 0x1C00952A8
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     NdisGetRssProcessorInformation @ 0x1C0034500 (NdisGetRssProcessorInformation.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003B47C (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisGetHardwareInfo(struct _NDIS_MINIPORT_BLOCK *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  NDIS_STATUS RssProcessorInformation; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // ebp
  __int64 v10; // rbx
  unsigned int v11; // r14d
  _NDIS_INTERRUPT_BLOCK *InterruptEx; // r8
  int v13; // edx
  _QWORD *Generic; // rdx
  unsigned int i; // r9d
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rax
  unsigned int v21; // ebp
  struct _NDIS_RSS_PROCESSOR_INFO *PoolWithTagPriority; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v23; // rsi
  unsigned int v24; // r14d
  ULONG_PTR Size; // [rsp+58h] [rbp+10h] BYREF

  *a3 = -1073741823;
  v5 = a2[23];
  v6 = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL) + 24LL) )
  {
    v8 = *(_DWORD *)(v5 + 8);
    v9 = 1320;
    v10 = a2[3];
    if ( v8 >= 0x528 )
    {
      *a3 = 0;
      memset((void *)(v10 + 4), 0, 0x524uLL);
      *(_DWORD *)v10 = 86508160;
      v11 = 1320;
      *(_BYTE *)(v10 + 12) = a1->MajorNdisVersion;
      *(_BYTE *)(v10 + 13) = a1->MinorNdisVersion;
      *(_WORD *)(v10 + 14) = HIWORD(a1->DriverHandle->DriverVersion);
      *(_WORD *)(v10 + 16) = a1->DriverHandle->DriverVersion;
      InterruptEx = a1->InterruptEx;
      if ( InterruptEx )
      {
        if ( InterruptEx->MsiSupported )
        {
          v11 = 8 * *((_DWORD *)InterruptEx->Generic + 1) + 1320;
          if ( v8 >= v11 )
          {
            v6 = v10 + 1320;
            *(_DWORD *)(v10 + 68) = 1320;
          }
        }
      }
      *(_DWORD *)(v10 + 8) = v11;
      if ( v6 )
        v9 = v11;
      if ( InterruptEx )
      {
        v13 = *(_DWORD *)(v10 + 4);
        *(_OWORD *)(v10 + 32) = *(_OWORD *)&a1->MsiCaps.Header.CapabilityID;
        *(_QWORD *)(v10 + 48) = *(_QWORD *)&a1->MsiCaps.Option64Bit.MaskBits;
        *(_QWORD *)(v10 + 56) = *(_QWORD *)&a1->MsiXCaps.Header.CapabilityID;
        *(_DWORD *)(v10 + 64) = a1->MsiXCaps.PBATable.TableOffset;
        if ( InterruptEx->MsiSupported && (v13 |= 4u, *(_DWORD *)(v10 + 4) = v13, InterruptEx->MessageUsed) )
        {
          *(_DWORD *)(v10 + 28) = *((_DWORD *)InterruptEx->Generic + 1);
          *(_DWORD *)(v10 + 4) = v13 | 8;
          if ( v6 )
          {
            Generic = InterruptEx->Generic;
            for ( i = 0; i < *((_DWORD *)Generic + 1); Generic = InterruptEx->Generic )
            {
              v16 = i++;
              *(_QWORD *)(v6 + 8 * v16) = Generic[6 * v16 + 2];
            }
          }
          if ( a1->MsiXCaps.Header.CapabilityID == 17 )
          {
            v17 = *(_DWORD *)(v10 + 4) | 0x10;
            *(_DWORD *)(v10 + 4) = v17;
            *(_DWORD *)(v10 + 24) = (*(_WORD *)&a1->MsiXCaps.MessageControl & 0x7FF) + 1;
            if ( *(_WORD *)&a1->MsiXCaps.MessageControl < 0 )
              *(_DWORD *)(v10 + 4) = v17 | 0x20;
          }
        }
        else
        {
          *(_DWORD *)(v10 + 4) = v13 | 2;
        }
      }
      else
      {
        v18 = *(_DWORD *)(v10 + 4);
        if ( a1->Interrupt )
          v19 = v18 | 2;
        else
          v19 = v18 | 1;
        *(_DWORD *)(v10 + 4) = v19;
      }
      *(_DWORD *)(v10 + 88) = 120;
      *(_DWORD *)(v10 + 92) = 52;
      *(_OWORD *)(v10 + 120) = *(_OWORD *)&a1->PciDeviceCustomProperties.Header.Type;
      *(_OWORD *)(v10 + 136) = *(_OWORD *)&a1->PciDeviceCustomProperties.MaxPayloadSize;
      *(_OWORD *)(v10 + 152) = *(_OWORD *)&a1->PciDeviceCustomProperties.MaxLinkSpeed;
      *(_DWORD *)(v10 + 168) = a1->PciDeviceCustomProperties.MaxInterruptMessages;
      *(_DWORD *)(v10 + 76) = a1->PciDeviceCustomProperties.PciExpressVersion;
      *(_DWORD *)(v10 + 80) = a1->PciDeviceCustomProperties.InterruptType;
      *(_DWORD *)(v10 + 84) = a1->PciDeviceCustomProperties.MaxInterruptMessages;
      *(_DWORD *)(v10 + 236) = a1->PciDeviceSriovSupport;
      *(_BYTE *)(v10 + 240) = a1->S0WakeupSupported;
      *(_BYTE *)(v10 + 241) = (a1->Flags & 0x10) != 0;
      *(_DWORD *)(v10 + 96) = 172;
      *(_DWORD *)(v10 + 100) = 20;
      *(_OWORD *)(v10 + 172) = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
      *(_DWORD *)(v10 + 188) = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
      if ( ndisIsRssEnabledForMiniport(a1) )
      {
        *(_DWORD *)(v10 + 104) = 192;
        *(_DWORD *)(v10 + 108) = 44;
        CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        *(_OWORD *)(v10 + 192) = *(_OWORD *)&CombinedNdisRSSParameters->Header.Type;
        *(_OWORD *)(v10 + 208) = *(_OWORD *)&CombinedNdisRSSParameters->IndirectionTableOffset;
        *(_QWORD *)(v10 + 224) = *(_QWORD *)&CombinedNdisRSSParameters->NumberOfProcessorMasks;
        *(_PROCESSOR_NUMBER *)(v10 + 232) = CombinedNdisRSSParameters->DefaultProcessorNumber;
        v11 += a1->CombinedNdisRSSParameters->HashSecretKeySize + a1->CombinedNdisRSSParameters->IndirectionTableSize;
        *(_DWORD *)(v10 + 8) = v11;
        if ( v8 < v11 )
        {
          *(_DWORD *)(v10 + 208) = 0;
          *(_DWORD *)(v10 + 216) = 0;
        }
        else
        {
          *(_DWORD *)(v10 + 216) = v9 - 192;
          memmove(
            (void *)(v10 + v9),
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->HashSecretKeyOffset,
            a1->CombinedNdisRSSParameters->HashSecretKeySize);
          v21 = a1->CombinedNdisRSSParameters->HashSecretKeySize + v9;
          *(_DWORD *)(v10 + 208) = v21 - 192;
          memmove(
            (void *)(v10 + v21),
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->IndirectionTableOffset,
            a1->CombinedNdisRSSParameters->IndirectionTableSize);
          v9 = a1->CombinedNdisRSSParameters->IndirectionTableSize + v21;
        }
      }
      else
      {
        *(_DWORD *)(v10 + 4) |= 0x40u;
      }
      Size = 0LL;
      RssProcessorInformation = NdisGetRssProcessorInformation(a1, 0LL, &Size);
      PoolWithTagPriority = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePoolWithTagPriority(
                                                                 NonPagedPoolNx,
                                                                 Size,
                                                                 0x2020444Eu,
                                                                 LowPoolPriority);
      v23 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        RssProcessorInformation = NdisGetRssProcessorInformation(a1, PoolWithTagPriority, &Size);
        if ( RssProcessorInformation >= 0 )
        {
          *(_DWORD *)(v10 + 112) = 248;
          *(_DWORD *)(v10 + 116) = 40;
          *(_OWORD *)(v10 + 248) = *(_OWORD *)&v23->Header.Type;
          *(_OWORD *)(v10 + 264) = *(_OWORD *)&v23->PreferredNumaNode;
          *(_QWORD *)(v10 + 280) = *(_QWORD *)&v23[1].Header.Type;
          v24 = v23->RssProcessorCount * v23->RssProcessorEntrySize + v11;
          *(_DWORD *)(v10 + 8) = v24;
          if ( v8 < v24 )
          {
            *(_DWORD *)(v10 + 268) = 0;
          }
          else
          {
            *(_DWORD *)(v10 + 268) = v9 - 248;
            memmove(
              (void *)(v10 + v9),
              &v23->Header.Type + v23->RssProcessorArrayOffset,
              v23->RssProcessorCount * v23->RssProcessorEntrySize);
            v9 += v23->RssProcessorCount * v23->RssProcessorEntrySize;
          }
        }
        ExFreePoolWithTag(v23, 0x2020444Eu);
      }
      a2[7] = v9;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)RssProcessorInformation;
}
