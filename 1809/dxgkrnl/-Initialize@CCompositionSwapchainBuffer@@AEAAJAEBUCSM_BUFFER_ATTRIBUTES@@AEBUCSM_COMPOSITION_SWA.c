/*
 * XREFs of ?Initialize@CCompositionSwapchainBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0056580
 * Callers:
 *     ?Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C0056368 (-Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN.c)
 * Callees:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C000928C (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ?InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C00094C4 (-InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::Initialize(
        CCompositionSwapchainBuffer *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO *a3)
{
  int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // xmm1_8
  struct CBufferRealization *v8; // r14
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF
  struct CBufferRealization *v11; // [rsp+78h] [rbp+20h] BYREF

  v5 = CFlipExBuffer::InitializeAttributes(this, a2);
  if ( v5 >= 0 )
  {
    memset((char *)this + 48, 0, 0x78uLL);
    *((_DWORD *)this + 41) = 16;
    memset(v10, 0, 0x20uLL);
    v6 = 0LL;
    LODWORD(v10[0]) = *(_DWORD *)a3;
    do
    {
      if ( (unsigned int)v6 >= *((_DWORD *)a3 + 1) )
        break;
      HIDWORD(v10[0]) = v6;
      v7 = *((_QWORD *)a3 + 3 * v6 + 3);
      *(_OWORD *)&v10[1] = *(_OWORD *)((char *)a3 + 24 * v6 + 8);
      v10[3] = v7;
      v5 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v10, 1, &v11);
      if ( v5 >= 0 )
      {
        v8 = v11;
        v5 = (*(__int64 (__fastcall **)(CCompositionSwapchainBuffer *, struct CBufferRealization *))(*(_QWORD *)this + 200LL))(
               this,
               v11);
        if ( v5 < 0 )
        {
          if ( v8 )
            (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v8)(v8, 1LL);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 8) + 32LL))(*((_QWORD *)v8 + 8));
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v5 >= 0 );
    if ( v5 >= 0 )
    {
      *((_QWORD *)this + 36) = 0LL;
      *((_BYTE *)this + 568) = *(_DWORD *)a3 == 4;
      *((_QWORD *)this + 81) = *((_QWORD *)a3 + 94);
    }
  }
  return (unsigned int)v5;
}
