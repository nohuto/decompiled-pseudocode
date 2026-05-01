/*
 * XREFs of ?Uninitialize@CRotationManagerSync@@UEAAXXZ @ 0x18012B190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRotationManagerSync::Uninitialize(CRotationManagerSync *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
}
