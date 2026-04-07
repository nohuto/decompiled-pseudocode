/*
 * XREFs of ?get_BorderMode@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAW4EffectBorderMode@2345@@Z @ 0x18003C6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::get_BorderMode(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this,
        enum Microsoft::UI::Composition::Effects::EffectBorderMode *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 12);
  return 0LL;
}
