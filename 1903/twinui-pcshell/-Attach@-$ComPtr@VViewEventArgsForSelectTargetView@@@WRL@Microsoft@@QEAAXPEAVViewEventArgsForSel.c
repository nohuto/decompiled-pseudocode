/*
 * XREFs of ?Attach@?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSelectTargetView@@@Z @ 0x18000E2D8
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@PEAUIPropertySet@Collections@Foundation@Windows@@H@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@$$QEAH@Z @ 0x18000E21C (--$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@PEAUIPropertySet@Collections@Foundati.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Z @ 0x180266F4C (--$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800349D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800349D0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::Attach(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release();
  *a1 = a2;
  return result;
}
