/*
 * XREFs of ?Attach@?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlAltTabViewHost@@@Z @ 0x1802F7C5C
 * Callers:
 *     ??$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802F5FDC (--$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802F9380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$C_ea_1802F9380.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlAltTabViewHost>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAltTabViewHost>,IAltTabViewHostInternal>::Release(v4);
  *a1 = a2;
  return result;
}
