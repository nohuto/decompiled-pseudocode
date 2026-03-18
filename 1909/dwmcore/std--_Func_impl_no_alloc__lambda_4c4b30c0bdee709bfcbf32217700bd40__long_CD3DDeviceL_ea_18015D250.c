/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources___::_Delete_this @ 0x18015D250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources___::_Delete_this(
        __int64 *a1,
        char a2)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(a1 + 2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(a1 + 1);
  if ( a2 )
    operator delete(a1);
}
