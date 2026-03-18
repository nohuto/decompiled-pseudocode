/*
 * XREFs of ??_G?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z @ 0x18015BBE8
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002436C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     CAsyncTask_CD3DDeviceLevel1::D3D12Resources_::Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___ @ 0x18015B95C (CAsyncTask_CD3DDeviceLevel1--D3D12Resources_--Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x18015CB5C (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18015EA7C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 *__fastcall CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::`scalar deleting destructor'(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rcx
  struct _TP_WORK *v4; // rbx

  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    a1,
    0LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(a1 + 10);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(a1 + 9);
  v3 = (__int64 *)a1[8];
  if ( v3 )
  {
    LOBYTE(v2) = v3 != a1 + 1;
    (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 32))(v3, v2);
    a1[8] = 0LL;
  }
  v4 = (struct _TP_WORK *)*a1;
  if ( *a1 )
  {
    WaitForThreadpoolWorkCallbacks((PTP_WORK)*a1, 1);
    CloseThreadpoolWork(v4);
  }
  operator delete(a1);
  return a1;
}
