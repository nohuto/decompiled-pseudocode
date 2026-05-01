/*
 * XREFs of ??$com_copy@UITabViewManager@@AEAPEAUIInspectable@@@wil@@YA?AV?$com_ptr_t@UITabViewManager@@Uerr_exception_policy@wil@@@0@AEAPEAUIInspectable@@@Z @ 0x180091650
 * Callers:
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18027FA40 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_copy<ITabViewManager,IInspectable * &>(_QWORD *a1, _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a2 )
  {
    v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a2)(
           *a2,
           &GUID_c07fc549_09c7_480a_855c_3d8a695f82c3,
           a1);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5800LL,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
