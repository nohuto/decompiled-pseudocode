/*
 * XREFs of ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x1800772A4
 * Callers:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x180077164 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18015CA98 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 */

__int64 __fastcall CRenderTargetManager::NotifyIndirectSwapchainsOfTargetOcclusion(
        CRenderTargetManager *this,
        struct CRenderTarget *a2,
        bool a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx

  v3 = *((_DWORD *)this + 24);
  v4 = 0;
  if ( v3 < *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v3);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 80LL) )
      {
        v10 = CIndirectSwapchainRenderTarget::SetTargetOcclusion(
                *(CIndirectSwapchainRenderTarget **)(*((_QWORD *)this + 3) + 8LL * v3),
                a2,
                a3);
        v4 = v10;
        if ( v10 < 0 )
          break;
      }
      if ( ++v3 >= *((_DWORD *)this + 12) )
        return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x321u);
  }
  return v4;
}
