/*
 * XREFs of ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801A0FD8
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801A055C (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?ProcessSetRequestedPositionWithDefaultAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONWITHDEFAULTANIMATION@@@Z @ 0x1801A0D9C (-ProcessSetRequestedPositionWithDefaultAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x180062E4C (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x18019E4E4 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@InteractionTrackerProperty@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18019F108 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4En.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801A3090 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ScrollToPosition(
        CInteractionTracker *this,
        const struct D2DVector3 *a2,
        float a3,
        int a4)
{
  struct CResource **v7; // r14
  __int64 v8; // rax
  CBaseExpression *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v13; // xmm1_4
  unsigned int v14; // xmm0_4
  int started; // eax
  struct CResource *v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // rdx
  bool v19; // [rsp+48h] [rbp-19h] BYREF
  struct CResource *v20; // [rsp+50h] [rbp-11h] BYREF
  int v21[4]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp+7h] BYREF
  void *v23[7]; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !(unsigned __int8)CInteractionTracker::TransitionToInertia(this, 1LL) )
    return 0LL;
  v7 = (struct CResource **)((char *)this + 456);
  *((_DWORD *)this + 45) = a4;
  if ( *((_QWORD *)this + 57) )
  {
    CExpressionValueStack::CExpressionValueStack(
      (CExpressionValueStack *)v22,
      *(struct CExpressionManager **)(*((_QWORD *)this + 2) + 224LL));
    v8 = *((_QWORD *)this + 2);
    v9 = *v7;
    v19 = 0;
    v10 = CBaseExpression::CalculateValue(v9, (struct CExpressionValueStack *)v22, *(_QWORD *)(v8 + 368), &v19);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1747,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        (const char *)(unsigned int)v10);
      v22[0] = &CExpressionValueStack::`vftable';
      DynArrayImpl<1>::~DynArrayImpl<1>(v23);
      return v11;
    }
    CResource::UnRegisterNotifierInternal(this, *v7);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 57);
    v22[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(v23);
  }
  v13 = *((_DWORD *)a2 + 1);
  v21[2] = 0;
  v21[3] = 0;
  v14 = *(_DWORD *)a2;
  v20 = 0LL;
  *(_QWORD *)v21 = __PAIR64__(v13, v14);
  started = CInteractionTracker::CreateAndStartKeyframeAnimation(
              (struct CComposition **)this,
              1u,
              0x34u,
              1,
              (__int128 *)v21,
              SLODWORD(a3),
              (__int64 *)&v20);
  v16 = v20;
  v17 = started;
  if ( started >= 0 )
  {
    started = CResource::RegisterNotifier(this, v20);
    v17 = started;
    if ( started < 0 )
    {
      v18 = 5981LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((__int64 *)this + 57, (__int64)v16);
    return 0LL;
  }
  v18 = 5974LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)(unsigned int)started);
  if ( v16 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v16 + 16LL))(v16);
  return v17;
}
