/*
 * XREFs of ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180336F74
 * Callers:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180067E7C (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 * Callees:
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800300D8 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForFrameworkViewType(
        ShellPositionerManager *a1,
        __int64 a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        unsigned int a5)
{
  HRESULT Service; // eax
  unsigned int v10; // ebx
  unsigned int i; // edi
  void *v12; // rbx
  bool v13; // zf
  unsigned int (__fastcall *v14)(__int64, struct IApplicationView *, _QWORD); // rax
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  void *ppvOut[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ppvOut[1] = (void *)-2LL;
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              a4,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              ppvOut);
  v10 = Service;
  if ( Service >= 0 )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( i > 1 )
      {
        v16 = 0LL;
        v12 = ppvOut[0];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v12 + 24LL))(
               v12,
               i,
               &GUID_ee010e17_919a_4068_868b_675acf787303,
               &v16) >= 0 )
        {
          v13 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, i) == 0;
          v14 = *(unsigned int (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v16 + 56LL);
          if ( v13 )
          {
            if ( v14(v16, a3, a5) )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, i);
          }
          else if ( !v14(v16, a3, a5) )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, i);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      }
    }
    ShellPositionerManager::PersistPositionerPriority(a1, a3);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x444,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)Service);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return v10;
}
