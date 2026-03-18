/*
 * XREFs of ?Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C0056368
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0008DB0 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 * Callees:
 *     ?ValidateSwapChainInfo@@YAJAEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x1C0008F6C (-ValidateSwapChainInfo@@YAJAEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0009584 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C00096D0 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CCompositionSwapchainBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0056580 (-Initialize@CCompositionSwapchainBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWA.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO *a2,
        char a3,
        struct CCompositionSwapchainBuffer **a4)
{
  signed int v7; // ebx
  CFlipExBuffer *v8; // rax
  CCompositionSwapchainBuffer *v9; // rdi

  *a4 = 0LL;
  v7 = a3 == 0 ? 0xC000000D : 0;
  if ( a3 )
    v7 = ValidateBufferAttributes(a1);
  if ( v7 >= 0 )
  {
    v7 = ValidateSwapChainInfo(a2);
    if ( v7 >= 0 )
    {
      v8 = (CFlipExBuffer *)operator new(0x298uLL, 0x624D5343u, PagedPool);
      v9 = v8;
      if ( v8 )
      {
        CFlipExBuffer::CFlipExBuffer(v8);
        *(_QWORD *)v9 = &CCompositionSwapchainBuffer::`vftable';
      }
      else
      {
        v9 = 0LL;
      }
      if ( !v9 )
        v7 = -1073741801;
      if ( v7 >= 0 )
      {
        v7 = CCompositionSwapchainBuffer::Initialize(v9, a1, a2);
        if ( v7 >= 0 )
        {
          *a4 = v9;
          v9 = 0LL;
        }
      }
      if ( v9 )
        (**(void (__fastcall ***)(CCompositionSwapchainBuffer *, __int64))v9)(v9, 1LL);
    }
  }
  return (unsigned int)v7;
}
