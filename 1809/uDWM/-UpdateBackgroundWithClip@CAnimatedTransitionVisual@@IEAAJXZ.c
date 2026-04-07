/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009C398
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022F84 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180013A04 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180014F80 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180031E30 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x18009BA5C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // r10d
  const RECT *v2; // r12
  struct CResource **v3; // r15
  int v4; // edx
  CBaseObject *v5; // rbx
  CBaseObject *v6; // rdi
  struct tagRECT v7; // xmm0
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 left; // rcx
  int RectangleGeometry; // eax
  unsigned int v14; // esi
  __int64 v15; // rdx
  struct CResource *BrushNoRef; // rax
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  struct CResource **v24; // [rsp+20h] [rbp-50h]
  CBaseObject *v25; // [rsp+30h] [rbp-40h] BYREF
  struct CResource *v26; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v1 = *((_DWORD *)this + 211);
  v2 = (const RECT *)((char *)this + 840);
  v3 = (struct CResource **)((char *)this + 712);
  v4 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(struct tagRECT *)((char *)this + 856);
  v8 = *((_DWORD *)this + 213) - v1;
  v26 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  if ( v8 >= 0 )
    v9 = (unsigned int)v8;
  v24 = (struct CResource **)((char *)this + 712);
  v10 = 0LL;
  left = (unsigned int)v2->left;
  rc = v7;
  if ( v4 >= 0 )
    v10 = (unsigned int)v4;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(left, v1, v10, v9, v24);
  v14 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v15 = 1124LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)RectangleGeometry);
    goto LABEL_20;
  }
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  v17 = CDrawGeometryInstruction::Create(BrushNoRef, *v3, &v25);
  v14 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46A,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v17);
    v6 = v25;
    goto LABEL_20;
  }
  v6 = v25;
  RectangleGeometry = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v25);
  v14 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v15 = 1132LL;
    goto LABEL_18;
  }
  v18 = RoundToNearestInt(*((float *)this + 189));
  v19 = RoundToNearestInt(*((float *)this + 188));
  OffsetRect(&rc, v19, v18);
  IntersectRect(&rcDst, v2, &rc);
  v20 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v26);
  v14 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x472,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v20);
    v5 = v26;
    goto LABEL_20;
  }
  v5 = v26;
  v21 = *((_QWORD *)this + 3);
  if ( v21 )
    v22 = *(unsigned int *)(v21 + 24);
  else
    v22 = 0LL;
  RectangleGeometry = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 5)
                                                                         + 400LL))(
                        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                        v22,
                        *((unsigned int *)v26 + 6));
  v14 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v15 = 1143LL;
    goto LABEL_18;
  }
  v14 = 0;
LABEL_20:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v5 )
    CBaseObject::Release(v5);
  return v14;
}
