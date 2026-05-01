/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_8e457720effd7f44ba0db438839c9f61__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18014EF30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800186D8 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x18014E4E0 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_8e457720effd7f44ba0db438839c9f61__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInspectable *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  Microsoft::WRL::WeakRef::InternalResolve(
    (Microsoft::WRL::WeakRef *)(a1 + 16),
    &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20,
    &v7);
  v4 = CControlCenterExperienceManager::PostTargetedMessage(*(struct IUnknown **)(a1 + 8), 0, v2, v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      468LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
}
