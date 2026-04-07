/*
 * XREFs of ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1800389D0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::UI::Composition::Effects::EffectBase_Microsoft::UI::Composition::Effects::IGaussianBlurEffect_::UsePropertyFactory__lambda_20cc25e9e6e64aaab66070ee3f3626ad___ @ 0x1800389FC (Microsoft--UI--Composition--Effects--EffectBase_Microsoft--UI--Composition--Effects--IGaussianBl.c)
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::GetProperty(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this,
        int a2,
        struct Windows::Foundation::IPropertyValue **a3)
{
  int v4; // [rsp+20h] [rbp-28h] BYREF
  char *v5; // [rsp+28h] [rbp-20h]
  struct Windows::Foundation::IPropertyValue **v6; // [rsp+30h] [rbp-18h]

  v4 = a2;
  v5 = (char *)this - 24;
  v6 = a3;
  return Microsoft::UI::Composition::Effects::EffectBase_Microsoft::UI::Composition::Effects::IGaussianBlurEffect_::UsePropertyFactory__lambda_20cc25e9e6e64aaab66070ee3f3626ad___(&v4);
}
