/*
 * XREFs of ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x18017AF58
 * Callers:
 *     _lambda_8aae5a79e9430b96552daf1d76b90800_::_lambda_invoker_cdecl_ @ 0x180178DC0 (_lambda_8aae5a79e9430b96552daf1d76b90800_--_lambda_invoker_cdecl_.c)
 *     wistd::__function::__func__lambda_50a12363169dbf5c5fb5088ef5c364e8__void___cdecl(void)_::operator() @ 0x180179940 (wistd--__function--__func__lambda_50a12363169dbf5c5fb5088ef5c364e8__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x18041312C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::PostTargetedMessage(
        struct IUnknown *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ExperienceManagerUtils::PostToUIThread(0LL, a1, (void *)a2, a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
