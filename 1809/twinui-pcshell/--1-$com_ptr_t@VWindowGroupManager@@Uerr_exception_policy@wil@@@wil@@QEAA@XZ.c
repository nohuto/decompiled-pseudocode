/*
 * XREFs of ??1?$com_ptr_t@VWindowGroupManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180204500
 * Callers:
 *     _WindowGroupManager::WindowGroupManager_::_1_::dtor$6 @ 0x1802044E0 (_WindowGroupManager--WindowGroupManager_--_1_--dtor$6.c)
 *     __lambda_6cab718d8d37c13432cde215a0f80823_::operator()_::_1_::dtor$0 @ 0x180204770 (__lambda_6cab718d8d37c13432cde215a0f80823_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 */

__int64 __fastcall wil::com_ptr_t<WindowGroupManager,wil::err_exception_policy>::~com_ptr_t<WindowGroupManager,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v1);
  return result;
}
