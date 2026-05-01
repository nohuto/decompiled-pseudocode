/*
 * XREFs of ?TogglePPIAllUpView@CPPIAllUpViewService@@UEAAJPEAUHMONITOR__@@@Z @ 0x1802E32D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf___ @ 0x1802E2DF8 (MakeMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf___.c)
 */

__int64 __fastcall CPPIAllUpViewService::TogglePPIAllUpView(CPPIAllUpViewService *this, HMONITOR a2)
{
  __int64 v2; // rbx
  int v5; // eax
  int MultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v11[0] = *((_QWORD *)this + 3);
  v2 = v11[0];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v5 = (*(__int64 (__fastcall **)(__int64, HMONITOR, GUID *, GUID *, __int64 *))(*(_QWORD *)v2 + 72LL))(
         v2,
         a2,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &v14);
  MultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf = v5;
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    v15 = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    MultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf = MakeMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf_(
                                                                              &v13,
                                                                              &v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    if ( MultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 2) + 24LL))(
             *((_QWORD *)this + 2),
             v13,
             1LL);
      MultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf = v9;
      if ( v9 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        goto LABEL_9;
      }
      v7 = (unsigned int)v9;
      v8 = 73LL;
    }
    else
    {
      v7 = (unsigned int)MultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf;
      v8 = 70LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewservice.cpp",
      (const char *)v7);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewservice.cpp",
    (const char *)(unsigned int)v5);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
  return (unsigned int)MultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf;
}
