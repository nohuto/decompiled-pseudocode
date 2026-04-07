/*
 * XREFs of ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180003804
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180022C10 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x18009BA5C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_ValidateDCompVisual(CAnimatedTransitionVisual *this)
{
  CBaseObject *v1; // rbx
  int v3; // eax
  __int64 v4; // rax
  LONG v5; // r8d
  CVisual *v6; // rcx
  unsigned int v7; // esi
  struct CResource *BrushNoRef; // rax
  int v10; // eax
  __int64 v11; // rdx
  float v12; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct tagPOINT v14; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  v14 = 0LL;
  v3 = *((_DWORD *)this + 22);
  if ( (v3 & 0x1000) == 0 && (v3 & 0x2000) == 0 && (v3 & 0x20) == 0 )
    goto LABEL_6;
  if ( *((_BYTE *)this + 975) )
  {
    v4 = *((_QWORD *)this + 91);
    v5 = *((_DWORD *)this + 215);
    v14.x = *((_DWORD *)this + 214);
    v14.y = v5;
    v6 = **(CVisual ***)(v4 + 48);
    if ( *((_DWORD *)v6 + 28) != v14.x || *((_DWORD *)v6 + 29) != v5 )
      CVisual::SetOffset(v6, &v14);
    goto LABEL_5;
  }
  if ( (v3 & 0x2000) != 0 )
    CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 91));
  if ( *(_DWORD *)(*((_QWORD *)this + 91) + 272LL) )
    goto LABEL_5;
  v12 = (float)*((int *)this + 216);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 89) + 16LL) + 696LL))(
    *(_QWORD *)(*((_QWORD *)this + 89) + 16LL),
    *(unsigned int *)(*((_QWORD *)this + 89) + 24LL));
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  v10 = CDrawGeometryInstruction::Create(
          BrushNoRef,
          *((struct CResource **)this + 89),
          (struct CDrawGeometryInstruction **)&v14);
  v1 = (CBaseObject *)v14;
  v7 = v10;
  if ( v10 >= 0 )
  {
    v10 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 91), *(struct CRenderDataInstruction **)&v14);
    v7 = v10;
    if ( v10 >= 0 )
    {
LABEL_5:
      *((_DWORD *)this + 22) &= 0xFFFFCFDF;
LABEL_6:
      v7 = 0;
      goto LABEL_7;
    }
    v11 = 1447LL;
  }
  else
  {
    v11 = 1446LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v10,
    SLODWORD(v12));
LABEL_7:
  if ( v1 )
    CBaseObject::Release(v1);
  return v7;
}
