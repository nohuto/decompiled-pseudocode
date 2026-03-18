/*
 * XREFs of ?_Change_array@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXQEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@_K1@Z @ 0x1801590F0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x180157864 (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // r14

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v4 + 1);
        v4 += 2;
      }
      while ( v4 != v9 );
      v4 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(v4, (*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  *(_QWORD *)a1 = a2;
}
