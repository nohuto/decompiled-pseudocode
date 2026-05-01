/*
 * XREFs of _CSplashScreen::OnActivationEnd_::_1_::dtor$1 @ 0x180152D27
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSplashScreen::OnActivationEnd_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 64));
}
