/*
 * XREFs of ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801CEEC4
 * Callers:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18024FD30 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801CECB0 (--$_Emplace_reallocate@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18024FD7C (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x18024FDE0 (-SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z.c)
 */

void __fastcall CCaptureController::AddRenderTarget(CCaptureController *this, struct CCaptureRenderTarget *a2)
{
  __int64 *v4; // rdx
  int v5; // xmm0_4
  float v6; // xmm1_4
  struct CCaptureRenderTarget *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CCaptureRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = (__int64 *)*((_QWORD *)this + 8);
  if ( *((__int64 **)this + 9) == v4 )
  {
    std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
      (__int64)this + 56,
      v4,
      (__int64 *)&v7);
  }
  else
  {
    v7 = 0LL;
    *v4 = (__int64)a2;
    *((_QWORD *)this + 8) += 8LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v7);
  if ( *((_QWORD *)this + 11) )
    (*(void (__fastcall **)(struct CCaptureRenderTarget *))(*(_QWORD *)a2 + 432LL))(a2);
  else
    CCaptureRenderTarget::SetRootVisual(a2, *((struct CVisual **)this + 10));
  *((_BYTE *)a2 + 416) = *((_BYTE *)this + 96);
  v5 = *((_DWORD *)this + 26);
  *((_DWORD *)a2 + 146) = *((_DWORD *)this + 25);
  *((_DWORD *)a2 + 147) = v5;
  v6 = *((float *)this + 28);
  *((_DWORD *)a2 + 22) = (int)*((float *)this + 27);
  *((_DWORD *)a2 + 23) = (int)v6;
  CCaptureRenderTarget::SetTransform(a2, *((struct CTransform3D **)this + 15));
  *((_BYTE *)a2 + 418) = *((_BYTE *)this + 97);
}
