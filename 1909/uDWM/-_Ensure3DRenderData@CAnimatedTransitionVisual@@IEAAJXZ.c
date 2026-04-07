/*
 * XREFs of ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0DCC
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0D38 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002FE4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180024974 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180024A68 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x180037BD8 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18003A35C (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Ensure3DRenderData(CAnimatedTransitionVisual *this)
{
  CBaseObject *v1; // rbx
  CBaseObject *v2; // rdi
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdx
  int v11; // eax
  struct CBaseImageProxy *v12; // rsi
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct CRenderDataInstruction *v16; // [rsp+60h] [rbp+30h] BYREF
  CBaseObject *v17; // [rsp+68h] [rbp+38h] BYREF
  struct CRenderDataInstruction *v18; // [rsp+70h] [rbp+40h] BYREF

  v16 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !*((_DWORD *)this + 70) )
  {
    v4 = FLOAT_0_1;
    v5 = (float)*((int *)this + 239);
    if ( v5 == 0.0 )
      v6 = FLOAT_0_1;
    else
      v6 = 1.0 / v5;
    v7 = (float)*((int *)this + 238);
    if ( v7 != 0.0 )
      v4 = 1.0 / v7;
    v8 = CScaleTransformProxy::Update(*((CScaleTransformProxy **)this + 40), v4, v6, 0.0);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1573LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_25;
    }
    v11 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 40), &v17);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x626,
        (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v11);
      v1 = v17;
      goto LABEL_25;
    }
    v1 = v17;
    v8 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v17);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1575LL;
      goto LABEL_23;
    }
    v12 = (struct CBaseImageProxy *)*((_QWORD *)this + 75);
    if ( !v12 )
      v12 = (struct CBaseImageProxy *)*((_QWORD *)this + 73);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
    v8 = CDrawBitmapInstruction::Create(v12, &v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1579LL;
      goto LABEL_23;
    }
    v8 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1580LL;
      goto LABEL_23;
    }
    v13 = CPopInstruction::Create(&v18);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62F,
        (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v13);
      v2 = v18;
      goto LABEL_25;
    }
    v2 = v18;
    v8 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v18);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1584LL;
      goto LABEL_23;
    }
  }
  v9 = 0;
LABEL_25:
  if ( v2 )
    CBaseObject::Release(v2);
  if ( v1 )
    CBaseObject::Release(v1);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  return v9;
}
