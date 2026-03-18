/*
 * XREFs of ?CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z @ 0x180165914
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1800BE170 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006E3F8 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BA8B4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAC88 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z @ 0x180165F00 (-ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CalculateRerenderDirtyFromScribble(
        CHwFullScreenRenderTarget *this,
        const struct FastRegion::Internal::CRgnData **a2,
        int **a3)
{
  int v6; // edi
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = FastRegion::CRegion::Copy(a3, (int **)this + 43);
  if ( v6 < 0 )
  {
    v7 = 1052LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( *((_DWORD *)this + 56) == 3 )
  {
    v6 = FastRegion::CRegion::Union((void **)a3, (const struct FastRegion::Internal::CRgnData **)this + 52);
    if ( v6 < 0 )
    {
      v7 = 1055LL;
      goto LABEL_3;
    }
  }
  v6 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)a3, a2);
  if ( v6 < 0 )
  {
    v7 = 1057LL;
    goto LABEL_3;
  }
  v9 = CHwFullScreenRenderTarget::ClampRegionToBounds(this, (struct CRegion *)a3);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x423,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
