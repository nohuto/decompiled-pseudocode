/*
 * XREFs of ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800A6338
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A50A8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A5AFC (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180002040 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002AC4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021984 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180023738 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18002BFA0 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CScreenRotation::UpdateBackgroundInstructionsAndSize(
        CScreenRotation *this,
        const struct tagSIZE *a2,
        char a3)
{
  CBaseObject *v4; // rbx
  LONG cy; // eax
  CBaseObject *v6; // rdi
  __int64 v8; // rax
  LONG v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  struct CBaseLegacyMilBrushProxy *v15; // rcx
  int v16; // eax
  __int128 v17; // xmm0
  struct CSolidRectangleInstruction *v18; // rdx
  struct CSolidRectangleInstruction *v20; // [rsp+20h] [rbp-40h] BYREF
  CBaseObject *v21; // [rsp+28h] [rbp-38h] BYREF
  struct tagRECT v22; // [rsp+30h] [rbp-30h] BYREF
  CBaseObject *v23[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v22.left = a2->cx;
  v4 = 0LL;
  cy = a2->cy;
  v6 = 0LL;
  v20 = 0LL;
  v22.top = cy;
  v8 = *(_QWORD *)this;
  v21 = 0LL;
  v23[0] = 0LL;
  (*(void (__fastcall **)(CScreenRotation *, struct tagRECT *))(v8 + 96))(this, &v22);
  CRenderDataVisual::ClearInstructions(this);
  if ( a3 )
  {
    v10 = *((_DWORD *)this + 30);
    v22.left = 0;
    v22.top = 0;
    v22.right = v10;
    v22.bottom = *((_DWORD *)this + 31);
    v11 = ResourceHelper::CreateRectangleGeometry(&v22, v23);
    v6 = v23[0];
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 38LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"windows\\dwm\\udwm\\screenrotation.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_16;
    }
    v14 = *((_QWORD *)this + 39);
    v15 = *(struct CBaseLegacyMilBrushProxy **)(v14 + 608);
    if ( !v15 )
      v15 = *(struct CBaseLegacyMilBrushProxy **)(v14 + 592);
    v16 = CDrawGeometryInstruction::Create(v15, v23[0], &v21);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27,
        (__int64)"windows\\dwm\\udwm\\screenrotation.cpp",
        (const char *)(unsigned int)v16);
      v4 = v21;
      goto LABEL_16;
    }
    v4 = v21;
    v11 = CRenderDataVisual::AddInstruction(this, v21);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 40LL;
      goto LABEL_14;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v20);
    v11 = CSolidRectangleInstruction::Create(&v20);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 45LL;
      goto LABEL_14;
    }
    v17 = *(_OWORD *)((char *)this + 364);
    v18 = v20;
    v23[0] = 0LL;
    *((_OWORD *)v20 + 1) = v17;
    *(float *)&v17 = (float)a2->cy;
    *(float *)&v23[1] = (float)a2->cx;
    HIDWORD(v23[1]) = v17;
    *((_OWORD *)v18 + 2) = *(_OWORD *)v23;
    v11 = CRenderDataVisual::AddInstruction(this, v18);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 54LL;
      goto LABEL_14;
    }
  }
  v12 = 0;
LABEL_16:
  if ( v6 )
    CBaseObject::Release(v6);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v20);
  if ( v4 )
    CBaseObject::Release(v4);
  return v12;
}
