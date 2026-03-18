/*
 * XREFs of ?ProcessAddExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180247BE0
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180248038 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801CD510 (--$_Emplace_reallocate@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 */

void __fastcall CHolographicClient::ProcessAddExclusiveModeProxy(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
    a2,
    &GUID_143f61ed_01bd_4237_b4cb_c9ce1a59f0a0,
    &v5);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 144LL))(*((_QWORD *)this + 3));
    v3 = (__int64 *)*((_QWORD *)this + 14);
    if ( *((__int64 **)this + 15) == v3 )
    {
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
        (__int64)this + 104,
        v3,
        &v5);
    }
    else
    {
      v4 = v5;
      v5 = 0LL;
      *v3 = v4;
      *((_QWORD *)this + 14) += 8LL;
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v5);
}
