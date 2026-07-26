/*
 * XREFs of ndisReferenceOpenByHandle @ 0x1C001BC04
 * Callers:
 *     ndisAllocateReceiveQueue @ 0x1C003AA90 (ndisAllocateReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003CA90 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C0045430 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C0045790 (ndisMDirectOidRequest.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001BD00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qDL @ 0x1C00616A0 (WPP_SF_qDL.c)
 */

unsigned __int8 __fastcall ndisReferenceOpenByHandle(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // bl
  KIRQL v5; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rcx
  KIRQL v7; // r14
  __int64 v8; // rdx

  v4 = 0;
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(118LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v7 = v5;
  if ( ndisGlobalOpenList )
  {
    while ( NextGlobalOpen != a1 )
    {
      NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
      if ( !NextGlobalOpen )
        goto LABEL_9;
    }
    KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
    if ( (a1->OpenFlags & 0x8000) == 0 && a1->References )
    {
      LOBYTE(v8) = a2;
      ndisMReferenceOpen(a1, v8);
      v4 = 1;
    }
    KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
  }
LABEL_9:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v7);
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qDL(119LL, v4, a1, a2, v4);
  return v4;
}
