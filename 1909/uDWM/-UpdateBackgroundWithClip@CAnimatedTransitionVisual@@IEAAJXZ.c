/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0968
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000E4CC (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x180004848 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001F3C8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180020B94 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18002343C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18002D65C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18002D690 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  int v1; // r10d
  const RECT *v2; // r12
  struct CBaseGeometryProxy **v3; // r15
  int v4; // edx
  struct CBaseGeometryProxy *v5; // rbx
  CBaseObject *v6; // rdi
  struct tagRECT v7; // xmm0
  int v8; // eax
  int v9; // r9d
  int v10; // r8d
  int left; // ecx
  int RectangleGeometry; // eax
  unsigned int v14; // esi
  __int64 v15; // rdx
  struct CBaseLegacyMilBrushProxy *BrushNoRef; // rax
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  struct CRectangleGeometryProxy **v22; // [rsp+20h] [rbp-50h]
  CBaseObject *v23; // [rsp+30h] [rbp-40h] BYREF
  struct CBaseGeometryProxy *v24; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v1 = *((_DWORD *)this + 211);
  v2 = (const RECT *)((char *)this + 840);
  v3 = (struct CBaseGeometryProxy **)((char *)this + 712);
  v4 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(struct tagRECT *)((char *)this + 856);
  v8 = *((_DWORD *)this + 213) - v1;
  v24 = 0LL;
  v9 = 0;
  v23 = 0LL;
  if ( v8 >= 0 )
    v9 = v8;
  v22 = (struct CRectangleGeometryProxy **)((char *)this + 712);
  v10 = 0;
  left = v2->left;
  rc = v7;
  if ( v4 >= 0 )
    v10 = v4;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(left, v1, v10, v9, v22);
  v14 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v15 = 1109LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)RectangleGeometry);
    goto LABEL_17;
  }
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  v17 = CDrawGeometryInstruction::Create(BrushNoRef, *v3, &v23);
  v14 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45B,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v17);
    v6 = v23;
    goto LABEL_17;
  }
  v6 = v23;
  RectangleGeometry = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v23);
  v14 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v15 = 1117LL;
    goto LABEL_15;
  }
  v18 = RoundToNearestInt(*((float *)this + 189));
  v19 = RoundToNearestInt(*((float *)this + 188));
  OffsetRect(&rc, v19, v18);
  IntersectRect(&rcDst, v2, &rc);
  v20 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v24);
  v14 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x463,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v20);
    v5 = v24;
    goto LABEL_17;
  }
  v5 = v24;
  RectangleGeometry = CVisualProxy::SetClip(*((CVisualProxy **)this + 3), v24);
  v14 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v15 = 1126LL;
    goto LABEL_15;
  }
  v14 = 0;
LABEL_17:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v5 )
    CBaseObject::Release(v5);
  return v14;
}
