/*
 * XREFs of ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0017504
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     ndisEnumerateFilterInstances @ 0x1C00BEC68 (ndisEnumerateFilterInstances.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00BF3E8 (ndisIfQueryBindingMiniportIfIndex.c)
 */

char __fastcall ndisPostProcessRestartParametersAfterFilters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  unsigned int m_numElements; // ecx
  unsigned int MtuSize; // eax
  KIRQL v7; // bp
  unsigned int SupportedOidListLength; // r8d
  SIZE_T v9; // rdx
  unsigned int *v10; // rcx
  unsigned int *SupportedOidList; // rcx
  char v12; // [rsp+58h] [rbp+10h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  ndisEnumerateFilterInstances(a1, &a2->FilterInstanceBuffer);
  m_numElements = a2->FilterInstanceBuffer.m_numElements;
  if ( m_numElements )
  {
    a2->ProtocolParameters.FilterModuleNameBuffer = a2->FilterInstanceBuffer._p;
    a2->ProtocolParameters.FilterModuleNameBufferLength = m_numElements;
  }
  ndisIfQueryBindingMiniportIfIndex((_DWORD)a1, (_DWORD)a2 + 168, (_DWORD)a2 + 176, (unsigned int)&v12, (__int64)&v13);
  if ( a2->Attributes.Oid )
  {
    a2->General.MacOptions |= a2->MiniportMacOptionsToPreserve;
    a1->TopFilterRestartAttributes.AccessType = a2->General.AccessType;
    a1->TopFilterRestartAttributes.ConnectionType = a2->General.ConnectionType;
    a1->TopFilterRestartAttributes.ContextBackFillSize = a2->General.ContextBackFillSize;
    a1->TopFilterRestartAttributes.DataBackFillSize = a2->General.DataBackFillSize;
    a1->TopFilterRestartAttributes.Header = a2->General.Header;
    a1->TopFilterRestartAttributes.LookaheadSize = a2->General.LookaheadSize;
    a1->TopFilterRestartAttributes.MacOptions = a2->General.MacOptions;
    a1->TopFilterRestartAttributes.MaxMulticastListSize = a2->General.MaxMulticastListSize;
    MtuSize = a2->General.MtuSize;
    a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
    a1->TopFilterRestartAttributes.MtuSize = MtuSize;
    *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = *(_OWORD *)&a2->RssCaps.Header.Type;
    *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = *(_DWORD *)&a2->RssCaps.NumberOfIndirectionTableEntries;
    a1->TopFilterRestartAttributes.SupportedPacketFilters = a2->General.SupportedPacketFilters;
    a1->TopFilterRestartAttributes.SupportedStatistics = a2->General.SupportedStatistics;
    a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = a2->General.MaxXmitLinkSpeed;
    a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = a2->General.MaxRcvLinkSpeed;
    v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    SupportedOidListLength = a1->TopFilterRestartAttributes.SupportedOidListLength;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 3868516;
    v9 = a2->General.SupportedOidListLength;
    if ( (_DWORD)v9 != SupportedOidListLength )
    {
      SupportedOidList = a1->TopFilterRestartAttributes.SupportedOidList;
      if ( SupportedOidList )
      {
        ExFreePoolWithTag(SupportedOidList, 0);
        a1->TopFilterRestartAttributes.SupportedOidListLength = 0;
        v9 = a2->General.SupportedOidListLength;
        SupportedOidListLength = 0;
      }
    }
    if ( (_DWORD)v9 && !SupportedOidListLength )
      a1->TopFilterRestartAttributes.SupportedOidList = (unsigned int *)ExAllocatePoolWithTag(
                                                                          NonPagedPoolNx,
                                                                          v9,
                                                                          0x6D61444Eu);
    v10 = a1->TopFilterRestartAttributes.SupportedOidList;
    if ( v10 )
    {
      memmove(v10, a2->General.SupportedOidList, a2->General.SupportedOidListLength);
      a1->TopFilterRestartAttributes.SupportedOidListLength = a2->General.SupportedOidListLength;
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v7);
  }
  return 1;
}
