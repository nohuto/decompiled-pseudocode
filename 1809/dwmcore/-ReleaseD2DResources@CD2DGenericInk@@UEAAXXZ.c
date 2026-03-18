/*
 * XREFs of ?ReleaseD2DResources@CD2DGenericInk@@UEAAXXZ @ 0x1802063D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DGenericInk::ReleaseD2DResources(CD2DGenericInk *this)
{
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 13);
}
