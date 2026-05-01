/*
 * XREFs of ??0SwitchItemThumbnailElement@@QEAA@XZ @ 0x18030194C
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x180301630 (--$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMe.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063254 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$CloakedIid@UIConfigureWindow.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CShrinkButtonElement@@QEAA@XZ @ 0x1802FD968 (--0CShrinkButtonElement@@QEAA@XZ.c)
 */

SwitchItemThumbnailElement *__fastcall SwitchItemThumbnailElement::SwitchItemThumbnailElement(
        SwitchItemThumbnailElement *this)
{
  SwitchItemThumbnailElement *result; // rax

  CShrinkButtonElement::CShrinkButtonElement(this);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>((__int64)this + 272);
  *((_DWORD *)this + 73) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::`vftable';
  *((_QWORD *)this + 34) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::`vftable'{for `IMultitaskingViewDragSource'};
  *((_QWORD *)this + 35) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISwitchItemThumbnailElement>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SwitchItemThumbnailElement::`vftable';
  *((_QWORD *)this + 34) = &SwitchItemThumbnailElement::`vftable'{for `IMultitaskingViewDragSource'};
  *((_QWORD *)this + 35) = &SwitchItemThumbnailElement::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISwitchItemThumbnailElement>'};
  result = this;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_DWORD *)this + 154) = 0;
  return result;
}
