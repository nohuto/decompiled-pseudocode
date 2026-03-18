/*
 * XREFs of ??$construct@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@AEBU12@@?$_Default_allocator_traits@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@SAXAEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@1@QEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@AEBU34@@Z @ 0x18024D768
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024DA3C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>::construct<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair,CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = *a3;
  *a2 = *a3;
  v4 = a3[1];
  a2[1] = v4;
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return result;
}
