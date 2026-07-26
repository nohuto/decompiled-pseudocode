/*
 * XREFs of ndisIovFindVPortByVPortId @ 0x1C00B1BA0
 * Callers:
 *     ndisOidPostRcvFilterMoveFilter @ 0x1C005F820 (ndisOidPostRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C0060750 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C0060FB8 (ndisSetReceiveFilter.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00B34E0 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00B5080 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPrePDOpenProvider @ 0x1C0122830 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C00B1C18 (ndisIovFindVPortByVPortIdInternal.c)
 */

__int64 __fastcall ndisIovFindVPortByVPortId(__int64 a1, unsigned int a2)
{
  __int64 VPortByVPortIdInternal; // rax
  __int64 v5; // rbx
  KIRQL v6; // r10

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(a1, a2);
  *(_QWORD *)(a1 + 520) = 0LL;
  v5 = VPortByVPortIdInternal;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  return v5;
}
