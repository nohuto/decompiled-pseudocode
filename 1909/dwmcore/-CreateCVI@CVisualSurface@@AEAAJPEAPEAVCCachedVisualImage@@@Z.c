/*
 * XREFs of ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801FC900
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEAPEAVCCachedVisualImage@@@Z @ 0x1801FC97C (-GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEA.c)
 *     ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x1801FCD10 (-ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801C79B8 (-Create@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?SetForVisualSurface@CCachedVisualImage@@QEAAXXZ @ 0x1801C7F7C (-SetForVisualSurface@CCachedVisualImage@@QEAAXXZ.c)
 */

__int64 __fastcall CVisualSurface::CreateCVI(CVisualSurface *this, struct CCachedVisualImage **a2)
{
  struct CComposition *v2; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  CCachedVisualImage *v6; // rcx
  struct CCachedVisualImage *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CCachedVisualImage *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct CComposition *)*((_QWORD *)this + 2);
  v10 = 0LL;
  v4 = CCachedVisualImage::Create(v2, &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v10;
    CCachedVisualImage::SetForVisualSurface(v10);
    v6 = 0LL;
    *a2 = v7;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v4);
    v6 = v10;
  }
  if ( v6 )
    CGdiSpriteBitmap::Release((CCachedVisualImage *)((char *)v6 + 16));
  return v5;
}
