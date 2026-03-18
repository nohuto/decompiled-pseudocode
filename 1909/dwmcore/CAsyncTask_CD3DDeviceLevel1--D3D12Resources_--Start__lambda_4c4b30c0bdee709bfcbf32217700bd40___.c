/*
 * XREFs of CAsyncTask_CD3DDeviceLevel1::D3D12Resources_::Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___ @ 0x18015A27C
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x18015B47C (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180154D5C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_4c4b30c0bdee709bfcbf32217700bd40_::_lambda_4c4b30c0bdee709bfcbf32217700bd40_ @ 0x18015A46C (_lambda_4c4b30c0bdee709bfcbf32217700bd40_--_lambda_4c4b30c0bdee709bfcbf32217700bd40_.c)
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z @ 0x18015A508 (--_G-$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18015D39C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 __fastcall CAsyncTask_CD3DDeviceLevel1::D3D12Resources_::Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___(
        __int64 a1,
        _QWORD *a2)
{
  char v2; // si
  _QWORD *v5; // rdi
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  void *v10; // rbx
  _QWORD *v11; // rdx
  int LastError; // esi
  __int64 v13; // rdx
  PTP_WORK ThreadpoolWork; // rax
  const char *v15; // r9
  char v17[24]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v18[7]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v19; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = 0;
  v5 = DefaultHeap::Alloc(0x60uLL);
  if ( v5 )
  {
    v6 = (__int64 *)lambda_4c4b30c0bdee709bfcbf32217700bd40_::_lambda_4c4b30c0bdee709bfcbf32217700bd40_(v17, a1);
    v19 = 0LL;
    v7 = v6;
    v18[0] = off_18026DB38;
    v8 = *v6;
    *v6 = 0LL;
    v18[1] = v8;
    v9 = v6[1];
    v6[1] = 0LL;
    v18[2] = v9;
    v19 = v18;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v6 + 1);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v7);
    *v5 = 0LL;
    v5[8] = 0LL;
    if ( v19 )
      v5[8] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))*v19)(v19, v5 + 1);
    v5[9] = 0LL;
    v5[10] = 0LL;
    *((_DWORD *)v5 + 22) = 0;
    *((_BYTE *)v5 + 92) = 0;
    v2 = 1;
  }
  else
  {
    v5 = 0LL;
  }
  v10 = v5;
  if ( (v2 & 1) != 0 && v19 )
  {
    v11 = v18;
    LOBYTE(v11) = v19 != v18;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v19 + 32LL))(v19, v11);
  }
  if ( !v5 )
  {
    LastError = -2147024882;
    v13 = 52LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\AsyncTask.h",
      (const char *)(unsigned int)LastError);
    goto LABEL_18;
  }
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)lambda_735079264b3842ed665395672707c8d3_::_lambda_invoker_cdecl_,
                     v5,
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    v5,
    ThreadpoolWork);
  if ( *v5 )
  {
    SubmitThreadpoolWork((PTP_WORK)*v5);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x51,
                  (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\AsyncTask.h",
                  v15);
  }
  if ( LastError < 0 )
  {
    v13 = 54LL;
    goto LABEL_16;
  }
  v10 = 0LL;
  *a2 = v5;
  LastError = 0;
LABEL_18:
  if ( v10 )
    CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::`scalar deleting destructor'(v10);
  return (unsigned int)LastError;
}
