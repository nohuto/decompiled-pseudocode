/*
 * XREFs of ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18018DC3C
 * Callers:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x180158F0C (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180158F58 (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x180158FB8 (-SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18018DA34 (--$_Emplace_reallocate@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 */

void __fastcall CCaptureController::AddRenderTarget(CCaptureController *this, struct CCaptureRenderTarget *a2)
{
  char *v4; // rdx
  bool v5; // r8
  int v6; // xmm0_4
  float v7; // xmm1_4
  struct CCaptureRenderTarget *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CCaptureRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = (char *)*((_QWORD *)this + 8);
  if ( *((char **)this + 9) == v4 )
  {
    std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
      (__int64 **)this + 7,
      v4,
      (__int64 *)&v8);
  }
  else
  {
    v8 = 0LL;
    *(_QWORD *)v4 = a2;
    *((_QWORD *)this + 8) += 8LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v8);
  CCaptureRenderTarget::SetRootVisual(a2, *((struct CVisual **)this + 10), v5);
  *((_BYTE *)a2 + 424) = *((_BYTE *)this + 88);
  v6 = *((_DWORD *)this + 24);
  *((_DWORD *)a2 + 146) = *((_DWORD *)this + 23);
  *((_DWORD *)a2 + 147) = v6;
  v7 = *((float *)this + 26);
  *((_DWORD *)a2 + 90) = (int)*((float *)this + 25);
  *((_DWORD *)a2 + 91) = (int)v7;
  CCaptureRenderTarget::SetTransform((struct CResource **)a2, *((struct CTransform3D **)this + 14));
  *((_BYTE *)a2 + 426) = *((_BYTE *)this + 89);
}
