/*
 * XREFs of ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C0006AC8
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0006668 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ReferenceAdapter@CAdapterCollection@@QEAAJU_LUID@@PEAPEAVCAdapter@@@Z @ 0x1C0006A14 (-ReferenceAdapter@CAdapterCollection@@QEAAJU_LUID@@PEAPEAVCAdapter@@@Z.c)
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0017AE4 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x1C0019DA0 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C001AB60 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLockCriticalSection::Release(CPushLockCriticalSection *this)
{
  if ( *((_BYTE *)this + 8) )
    ExReleasePushLockExclusiveEx(this, 0LL);
  else
    ExReleasePushLockSharedEx();
}
