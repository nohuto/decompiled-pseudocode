/*
 * XREFs of ?InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C00094C4
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z @ 0x1C0009004 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z.c)
 *     ?Initialize@CCompositionSwapchainBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0056580 (-Initialize@CCompositionSwapchainBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::InitializeAttributes(CFlipExBuffer *this, const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // esi
  int v6; // eax
  struct DXGGLOBAL *v8; // rax
  struct DXGGLOBAL *v9; // rax

  Global = DXGGLOBAL::GetGlobal();
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)Global + 2541) + 8LL))((char *)this + 248);
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 143) = (unsigned int)PsGetCurrentProcessId();
    *((_OWORD *)this + 3) = *(_OWORD *)a2;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    *((_QWORD *)this + 20) = *((_QWORD *)a2 + 14);
    v6 = *((_DWORD *)a2 + 29);
    if ( (v6 & 0x40) != 0
      && (v6 & 0x10) != 0
      && ((v8 = DXGGLOBAL::GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)v8 + 2541) + 88LL))())
       || (v9 = DXGGLOBAL::GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)v9 + 2541) + 176LL))())
       || (*((_DWORD *)a2 + 29) & 0x80u) != 0) )
    {
      *((_DWORD *)this + 41) |= 0x40u;
    }
    else
    {
      *((_DWORD *)this + 41) &= ~0x40u;
    }
  }
  return (unsigned int)v5;
}
