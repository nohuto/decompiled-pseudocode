/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802F75C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@Details@WRL@Microsoft@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A87B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VHotTracki.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@Details@WRL@Microsoft@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A87C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A87C0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@Details@WRL@Microsoft@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A87D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A87D0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,HotTrackingElement,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,HotTrackingElement,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>>(
           a1,
           a2,
           a3);
}
