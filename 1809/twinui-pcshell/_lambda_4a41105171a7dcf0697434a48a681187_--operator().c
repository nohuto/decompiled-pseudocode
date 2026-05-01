/*
 * XREFs of _lambda_4a41105171a7dcf0697434a48a681187_::operator() @ 0x1800956EC
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___ @ 0x180095310 (ShellPositionerManager--DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___.c)
 * Callees:
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18002FBD4 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180080A50 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_4a41105171a7dcf0697434a48a681187_::operator()(
        __int64 a1,
        IUnknown *a2,
        IUnknown *a3,
        __int64 a4)
{
  __int64 *v8; // r9
  __int64 v9; // rbx
  __int64 *v10; // rax
  int PositionerForMonitor; // eax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  v15[1] = -2LL;
  v17 = 0LL;
  v15[0] = 0LL;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(v15);
  if ( (int)ShellPositionerManager::GetPositionerForMonitor(
              *(_DWORD *)(a1 + 8),
              a2,
              &GUID_ee010e17_919a_4068_868b_675acf787303,
              (void **)v8) >= 0 )
  {
    v9 = v15[0];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 88LL))(
      v9,
      a4,
      *(unsigned int *)(a1 + 12),
      &v17);
  }
  v14 = 0LL;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(&v14);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           *(_DWORD *)(a1 + 12),
                           a3,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           (void **)v10);
  v12 = PositionerForMonitor;
  if ( PositionerForMonitor >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v14 + 96LL))(
      v14,
      a4,
      *(unsigned int *)(a1 + 8),
      v17);
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x340,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerForMonitor);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return v12;
}
