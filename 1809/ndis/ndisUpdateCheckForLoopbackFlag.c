/*
 * XREFs of ndisUpdateCheckForLoopbackFlag @ 0x1C001B314
 * Callers:
 *     ndisPostSetOpenPacketFilter @ 0x1C001AE3C (ndisPostSetOpenPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C001B034 (ndisSetOpenPacketFilter.c)
 *     ndisSetRestorePacketFilter @ 0x1C0048C08 (ndisSetRestorePacketFilter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     XRemoveBindingFromLists @ 0x1C0068090 (XRemoveBindingFromLists.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C0115AC4 (ndisDeQueueOpenOnMiniport.c)
 *     ndisMFinishClose @ 0x1C01168D0 (ndisMFinishClose.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisUpdateCheckForLoopbackFlag(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 400);
  if ( result && *(_QWORD *)(result + 328) || !*(_BYTE *)(a1 + 91) || *(_WORD *)(a1 + 1820) <= 1u )
    *(_DWORD *)(a1 + 120) &= ~0x4000u;
  else
    *(_DWORD *)(a1 + 120) |= 0x4000u;
  return result;
}
