/*
 * XREFs of ndisRemoveOpenFromGlobalList @ 0x1C006439C
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00EC300 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

char __fastcall ndisRemoveOpenFromGlobalList(__int64 a1)
{
  char v2; // di
  KIRQL v3; // dl
  struct _NDIS_OPEN_BLOCK **p_NextGlobalOpen; // rcx
  struct _NDIS_OPEN_BLOCK *i; // rax

  v2 = 0;
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x78u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  p_NextGlobalOpen = &ndisGlobalOpenList;
  for ( i = ndisGlobalOpenList; i; i = i->NextGlobalOpen )
  {
    if ( i == (struct _NDIS_OPEN_BLOCK *)a1 )
    {
      v2 = 1;
      *p_NextGlobalOpen = *(struct _NDIS_OPEN_BLOCK **)(a1 + 384);
      break;
    }
    p_NextGlobalOpen = &i->NextGlobalOpen;
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v3);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x79u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  return v2;
}
