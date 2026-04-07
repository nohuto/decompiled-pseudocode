/*
 * XREFs of ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0EAC
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002789C (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002AC4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021984 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800279E0 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18002BF6C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18002BFA0 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x1800381F0 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DWithClip(CAnimatedTransitionVisual *this)
{
  LONG v1; // eax
  CBaseObject *v2; // rbx
  __m128i v3; // xmm0
  __m128i v5; // xmm1
  LONG v6; // eax
  int v7; // r14d
  int v8; // r15d
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v12; // eax
  struct CRenderDataInstruction *v14; // [rsp+30h] [rbp-50h] BYREF
  CBaseObject *v15; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v1 = *((_DWORD *)this + 238);
  v2 = 0LL;
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 214));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 206));
  v14 = 0LL;
  rc.left = 0;
  rc.top = 0;
  rc.right = v1;
  v6 = *((_DWORD *)this + 239);
  v15 = 0LL;
  rc.bottom = v6;
  v7 = RoundToNearestInt((float)(_mm_cvtepi32_ps(v3).m128_f32[0] + *((float *)this + 188)) - _mm_cvtepi32_ps(v5).m128_f32[0]);
  v8 = RoundToNearestInt((float)((float)*((int *)this + 215) + *((float *)this + 189)) - (float)*((int *)this + 207));
  OffsetRect(&rc, v7, v8);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  v9 = CDrawTileImageInstruction::Create(
         *((struct CBaseImageProxy **)this + 73),
         &rc,
         (const struct tagPOINT *)this + 118,
         *((float *)this + 186),
         &v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1164LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  v9 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1165LL;
    goto LABEL_9;
  }
  rcSrc2 = *(RECT *)((char *)this + 824);
  OffsetRect(&rcSrc2, v7, v8);
  IntersectRect(&rcDst, (const RECT *)((char *)this + 840), &rcSrc2);
  v12 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v15);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x497,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v12);
    v2 = v15;
    goto LABEL_11;
  }
  v2 = v15;
  v9 = CVisualProxy::SetClip(*((CVisualProxy **)this + 3), v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1178LL;
    goto LABEL_9;
  }
  v10 = 0;
LABEL_11:
  if ( v2 )
    CBaseObject::Release(v2);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  return v10;
}
