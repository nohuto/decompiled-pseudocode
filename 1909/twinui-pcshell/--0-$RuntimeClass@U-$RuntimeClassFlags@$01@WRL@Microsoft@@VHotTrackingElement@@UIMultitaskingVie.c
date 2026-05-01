/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1803769F0
 * Callers:
 *     ??0CSwitchItemElement@@QEAA@XZ @ 0x180376B78 (--0CSwitchItemElement@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VHotTrackingElement@@@Details@23@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180376A84 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewG.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x180376AD4 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,HotTrackingElement,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,HotTrackingElement,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>(
        __int64 a1)
{
  CMultitaskingViewElementBase::CMultitaskingViewElementBase((CMultitaskingViewElementBase *)a1);
  *(_QWORD *)a1 = &HotTrackingElement::`vftable';
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<HotTrackingElement>,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<HotTrackingElement>,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>>(a1 + 216);
  *(_DWORD *)(a1 + 244) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,HotTrackingElement,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>::`vftable'{for `Microsoft::WRL::Details::Selector<HotTrackingElement,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<HotTrackingElement>,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>>'};
  *(_QWORD *)(a1 + 216) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,HotTrackingElement,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<HotTrackingElement>,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>>'};
  *(_QWORD *)(a1 + 224) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,HotTrackingElement,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>::`vftable'{for `ISwitchItemElement'};
  *(_QWORD *)(a1 + 232) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,HotTrackingElement,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IGlyphButtonHost>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
