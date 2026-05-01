/*
 * XREFs of ?Uninitialize@CRotationManagerSync@@UEAAXXZ @ 0x180105490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRotationManagerSync::Uninitialize(CRotationManagerSync *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
}
