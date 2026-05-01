/*
 * XREFs of ??0AccessibleElement@@QEAA@XZ @ 0x180314980
 * Callers:
 *     ??$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAVAccessibleElement@@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Z @ 0x180314694 (--$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4Accessible.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VAccessibleElementBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180314860 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VAccessibleElementBase@@@WRL@Microsoft.c)
 */

AccessibleElement *__fastcall AccessibleElement::AccessibleElement(AccessibleElement *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IRawElementProviderSimple2,IRawElementProviderSimple,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::`vftable'{for `IRawElementProviderFragmentRoot'};
  *((_QWORD *)this + 3) = &AccessibleElement::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>'};
  *((_QWORD *)this + 4) = &AccessibleElement::`vftable'{for `ISelectionProvider'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>'};
  *((_QWORD *)this + 6) = &AccessibleElement::`vftable'{for `IScrollProvider'};
  *((_QWORD *)this + 7) = &AccessibleElement::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollItemProvider>'};
  *((_QWORD *)this + 9) = &AccessibleElement::`vftable'{for `IGridProvider'};
  *((_QWORD *)this + 10) = &AccessibleElement::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IGridItemProvider>'};
  return this;
}
