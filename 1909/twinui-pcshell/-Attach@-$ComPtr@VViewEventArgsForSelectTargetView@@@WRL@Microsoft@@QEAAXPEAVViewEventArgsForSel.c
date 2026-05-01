/*
 * XREFs of ?Attach@?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSelectTargetView@@@Z @ 0x18001A708
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Z @ 0x18001A63C (--$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001D220 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEvent.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::Attach(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::Release();
  *a1 = a2;
  return result;
}
