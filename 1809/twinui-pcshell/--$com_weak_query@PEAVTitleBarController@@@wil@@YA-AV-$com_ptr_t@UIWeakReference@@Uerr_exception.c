/*
 * XREFs of ??$com_weak_query@PEAVTitleBarController@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVTitleBarController@@@Z @ 0x1801F5A60
 * Callers:
 *     ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x1801F7544 (-EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@VTitleBarController@@@details@wil@@YAJPEAVTitleBarController@@PEAPEAUIWeakReference@@@Z @ 0x1801F4AB4 (--$GetWeakReference@VTitleBarController@@@details@wil@@YAJPEAVTitleBarController@@PEAPEAUIWeakRe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_weak_query<TitleBarController *>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  int Weak; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(a1);
  Weak = wil::details::GetWeakReference<TitleBarController>(v3, a1);
  if ( Weak < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1755LL,
      (__int64)"internal\\sdk\\inc\\wil\\com.h",
      (const char *)(unsigned int)Weak);
    __debugbreak();
  }
  return a1;
}
