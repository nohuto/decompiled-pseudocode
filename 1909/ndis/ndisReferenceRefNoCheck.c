/*
 * XREFs of ndisReferenceRefNoCheck @ 0x1C00C7DFC
 * Callers:
 *     NdisFIndicateStatus @ 0x1C001B7A0 (NdisFIndicateStatus.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C008E5F0 (ndisFDirectOidRequestCompleteInternal.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 */

void __fastcall ndisReferenceRefNoCheck(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  KIRQL v4; // al
  struct _NDIS_REFCOUNT_BLOCK *v5; // rcx
  KIRQL v6; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = (struct _NDIS_REFCOUNT_BLOCK *)SpinLock[2];
  ++*((_WORD *)SpinLock + 4);
  v6 = v4;
  NdisReferenceWithTag(v5, a2);
  KeReleaseSpinLock(SpinLock, v6);
}
