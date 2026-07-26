/*
 * XREFs of ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0036738
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0023C4C (ndisIfReadNetworkGuidFromKey.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00FC168 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368BC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 */

struct _GUID *__fastcall ndisIfGetDefaultNetworkGuid(struct _GUID *__return_ptr retstr)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  KIRQL v3; // r8
  struct _GUID NetworkGuid; // xmm6

  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(1u);
  if ( CompartmentBlock )
  {
    NetworkGuid = CompartmentBlock->LoopbackNetwork->NetworkGuid;
    KeReleaseSpinLock(&ndisIfListLock, v3);
    *retstr = NetworkGuid;
  }
  else
  {
    KeReleaseSpinLock(&ndisIfListLock, v3);
    *retstr = ndisDefaultNetworkGuid;
  }
  return retstr;
}
