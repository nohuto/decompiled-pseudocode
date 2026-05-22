/*
 * XREFs of ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x1801437C4
 * Callers:
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180010958 (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x1801436E0 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180019108 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)___lambda_9b9f0c840769002edef58b55115a0dea__void_ @ 0x1801431B8 (std--function_void___cdecl(Microsoft--WRL--ComPtr_DataProviderPrincipal__-)_--function_void___cd.c)
 *     ?DuplicateHandleForProcess@DWMCursor@@QEAAJKPEAPEAX@Z @ 0x180144654 (-DuplicateHandleForProcess@DWMCursor@@QEAAJKPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::CreateMotionTransformAndVerifySend(
        DWMCursorBroker *this,
        struct DWMCursor *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  struct IAnimationDataProvider *AnimationDataProvider; // rax
  struct IAnimationDataProvider *v9; // rbx
  struct IAnimationDataProvider *v10; // rcx
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, _QWORD *); // rbx
  _QWORD *v13; // rdx
  int v15; // eax
  int v16; // edi
  __int64 v17; // rbx
  void *v18; // [rsp+38h] [rbp-59h] BYREF
  __int64 v19[3]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v20; // [rsp+58h] [rbp-39h] BYREF
  __int128 v21; // [rsp+60h] [rbp-31h]
  int v22; // [rsp+70h] [rbp-21h]
  int v23; // [rsp+74h] [rbp-1Dh]
  void *v24; // [rsp+78h] [rbp-19h]
  DWMCursorBroker *v25; // [rsp+A8h] [rbp+17h] BYREF
  struct DWMCursor *v26; // [rsp+B0h] [rbp+1Fh] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v19[1] = -2LL;
  v6 = a3;
  v7 = 3LL * a3;
  if ( *((_BYTE *)this + 24 * a3 + 224) )
  {
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v9 = AnimationDataProvider;
    v10 = (struct IAnimationDataProvider *)*((_QWORD *)this + 63);
    if ( v10 != AnimationDataProvider )
    {
      if ( AnimationDataProvider )
      {
        (*(void (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 8LL))(AnimationDataProvider);
        v10 = (struct IAnimationDataProvider *)*((_QWORD *)this + 63);
      }
      *((_QWORD *)this + 63) = v9;
      if ( v10 )
        (*(void (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v18 = this;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v18);
    v19[0] = (__int64)a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v19);
    v11 = *((_QWORD *)this + 63);
    v12 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 56LL);
    v25 = this;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v25);
    v26 = a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v26);
    v27 = a3;
    v13 = std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_____::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_______lambda_9b9f0c840769002edef58b55115a0dea__void_(
            &v20,
            (__int64 *)&v25);
    v12(v11, v13);
    if ( a2 )
      (*(void (__fastcall **)(struct DWMCursor *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( this )
      (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
  else
  {
    memset_0(&v20, 0, 0x48uLL);
    v21 = *(_OWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, DWMCursorBroker **))(*(_QWORD *)a2 + 40LL))(
                       a2,
                       &v25);
    v22 = (*(__int64 (__fastcall **)(struct DWMCursor *))(*(_QWORD *)a2 + 48LL))(a2);
    v23 = (*(__int64 (__fastcall **)(struct DWMCursor *))(*(_QWORD *)a2 + 56LL))(a2);
    v18 = 0LL;
    v15 = DWMCursor::DuplicateHandleForProcess(a2, *((_DWORD *)this + 2 * v7 + 52), &v18);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v24 = v18;
      v17 = 3 * v6;
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, int))(**((_QWORD **)this + 22) + 160LL))(
              *((_QWORD *)this + 22),
              *((_QWORD *)this + v17 + 27),
              4LL,
              &v20,
              72);
      if ( v16 < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 152LL))(
          *((_QWORD *)this + 22),
          *((_QWORD *)this + v17 + 27));
        *((_QWORD *)this + v17 + 27) = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v15);
    }
    return (unsigned int)v16;
  }
}
