/*
 * XREFs of ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x18015D998
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18001D440 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18015DE50 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180176404 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET *a3)
{
  _OWORD *v3; // rdi
  unsigned int v6; // ebx
  int updated; // eax
  __int64 v8; // rcx
  _OWORD *v9; // rdi

  v3 = (_OWORD *)((char *)this + 400);
  if ( *((_DWORD *)this + 100) <= 6u )
  {
    updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((enum DXGI_FORMAT *)a3 + 3));
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, 0x31u);
    }
    else
    {
      *((_DWORD *)this + 90) = *((_DWORD *)a3 + 4);
      *((_DWORD *)this + 91) = *((_DWORD *)a3 + 5);
      *v3 = *(_OWORD *)((char *)a3 + 8);
      v3[1] = *(_OWORD *)((char *)a3 + 24);
      v3[2] = *(_OWORD *)((char *)a3 + 40);
      v3[3] = *(_OWORD *)((char *)a3 + 56);
      v3[4] = *(_OWORD *)((char *)a3 + 72);
      v3[5] = *(_OWORD *)((char *)a3 + 88);
      v3[6] = *(_OWORD *)((char *)a3 + 104);
      v9 = v3 + 8;
      *(v9 - 1) = *(_OWORD *)((char *)a3 + 120);
      *v9 = *(_OWORD *)((char *)a3 + 136);
      v9[1] = *(_OWORD *)((char *)a3 + 152);
      v9[2] = *(_OWORD *)((char *)a3 + 168);
      v9[3] = *(_OWORD *)((char *)a3 + 184);
      v9[4] = *(_OWORD *)((char *)a3 + 200);
      CMagnifierRenderTarget::StopSlicer(this);
      *((_DWORD *)this + 168) = 0;
      *((_DWORD *)this + 174) = 0;
      COffScreenRenderTarget::ReleaseRenderTargets(this);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x2Eu);
  }
  return v6;
}
