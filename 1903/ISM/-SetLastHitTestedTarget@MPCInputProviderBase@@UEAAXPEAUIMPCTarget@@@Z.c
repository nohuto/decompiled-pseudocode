/*
 * XREFs of ?SetLastHitTestedTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z @ 0x1800921B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::SetLastHitTestedTarget(MPCInputProviderBase *this, struct IMPCTarget *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 573, (__int64)a2);
}
