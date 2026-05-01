/*
 * XREFs of ?SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z @ 0x180136FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x18006AD80 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::SetSite(
        DesktopBlueLightReductionManager *this,
        struct IUnknown *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  HRESULT v7; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    if ( *((_QWORD *)this + 21) )
    {
      v6 = CWRLObjectWithGITSite::SetSite((RTL_SRWLOCK *)this, a2);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          98LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v6);
      v7 = IUnknown_SetSite(*((IUnknown **)this + 21), a2);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          99LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v7);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x67,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           a4);
  }
  return result;
}
