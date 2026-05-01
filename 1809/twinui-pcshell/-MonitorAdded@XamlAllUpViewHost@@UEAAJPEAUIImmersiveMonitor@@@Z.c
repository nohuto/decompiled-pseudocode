/*
 * XREFs of ?MonitorAdded@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180272F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18026F810 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::MonitorAdded(XamlAllUpViewHost *this, struct IImmersiveMonitor *a2)
{
  char *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (char *)this - 8;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (XamlAllUpViewHost *)8));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
  v5 = CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)v2);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x180,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v5);
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return v6;
}
