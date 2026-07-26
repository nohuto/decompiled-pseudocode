/*
 * XREFs of ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0026FA4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     memmove @ 0x1C0041100 (memmove.c)
 */

void __fastcall ndisPostProcessRestartParametersAfterMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  unsigned int v4; // edx
  __int64 MediaType; // rcx
  unsigned int LookaheadSize; // eax
  KIRQL v7; // bp
  unsigned int SupportedOidListLength; // r8d
  SIZE_T v9; // rdx
  unsigned int *v10; // rcx
  unsigned int *SupportedOidList; // rcx

  if ( (a1->DeviceFlags & 1) != 0 )
    a2->General.SupportedPacketFilters |= 0x20u;
  if ( a2->Attributes.Oid )
  {
    a1->RecvScaleCapabilities = a2->RssCaps;
    v4 = a2->General.MacOptions | a2->MiniportMacOptionsToPreserve;
    a2->General.MacOptions = v4;
    a1->MacOptions = v4;
    MediaType = a1->MediaType;
    if ( (_DWORD)MediaType )
    {
      if ( (_DWORD)MediaType == 3 )
      {
        a1->MiniportMaximumLookahead = 512;
LABEL_8:
        if ( ((unsigned int)MediaType <= 0x13 && ndisMediaTypeCl[MediaType] || (_DWORD)MediaType == 3)
          && (v4 & 0x80000001) == 0x80000001 )
        {
          a1->MiniportMaximumLookahead = 512;
        }
        if ( !(_DWORD)MediaType )
          a1->MaximumLongAddresses = a2->General.MaxMulticastListSize;
        v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        SupportedOidListLength = a1->SupportedOidListLength;
        a1->MiniportThread = KeGetCurrentThread();
        v9 = a2->General.SupportedOidListLength;
        if ( (_DWORD)v9 != SupportedOidListLength )
        {
          SupportedOidList = a1->SupportedOidList;
          if ( SupportedOidList )
          {
            ExFreePoolWithTag(SupportedOidList, 0);
            a1->SupportedOidListLength = 0;
            v9 = a2->General.SupportedOidListLength;
            SupportedOidListLength = 0;
          }
        }
        if ( (_DWORD)v9 && !SupportedOidListLength )
          a1->SupportedOidList = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x6D61444Eu);
        v10 = a1->SupportedOidList;
        if ( v10 )
        {
          memmove(v10, a2->General.SupportedOidList, a2->General.SupportedOidListLength);
          a1->SupportedOidListLength = a2->General.SupportedOidListLength;
        }
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v7);
        a1->IfBlock->AccessType = a2->General.AccessType;
        a1->IfBlock->ConnectionType = a2->General.ConnectionType;
        a1->IfBlock->ifMtu = a2->General.MtuSize;
        return;
      }
      if ( (_DWORD)MediaType == 4
        || (int)MediaType > 8
        && ((int)MediaType <= 10 || (int)MediaType > 14 && ((int)MediaType <= 16 || (unsigned int)(MediaType - 18) <= 1)) )
      {
        a1->MiniportMaximumLookahead = a2->General.LookaheadSize;
      }
      if ( (int)MediaType < 20 )
        goto LABEL_8;
      LookaheadSize = a2->General.LookaheadSize;
    }
    else
    {
      LookaheadSize = a2->General.LookaheadSize;
      if ( LookaheadSize > 0x200 )
        LookaheadSize = 512;
    }
    a1->MiniportMaximumLookahead = LookaheadSize;
    goto LABEL_8;
  }
}
