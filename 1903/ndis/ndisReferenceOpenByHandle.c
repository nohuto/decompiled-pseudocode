/*
 * XREFs of ndisReferenceOpenByHandle @ 0x1C0023DD4
 * Callers:
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C005E400 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisSetReceiveFilter @ 0x1C0060DE8 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C006ADD0 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C006B170 (ndisMDirectOidRequest.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 */

unsigned __int8 __fastcall ndisReferenceOpenByHandle(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // bl
  KIRQL v5; // al
  __int64 v6; // rcx
  KIRQL v7; // r14
  __int64 v8; // rdx

  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      116,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  v6 = *(_QWORD *)ndisGlobalOpenList;
  v7 = v5;
  if ( *(_QWORD *)ndisGlobalOpenList )
  {
    while ( v6 != a1 )
    {
      v6 = *(_QWORD *)(v6 + 384);
      if ( !v6 )
        goto LABEL_9;
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 && *(_DWORD *)(a1 + 228) )
    {
      LOBYTE(v8) = a2;
      ndisMReferenceOpen(a1, v8);
      v4 = 1;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
  }
LABEL_9:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x14u,
      0x75u,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      a2,
      v4);
  return v4;
}
