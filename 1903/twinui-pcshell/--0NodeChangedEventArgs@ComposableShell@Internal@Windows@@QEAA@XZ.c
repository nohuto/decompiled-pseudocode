/*
 * XREFs of ??0NodeChangedEventArgs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x18020C984
 * Callers:
 *     ??$MakeAndInitialize@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@V1234@W4TreeNodeEventType@234@AEAPEAUITreeNode@234@@Details@WRL@Microsoft@@YAJPEAPEAVNodeChangedEventArgs@ComposableShell@Internal@Windows@@$$QEAW4TreeNodeEventType@456@AEAPEAUITreeNode@456@@Z @ 0x18020A2F4 (--$MakeAndInitialize@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@V1234@W4TreeNodeEve.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180022178 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::ComposableShell::NodeChangedEventArgs *__fastcall Windows::Internal::ComposableShell::NodeChangedEventArgs::NodeChangedEventArgs(
        Windows::Internal::ComposableShell::NodeChangedEventArgs *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::ComposableShell::NodeChangedEventArgs *)((char *)this + 8));
  *((_QWORD *)this + 10) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>::`vftable'{for `Windows::Internal::ComposableShell::ITreeNodeEventArgs'};
  *v2 = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::ComposableShell::INodeChangedEventArgs>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::ComposableShell::NodeChangedEventArgs::`vftable'{for `Windows::Internal::ComposableShell::ITreeNodeEventArgs'};
  *v2 = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 8) = &Windows::Internal::ComposableShell::NodeChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::ComposableShell::INodeChangedEventArgs>'};
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
