/*
 * XREFs of ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x18033D990
 * Callers:
 *     ?OnViewClosing@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@H@Z @ 0x1800A9760 (-OnViewClosing@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@H@Z.c)
 *     ?OnViewClosing@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@H@Z @ 0x1800A9770 (-OnViewClosing@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_f4a572d4522d0cfba348286ca4c2df10_::operator() @ 0x18033C1B8 (_lambda_f4a572d4522d0cfba348286ca4c2df10_--operator().c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180341218 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CDesktopPositioner::OnViewClosing(CDesktopPositioner *this, struct IApplicationView *a2, int a3)
{
  struct IApplicationView *v4; // rdx
  __int64 WindowForView; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD v11[5]; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v13; // [rsp+70h] [rbp+20h] BYREF
  ApplicationViewHelpers *v14; // [rsp+78h] [rbp+28h] BYREF
  char v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+38h] BYREF

  v14 = a2;
  if ( a3 )
  {
    v13 = 50;
    v16 = 536870997;
    v15 = 1;
    v11[0] = (char *)this - 104;
    v11[1] = &v14;
    v11[2] = &v13;
    v11[3] = &v16;
    v11[4] = &v15;
    lambda_f4a572d4522d0cfba348286ca4c2df10_::operator()((__int64)v11);
    if ( v15 )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v14,
                        v4);
      if ( WindowForView )
      {
        if ( (int)DwmpBeginTransitionRequest(v13) >= 0 )
        {
          v6 = DwmpTransitionWindow(WindowForView, v16);
          if ( v6 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              376LL,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v6);
          v7 = DwmpEndTransitionRequest(v13);
          if ( v7 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              377LL,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v7);
        }
      }
    }
  }
  v8 = CDesktopPositioner::_PersistPosition((CDesktopPositioner *)((char *)this - 104), v14);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17F,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
