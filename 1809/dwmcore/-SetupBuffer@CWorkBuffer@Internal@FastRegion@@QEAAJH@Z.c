/*
 * XREFs of ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800A2DA0
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1800A6420 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CWorkBuffer::SetupBuffer(FastRegion::Internal::CWorkBuffer *this, int a2)
{
  SIZE_T v3; // r8
  LPVOID v5; // rax

  if ( *(_DWORD *)this )
    return 2147500037LL;
  v3 = a2;
  *(_DWORD *)this = a2;
  if ( (unsigned __int64)a2 <= 0x100 )
    return 0LL;
  if ( !a2 )
    v3 = 1LL;
  v5 = HeapAlloc(WPF::g_processHeap, 0, v3);
  if ( v5 )
  {
    *((_QWORD *)this + 1) = v5;
    return 0LL;
  }
  return 2147942414LL;
}
