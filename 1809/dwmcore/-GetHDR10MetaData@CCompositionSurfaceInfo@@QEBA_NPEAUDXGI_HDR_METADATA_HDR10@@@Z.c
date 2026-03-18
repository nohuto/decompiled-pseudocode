/*
 * XREFs of ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801BC5DC
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18004CC60 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x180179618 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceInfo::GetHDR10MetaData(
        CCompositionSurfaceInfo *this,
        struct DXGI_HDR_METADATA_HDR10 *a2)
{
  bool result; // al
  __int128 v3; // xmm0
  __int64 v4; // xmm1_8
  int v5; // ecx

  result = *((_DWORD *)this + 34) == 1;
  if ( *((_DWORD *)this + 34) == 1 )
  {
    v3 = *(_OWORD *)((char *)this + 140);
    v4 = *(_QWORD *)((char *)this + 156);
    v5 = *((_DWORD *)this + 41);
    *(_OWORD *)a2->RedPrimary = v3;
    *(_QWORD *)&a2->MaxMasteringLuminance = v4;
    *(_DWORD *)&a2->MaxContentLightLevel = v5;
  }
  return result;
}
