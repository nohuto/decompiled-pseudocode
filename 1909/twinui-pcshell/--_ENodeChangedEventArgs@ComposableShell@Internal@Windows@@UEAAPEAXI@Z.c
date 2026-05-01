/*
 * XREFs of ??_ENodeChangedEventArgs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x18022D4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VTreeNodeEventArgsBase@ComposableShell@Internal@Windows@@UINodeChangedEventArgs@567@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18022C4B8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VTreeNodeEventArgsBase@C.c)
 */

Windows::Internal::ComposableShell::NodeChangedEventArgs *__fastcall Windows::Internal::ComposableShell::NodeChangedEventArgs::`vector deleting destructor'(
        Windows::Internal::ComposableShell::NodeChangedEventArgs *this,
        char a2)
{
  volatile int *v4; // rdx

  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 11);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>(
    (__int64)this,
    v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
