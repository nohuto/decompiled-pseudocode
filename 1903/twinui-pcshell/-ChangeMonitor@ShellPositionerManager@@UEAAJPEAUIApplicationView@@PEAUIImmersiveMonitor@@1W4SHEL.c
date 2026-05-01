/*
 * XREFs of ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x180394740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180047394 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180048D78 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x180395268 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18040F0A8 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::ChangeMonitor(
        __int64 a1,
        ApplicationViewHelpers *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v8; // edi
  struct IImmersiveApplication *ApplicationFromView; // rbx
  ShellPositionerManager *v11; // r14
  int PositionerPriorityForView; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // r12d
  unsigned int v16; // r15d
  int v17; // eax
  int v18; // eax
  __int64 v19[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IShellPositionerPriority *v21; // [rsp+98h] [rbp+48h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+50h] BYREF

  v22 = a3;
  v19[1] = -2LL;
  if ( a2 )
  {
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, a2);
    v19[0] = (__int64)ApplicationFromView;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
    if ( ApplicationFromView )
    {
      v21 = 0LL;
      v11 = (ShellPositionerManager *)(a1 - 88);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
      PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                    v11,
                                    (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                                    &v21);
      v8 = PositionerPriorityForView;
      if ( PositionerPriorityForView >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v21 + 24LL))(v21);
        v16 = a5;
        if ( v15 != a5 )
        {
          (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v21 + 40LL))(v21, a5);
          ShellPositionerManager::PersistPositionerPriority(
            v11,
            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2);
        }
        if ( v22
          || (v17 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v22),
              v8 = v17,
              v17 >= 0) )
        {
          (*(void (__fastcall **)(struct IImmersiveApplication *, __int64, _QWORD))(*(_QWORD *)ApplicationFromView
                                                                                  + 224LL))(
            ApplicationFromView,
            a4,
            0LL);
          v18 = ShellPositionerManager::PerformPositionerHandoff(v11, a2, v22, a4, 0LL, v15, v16);
          v8 = v18;
          if ( v18 >= 0 )
          {
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x350,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v18);
          v13 = v8;
          v14 = 462LL;
        }
        else
        {
          v13 = (unsigned int)v17;
          v14 = 450LL;
        }
      }
      else
      {
        v13 = (unsigned int)PositionerPriorityForView;
        v14 = 438LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)v13);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    }
    else
    {
      v8 = -2147467263;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)0x80004001LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    return v8;
  }
  if ( a3 )
  {
    v8 = -2147467263;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AB,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)0x80004001LL);
    return v8;
  }
  return 0LL;
}
