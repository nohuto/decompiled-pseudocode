/*
 * XREFs of ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180397624
 * Callers:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180046F80 (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 * Callees:
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180048D78 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForFrameworkViewType(
        ShellPositionerManager *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64 *),
        IUnknown *a4,
        unsigned int a5)
{
  HRESULT Service; // eax
  unsigned int v10; // ebx
  unsigned int i; // esi
  void *v12; // rbx
  int (__fastcall *v13)(void *, _QWORD, GUID *, __int64 *); // rdi
  bool v14; // zf
  unsigned int (__fastcall *v15)(__int64, _QWORD, _QWORD); // rax
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  void *ppvOut[3]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

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
        v17 = 0LL;
        v12 = ppvOut[0];
        v13 = *(int (__fastcall **)(void *, _QWORD, GUID *, __int64 *))(*(_QWORD *)ppvOut[0] + 24LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        if ( v13(v12, i, &GUID_ee010e17_919a_4068_868b_675acf787303, &v17) >= 0 )
        {
          v14 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, i) == 0;
          v15 = *(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 56LL);
          if ( v14 )
          {
            if ( v15(v17, a3, a5) )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, i);
          }
          else if ( !v15(v17, a3, a5) )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, i);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      }
    }
    ShellPositionerManager::PersistPositionerPriority(a1, a3);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47C,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)Service);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return v10;
}
