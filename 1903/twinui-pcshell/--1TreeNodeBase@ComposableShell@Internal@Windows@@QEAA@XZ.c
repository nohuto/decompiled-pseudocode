/*
 * XREFs of ??1TreeNodeBase@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x18020D3B4
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18020D17C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holograph.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180219F90 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostI_ea_180219F90.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802125E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_1802125E0.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180215094 (-_Erase@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComposableShell::TreeNodeBase::~TreeNodeBase(
        Windows::Internal::ComposableShell::TreeNodeBase *this)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx

  *(_QWORD *)this = &Windows::Internal::ComposableShell::TreeNodeBase::`vftable';
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    *((_QWORD *)this + 8) = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v3 = (char *)this + 40;
  v4 = *((_QWORD *)this + 5);
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::_Erase(
    (char *)this + 40,
    *(_QWORD *)(v4 + 8));
  *(_QWORD *)(*(_QWORD *)v3 + 8LL) = v4;
  **(_QWORD **)v3 = v4;
  *(_QWORD *)(*(_QWORD *)v3 + 16LL) = v4;
  *((_QWORD *)this + 6) = 0LL;
  std::_Deallocate<16,0>(*((void **)this + 5), (const struct std::nothrow_t *)0x30);
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release(v5);
}
