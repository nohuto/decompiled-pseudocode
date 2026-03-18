/*
 * XREFs of ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x1801853F4
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800E5DA4 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180184A54 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18005205C (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180184F88 (-IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180185D78 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?GetColorChannelDepth@CCompositionSurfaceInfo@@QEBAIXZ @ 0x1801CC02C (-GetColorChannelDepth@CCompositionSurfaceInfo@@QEBAIXZ.c)
 */

char __fastcall COverlayContext::IsHigherProprity(
        const struct COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl
  char v5; // al
  char v6; // al
  char v7; // r9
  char v8; // dl
  bool v9; // zf
  char v10; // al
  char v12; // r8
  char v13; // al
  int v14; // ecx
  char v15; // r8
  unsigned int ColorChannelDepth; // ebx
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // edx

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 112LL))(*((_QWORD *)this + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 112LL))(*((_QWORD *)a2 + 2));
  if ( v4 )
  {
    if ( !v5 )
      return 1;
  }
  else if ( v5 )
  {
    return 0;
  }
  if ( COverlayContext::s_bXbox )
  {
    IsDXGIColorSpaceRec2020(*((_DWORD *)this + 29));
    v6 = IsDXGIColorSpaceRec2020(*((_DWORD *)a2 + 29));
    v9 = v12 == 0;
  }
  else
  {
    COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(this);
    v6 = COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(a2);
    v9 = v8 == 0;
  }
  if ( v9 )
  {
    if ( v6 )
      return 0;
  }
  else if ( !v6 )
  {
    return 1;
  }
  v10 = *((_BYTE *)a2 + 184);
  if ( *((_BYTE *)this + 184) )
  {
    if ( !v10 )
      return 1;
  }
  else if ( v10 )
  {
    return 0;
  }
  if ( !v7 )
    goto LABEL_27;
  IsDXGIColorSpaceStudio(*((_DWORD *)this + 29));
  v13 = IsDXGIColorSpaceStudio(*((_DWORD *)a2 + 29));
  if ( v15 )
  {
    if ( !v13 )
      return 1;
  }
  else if ( v13 )
  {
    return 0;
  }
  if ( *((_DWORD *)this + 29) )
  {
    if ( !v14 )
      return 1;
  }
  else if ( v14 )
  {
    return 0;
  }
  ColorChannelDepth = CCompositionSurfaceInfo::GetColorChannelDepth(*((CCompositionSurfaceInfo **)this + 3));
  v17 = CCompositionSurfaceInfo::GetColorChannelDepth(*((CCompositionSurfaceInfo **)a2 + 3));
  if ( ColorChannelDepth <= v17 )
  {
    if ( ColorChannelDepth < v17 )
      return 0;
LABEL_27:
    v18 = (*((_DWORD *)this + 21) - *((_DWORD *)this + 19)) * (*((_DWORD *)this + 22) - *((_DWORD *)this + 20));
    v19 = (*((_DWORD *)a2 + 21) - *((_DWORD *)a2 + 19)) * (*((_DWORD *)a2 + 22) - *((_DWORD *)a2 + 20));
    if ( v18 > v19 )
      return 1;
    if ( v18 >= v19 )
    {
      v20 = (*((_DWORD *)this + 13) - *((_DWORD *)this + 11)) * (*((_DWORD *)this + 14) - *((_DWORD *)this + 12));
      v21 = (*((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 11)) * (*((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12));
      if ( v20 > v21 || v20 >= v21 && *((_BYTE *)this + 200) && !*((_BYTE *)a2 + 200) )
        return 1;
    }
    return 0;
  }
  return 1;
}
