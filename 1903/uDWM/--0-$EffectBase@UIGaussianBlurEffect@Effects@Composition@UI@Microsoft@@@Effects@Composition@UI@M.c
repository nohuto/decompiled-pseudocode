/*
 * XREFs of ??0?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@Microsoft@@QEAA@XZ @ 0x18003E118
 * Callers:
 *     ??0GaussianBlurEffect@Effects@Composition@UI@Microsoft@@QEAA@XZ @ 0x18003E0AC (--0GaussianBlurEffect@Effects@Composition@UI@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::UI::Composition::Effects::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>(
        _QWORD *a1)
{
  _QWORD *result; // rax

  a1[6] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `IWeakReferenceSource'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>'};
  a1[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffectD2D1Interop'};
  a1[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *a1 = &Microsoft::UI::Composition::Effects::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `IWeakReferenceSource'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>'};
  a1[3] = &Microsoft::UI::Composition::Effects::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffectD2D1Interop'};
  a1[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>'};
  result = a1;
  a1[7] = 0LL;
  return result;
}
