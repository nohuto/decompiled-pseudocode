/*
 * XREFs of ?ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180343500
 * Callers:
 *     ?StartSwipe@CAllUpViewService@@UEAAJIUtagPOINT@@@Z @ 0x1803434B0 (-StartSwipe@CAllUpViewService@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___ @ 0x180342E14 (MakeMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___.c)
 */

__int64 __fastcall CAllUpViewService::ToggleAllUpView(__int64 a1, __int64 a2, int a3)
{
  HRESULT v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  int MultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b; // edi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  void *ppvOut; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF

  ppvOut = 0LL;
  if ( *(_QWORD *)(a1 - 24) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v6 = IUnknown_QueryService(
           *(IUnknown **)(a1 - 24),
           (const GUID *const)&SID_ImmersiveLauncher,
           &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
           &ppvOut);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, 5LL);
      if ( v6 >= 0 )
        goto LABEL_7;
      v7 = 58LL;
    }
    else
    {
      v7 = 56LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)(unsigned int)v6);
  }
LABEL_7:
  v16 = *(_QWORD *)(a1 + 24);
  v8 = v16;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v8 + 72LL))(
         v8,
         a2,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &v22);
  MultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b = v9;
  if ( v9 >= 0 )
  {
    v21 = 0LL;
    v17 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
    v18 = v22;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
    v19 = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    MultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b = MakeMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b_(
                                                                              &v21,
                                                                              (__int64)&v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    if ( MultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(
              *(_QWORD *)(a1 + 16),
              v21,
              1LL);
      MultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b = v13;
      if ( v13 >= 0 )
      {
LABEL_14:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        goto LABEL_15;
      }
      v11 = (unsigned int)v13;
      v12 = 99LL;
    }
    else
    {
      v11 = (unsigned int)MultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b;
      v12 = 96LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)v11);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x45,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
    (const char *)(unsigned int)v9);
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)MultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b;
}
