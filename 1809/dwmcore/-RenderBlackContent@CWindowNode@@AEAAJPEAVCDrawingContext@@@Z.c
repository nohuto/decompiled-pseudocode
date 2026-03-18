/*
 * XREFs of ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801B9D60
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF030 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800140C0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800C2D88 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x1801B9E74 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackContent(CWindowNode *this, struct CDrawingContext *a2)
{
  bool v3; // zf
  CWindowNode *v4; // rcx
  struct CShape *v5; // r8
  int WindowClipShape; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct CShape *v11; // [rsp+30h] [rbp-19h] BYREF
  char v12; // [rsp+38h] [rbp-11h]
  void *v13[4]; // [rsp+40h] [rbp-9h] BYREF
  int v14; // [rsp+60h] [rbp+17h]
  int v15; // [rsp+64h] [rbp+1Bh]
  int v16; // [rsp+68h] [rbp+1Fh]
  _BYTE v17[16]; // [rsp+70h] [rbp+27h] BYREF
  __int64 v18; // [rsp+80h] [rbp+37h]

  v11 = 0LL;
  v13[1] = 0LL;
  v16 = 0;
  v18 = 0LL;
  v3 = *((_QWORD *)this + 102) == 0LL;
  v13[0] = &CRectanglesShape::`vftable';
  v13[2] = v17;
  v13[3] = v17;
  v14 = 1;
  v15 = 1;
  v12 = 0;
  if ( v3 )
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v13, (CWindowNode *)((char *)this + 164));
    CShapePtr::Release((CShapePtr *)&v11);
    v5 = (struct CShape *)v13;
    v12 = 0;
    v11 = (struct CShape *)v13;
  }
  else
  {
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v11);
    v7 = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, WindowClipShape, 0xD48u);
      goto LABEL_8;
    }
    v5 = v11;
  }
  v8 = CWindowNode::RenderBlackShape(v4, a2, v5);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD4Bu);
LABEL_8:
  CRectanglesShape::~CRectanglesShape(v13);
  CShapePtr::Release((CShapePtr *)&v11);
  return v7;
}
