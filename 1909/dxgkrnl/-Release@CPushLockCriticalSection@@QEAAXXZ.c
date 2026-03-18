/*
 * XREFs of ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C0013400
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C00130AC (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0013B34 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C0013E00 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x1C001B160 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLockCriticalSection::Release(CPushLockCriticalSection *this)
{
  if ( *((_BYTE *)this + 8) )
    ExReleasePushLockExclusiveEx(this, 0LL);
  else
    ExReleasePushLockSharedEx(this, 0LL);
}
