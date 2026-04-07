/*
 * XREFs of ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009C59C
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022F84 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180010A80 (-Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180014F80 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180031E30 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  __int64 v13; // rax
  __int64 v14; // rdx
  struct CDrawTileImageInstruction *v16; // [rsp+30h] [rbp-50h] BYREF
  CBaseObject *v17; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v1 = *((_DWORD *)this + 238);
  v2 = 0LL;
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 214));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 206));
  v16 = 0LL;
  rc.left = 0;
  rc.top = 0;
  rc.right = v1;
  v6 = *((_DWORD *)this + 239);
  v17 = 0LL;
  rc.bottom = v6;
  v7 = RoundToNearestInt((float)(_mm_cvtepi32_ps(v3).m128_f32[0] + *((float *)this + 188)) - _mm_cvtepi32_ps(v5).m128_f32[0]);
  v8 = RoundToNearestInt((float)((float)*((int *)this + 215) + *((float *)this + 189)) - (float)*((int *)this + 207));
  OffsetRect(&rc, v7, v8);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  v9 = CDrawTileImageInstruction::Create(
         *((struct CResource **)this + 73),
         &rc,
         (const struct tagPOINT *)this + 118,
         *((float *)this + 186),
         &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1181LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_14;
  }
  v9 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1182LL;
    goto LABEL_12;
  }
  rcSrc2 = *(RECT *)((char *)this + 824);
  OffsetRect(&rcSrc2, v7, v8);
  IntersectRect(&rcDst, (const RECT *)((char *)this + 840), &rcSrc2);
  v12 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v17);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A8,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v12);
    v2 = v17;
    goto LABEL_14;
  }
  v2 = v17;
  v13 = *((_QWORD *)this + 3);
  if ( v13 )
    v14 = *(unsigned int *)(v13 + 24);
  else
    v14 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                          + 400LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         v14,
         *((unsigned int *)v17 + 6));
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1197LL;
    goto LABEL_12;
  }
  v10 = 0;
LABEL_14:
  if ( v2 )
    CBaseObject::Release(v2);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  return v10;
}
