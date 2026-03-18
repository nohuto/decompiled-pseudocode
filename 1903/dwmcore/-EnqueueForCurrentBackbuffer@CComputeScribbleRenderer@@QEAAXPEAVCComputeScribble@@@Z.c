/*
 * XREFs of ?EnqueueForCurrentBackbuffer@CComputeScribbleRenderer@@QEAAXPEAVCComputeScribble@@@Z @ 0x1801AD7A8
 * Callers:
 *     ?EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble@@@Z @ 0x1801677C0 (-EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAPEAVCComputeScribble@@@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCComputeScribble@@@Z @ 0x1801B51F4 (--$_Emplace_reallocate@AEAPEAVCComputeScribble@@@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_r.c)
 */

void __fastcall CComputeScribbleRenderer::EnqueueForCurrentBackbuffer(
        CComputeScribbleRenderer *this,
        struct CComputeScribble *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  struct CComputeScribble *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v2 + 112);
    v4 = a2;
    if ( *(_QWORD **)(v2 + 120) == v3 )
    {
      std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::_Emplace_reallocate<CComputeScribble * &>(
        v2 + 104,
        v3,
        &v4);
    }
    else
    {
      *v3 = a2;
      if ( a2 )
        (**(void (__fastcall ***)(struct CComputeScribble *))a2)(a2);
      *(_QWORD *)(v2 + 112) += 8LL;
    }
  }
}
