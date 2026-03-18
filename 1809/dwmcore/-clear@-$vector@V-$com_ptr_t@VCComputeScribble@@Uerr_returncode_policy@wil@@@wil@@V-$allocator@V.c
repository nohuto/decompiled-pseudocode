/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18022E67C
 * Callers:
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x18022C978 (-PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x18022D6E0 (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 *     ?BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022D8EC (-BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEA.c)
 *     ?Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z @ 0x18022E320 (-Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  v3 = *(_QWORD **)a1;
  if ( *(_QWORD **)a1 != v1 )
  {
    do
    {
      if ( *v3 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
      ++v3;
    }
    while ( v3 != v1 );
    v3 = *(_QWORD **)a1;
  }
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
