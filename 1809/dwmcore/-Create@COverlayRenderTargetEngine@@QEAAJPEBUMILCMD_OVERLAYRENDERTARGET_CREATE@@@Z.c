/*
 * XREFs of ?Create@COverlayRenderTargetEngine@@QEAAJPEBUMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z @ 0x18015E4C8
 * Callers:
 *     ?ProcessCreate@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z @ 0x18015EC64 (-ProcessCreate@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_CRE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::Create(
        COverlayRenderTargetEngine *this,
        const struct MILCMD_OVERLAYRENDERTARGET_CREATE *a2)
{
  int v2; // eax
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 3);
  *((_QWORD *)this + 21) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 6);
  v2 = *((_DWORD *)a2 + 7);
  *((_WORD *)this + 98) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 48) = v2;
  v3 = *(_QWORD *)this;
  *((_DWORD *)this + 47) = 3;
  g_bUseDirtyRegion = 0;
  v4 = (*(__int64 (**)(void))(v3 + 40))();
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x2Fu);
  return v6;
}
