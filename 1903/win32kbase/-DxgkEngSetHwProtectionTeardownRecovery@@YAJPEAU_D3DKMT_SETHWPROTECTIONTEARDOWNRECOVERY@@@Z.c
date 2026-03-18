/*
 * XREFs of ?DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z @ 0x1C0122820
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionForceRender @ 0x1C00BA1D0 (DCompositionForceRender.c)
 */

__int64 __fastcall DxgkEngSetHwProtectionTeardownRecovery(struct _D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY *a1)
{
  return DCompositionForceRender(0, 1, !a1->Recovered, 0);
}
