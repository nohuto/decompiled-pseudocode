/*
 * XREFs of ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800296A4
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800274F0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x180004558 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021984 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180023738 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x180039180 (-SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_ValidateDCompVisual(CAnimatedTransitionVisual *this)
{
  CBaseObject *v1; // rbx
  int v3; // eax
  unsigned int v4; // esi
  __int64 v6; // rax
  LONG v7; // r8d
  struct tagPOINT *v8; // rcx
  struct CBaseLegacyMilBrushProxy *BrushNoRef; // rax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-58h]
  bool v13; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct tagPOINT v15; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0LL;
  v15 = 0LL;
  v3 = *((_DWORD *)this + 22);
  if ( (v3 & 0x1000) == 0 && (v3 & 0x2000) == 0 && (v3 & 0x20) == 0 )
    goto LABEL_7;
  if ( *((_BYTE *)this + 975) )
  {
    v6 = *((_QWORD *)this + 91);
    v7 = *((_DWORD *)this + 215);
    v15.x = *((_DWORD *)this + 214);
    v15.y = v7;
    v8 = **(struct tagPOINT ***)(v6 + 48);
    if ( v8[14].x != v15.x || v8[14].y != v7 )
      CVisual::SetOffset(v8, &v15);
    goto LABEL_6;
  }
  if ( (v3 & 0x2000) != 0 )
    CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 91));
  if ( *(_DWORD *)(*((_QWORD *)this + 91) + 272LL) )
  {
LABEL_6:
    *((_DWORD *)this + 22) &= 0xFFFFCFDF;
LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  CRectangleGeometryProxy::SetRectangle(
    *((CRectangleGeometryProxy **)this + 89),
    (float)*((int *)this + 214),
    (float)*((int *)this + 215),
    (float)*((int *)this + 216),
    (float)*((int *)this + 217),
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    v13);
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  v10 = CDrawGeometryInstruction::Create(
          BrushNoRef,
          *((struct CBaseGeometryProxy **)this + 89),
          (struct CDrawGeometryInstruction **)&v15);
  v1 = (CBaseObject *)v15;
  v4 = v10;
  if ( v10 < 0 )
  {
    v11 = 1423LL;
  }
  else
  {
    v10 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 91), *(struct CRenderDataInstruction **)&v15);
    v4 = v10;
    if ( v10 >= 0 )
      goto LABEL_6;
    v11 = 1424LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v10,
    v12);
LABEL_8:
  if ( v1 )
    CBaseObject::Release(v1);
  return v4;
}
