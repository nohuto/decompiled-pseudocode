/*
 * XREFs of ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x1801AAAB0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18019AF10 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18019B57C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1801AAFA0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET *a3)
{
  _OWORD *v3; // rdi
  unsigned int v6; // ebx
  signed int updated; // eax
  __int64 v8; // rcx
  _OWORD *v9; // rdi

  v3 = (_OWORD *)((char *)this + 392);
  if ( *((_DWORD *)this + 98) <= 6u )
  {
    updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((_DWORD *)a3 + 3));
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, 0x35u, 0LL);
    }
    else
    {
      *((_DWORD *)this + 22) = *((_DWORD *)a3 + 4);
      *((_DWORD *)this + 23) = *((_DWORD *)a3 + 5);
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
      *((_DWORD *)this + 166) = 0;
      *((_DWORD *)this + 172) = 0;
      COffScreenRenderTarget::ReleaseRenderTargets(this);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x32u, 0LL);
  }
  return v6;
}
