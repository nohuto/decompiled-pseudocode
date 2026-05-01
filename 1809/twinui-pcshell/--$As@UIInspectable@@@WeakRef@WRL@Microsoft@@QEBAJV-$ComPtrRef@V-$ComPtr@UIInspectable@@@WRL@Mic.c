/*
 * XREFs of ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017738
 * Callers:
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800132B4 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Micros.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x18007CBF4 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18007EEA0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd--detai.c)
 *     _lambda_1d31a855a0809c0761d6e19b1e24bfae_::operator() @ 0x180090AC4 (_lambda_1d31a855a0809c0761d6e19b1e24bfae_--operator().c)
 *     _lambda_090ae1e053e5c7adb69314d8c41aea26_::operator() @ 0x180092674 (_lambda_090ae1e053e5c7adb69314d8c41aea26_--operator().c)
 *     _lambda_43679049413ffb011dfd944481e1a2e9_::operator() @ 0x1800929C0 (_lambda_43679049413ffb011dfd944481e1a2e9_--operator().c)
 *     _lambda_4ae43a7ebf3caa9980047f7d59b4d07c_::operator() @ 0x180092AA8 (_lambda_4ae43a7ebf3caa9980047f7d59b4d07c_--operator().c)
 *     _lambda_95049987556ed2fca2fb7bfd11a04e1e_::operator() @ 0x180092F00 (_lambda_95049987556ed2fca2fb7bfd11a04e1e_--operator().c)
 *     _lambda_9724884f6eff691596e03972589b8d56_::operator() @ 0x180093044 (_lambda_9724884f6eff691596e03972589b8d56_--operator().c)
 *     _lambda_a6e83045e007bd3aeabbed1653bdb15e_::operator() @ 0x18009322C (_lambda_a6e83045e007bd3aeabbed1653bdb15e_--operator().c)
 *     _lambda_ab0326ecea74eabee98d06838221c40f_::operator() @ 0x18009358C (_lambda_ab0326ecea74eabee98d06838221c40f_--operator().c)
 *     _lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9_::operator() @ 0x180093714 (_lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9_--operator().c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180129038 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJ.c)
 *     _lambda_4a7c0c4a26250dfb9f46eb61d34146e4_::operator() @ 0x18014044C (_lambda_4a7c0c4a26250dfb9f46eb61d34146e4_--operator().c)
 *     ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x1801A4C90 (-RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE.c)
 *     ?UnrequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJK@Z @ 0x1801A5D80 (-UnrequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJK@Z.c)
 *     _lambda_e061c9838ed53feae5184a4db6d526ff_::operator() @ 0x1802F21C8 (_lambda_e061c9838ed53feae5184a4db6d526ff_--operator().c)
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x180302404 (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<IInspectable>(Microsoft::WRL::WeakRef *this, struct IInspectable **a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
}
