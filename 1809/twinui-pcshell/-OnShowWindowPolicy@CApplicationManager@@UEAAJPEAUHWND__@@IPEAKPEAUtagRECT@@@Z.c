/*
 * XREFs of ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1800F09C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002A3F4 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800790D4 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::OnShowWindowPolicy(
        CApplicationManager *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  RTL_SRWLOCK *v8; // rbx
  char v9; // r14
  CApplicationManager *v10; // rcx
  int v11; // eax
  HRESULT v12; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  struct IApplicationView *v17; // [rsp+30h] [rbp-20h] BYREF
  IUnknown *punk[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *ppvOut; // [rsp+88h] [rbp+38h] BYREF

  v19 = -2LL;
  *a4 = 0;
  punk[0] = 0LL;
  punk[1] = 0LL;
  *a5 = 0u;
  if ( !(unsigned int)IsShellManagedWindow(a2) && (unsigned int)GetWindowBand(a2, &a5) && (_DWORD)a5 == 1 )
  {
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    CApplicationManager::_MonitorFromWindow(
      (CApplicationManager *)((char *)this - 368),
      a2,
      (struct IImmersiveMonitor **)&ppvOut);
    v9 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, __int64, void *))(**((_QWORD **)this + 21) + 24LL))(
           *((_QWORD *)this + 21),
           a2,
           (unsigned int)a5,
           1LL,
           ppvOut);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    if ( v9 )
    {
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      v11 = CApplicationManager::_HandleCreation_EnsureApplicationView(v10, 0LL, a2, &v17);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD80,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v11);
LABEL_14:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        return (unsigned int)v12;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      punk[0] = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
      (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 40) + 32LL))(
        (char *)this - 320,
        &GUID_00000000_0000_0000_c000_000000000046,
        punk);
      v12 = IUnknown_QueryService(
              punk[0],
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
              &ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
      if ( v12 < 0 )
      {
        v13 = (unsigned int)v12;
        v14 = 3464LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_14;
      }
      v15 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, _QWORD, unsigned int *))(*(_QWORD *)ppvOut
                                                                                                 + 32LL))(
              ppvOut,
              v17,
              0LL,
              a4);
      v12 = v15;
      if ( v15 < 0 )
      {
        v13 = (unsigned int)v15;
        v14 = 3465LL;
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    }
  }
  return 0LL;
}
