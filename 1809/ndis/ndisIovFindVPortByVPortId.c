/*
 * XREFs of ndisIovFindVPortByVPortId @ 0x1C0070024
 * Callers:
 *     ndisOidPostRcvFilterMoveFilter @ 0x1C003B980 (ndisOidPostRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003C460 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C003CA90 (ndisSetReceiveFilter.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00F9C80 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00FAB60 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPrePDOpenProvider @ 0x1C01024A0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C00700B0 (ndisIovFindVPortByVPortIdInternal.c)
 */

__int64 __fastcall ndisIovFindVPortByVPortId(__int64 a1, unsigned int a2)
{
  __int64 VPortByVPortIdInternal; // rax
  __int64 v5; // rbx
  KIRQL v6; // r10

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 2888066;
  VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(a1, a2);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  v5 = VPortByVPortIdInternal;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  return v5;
}
