/*
 * XREFs of ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1801947AC
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF360 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x18005C6C4 (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDropShadow::SetOcclusionRect(CDropShadow *this, __m128 *a2)
{
  const struct D2D_RECT_F *v2; // rcx
  struct D2D_RECT_F *v3; // r8
  __int64 *v4; // r9
  __int64 v5; // rax
  struct D2D_RECT_F v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = (struct D2D_RECT_F)_mm_sub_ps(*a2, (__m128)_xmm);
  if ( !AreEqual((const struct D2D_RECT_F *)((char *)this + 108), &v6) && (!IsEmpty(v2) || !IsEmpty(&v6)) )
  {
    v5 = *v4;
    *v3 = v6;
    (*(void (__fastcall **)(__int64 *, __int64))(v5 + 64))(v4, 5LL);
  }
}
