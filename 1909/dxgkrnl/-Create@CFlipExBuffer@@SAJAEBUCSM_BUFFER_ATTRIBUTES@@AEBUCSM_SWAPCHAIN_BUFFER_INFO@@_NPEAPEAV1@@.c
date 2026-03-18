/*
 * XREFs of ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C001264C
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0012548 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ValidateSwapChainInfo@@YAJAEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x1C0012704 (-ValidateSwapChainInfo@@YAJAEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z @ 0x1C00127A4 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0012D14 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0012E60 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a2,
        bool a3,
        struct CFlipExBuffer **a4)
{
  int v8; // ebx
  CFlipExBuffer *v9; // rax
  CFlipExBuffer *v10; // rdi

  *a4 = 0LL;
  v8 = ValidateBufferAttributes(a1);
  if ( v8 >= 0 )
  {
    v8 = ValidateSwapChainInfo(a2);
    if ( v8 >= 0 )
    {
      v9 = (CFlipExBuffer *)operator new[](0x288uLL, 0x624D5343u, PagedPool);
      if ( v9 )
        v10 = CFlipExBuffer::CFlipExBuffer(v9);
      else
        v10 = 0LL;
      if ( v10 )
      {
        v8 = CFlipExBuffer::Initialize(v10, a1, a2, a3);
        if ( v8 < 0 )
          (**(void (__fastcall ***)(CFlipExBuffer *, __int64))v10)(v10, 1LL);
        else
          *a4 = v10;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v8;
}
