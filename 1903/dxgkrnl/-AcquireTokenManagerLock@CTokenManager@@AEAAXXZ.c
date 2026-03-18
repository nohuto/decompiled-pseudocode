/*
 * XREFs of ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0012E00
 * Callers:
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0012870 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0012D7C (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C00130D0 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C0013660 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C001CA50 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x1C0059D80 (-ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ.c)
 *     ?ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C0059F10 (-ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ.c)
 *     ?GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z @ 0x1C0059F90 (-GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z.c)
 *     ?GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C005A060 (-GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 *     ?LockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x1C005A210 (-LockIfNotTokenThread@CTokenManager@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::AcquireTokenManagerLock(CTokenManager *this)
{
  ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
  *((_QWORD *)this + 12) = KeGetCurrentThread();
}
