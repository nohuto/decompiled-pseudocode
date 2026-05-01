/*
 * XREFs of ?VirtualDesktopDestroyBegin@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1802D0750
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 */

__int64 __fastcall XamlAllUpViewHost::VirtualDesktopDestroyBegin(
        XamlAllUpViewHost *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 120) & -(__int64)(this != (XamlAllUpViewHost *)144));
  try
  {
    v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    *((_BYTE *)this + 556) = 1;
    if ( v5 >= 0 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A2,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
                           v6);
  }
  return result;
}
