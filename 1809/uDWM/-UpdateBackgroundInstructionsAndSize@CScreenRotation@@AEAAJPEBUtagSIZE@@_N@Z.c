/*
 * XREFs of ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800A1B64
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A08E8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A132C (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180004DDC (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180031E30 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  struct CResource *v15; // rcx
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
      v13 = 39LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"windows\\dwm\\udwm\\screenrotation.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_16;
    }
    v14 = *((_QWORD *)this + 39);
    v15 = *(struct CResource **)(v14 + 608);
    if ( !v15 )
      v15 = *(struct CResource **)(v14 + 592);
    v16 = CDrawGeometryInstruction::Create(v15, v23[0], &v21);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28,
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
      v13 = 41LL;
      goto LABEL_14;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v20);
    v11 = CSolidRectangleInstruction::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v20);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 46LL;
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
      v13 = 55LL;
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
