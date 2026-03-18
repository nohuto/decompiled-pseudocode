/*
 * XREFs of ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18019E0A0
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801A055C (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?ProcessSetRequestedScaleWithDefaultAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEWITHDEFAULTANIMATION@@@Z @ 0x1801A0F7C (-ProcessSetRequestedScaleWithDefaultAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBU.c)
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

__int64 __fastcall CInteractionTracker::AnimateToScale(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3,
        float a4,
        int a5)
{
  struct CResource **v7; // rsi
  bool v8; // zf
  __int64 v9; // rax
  CBaseExpression *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int started; // eax
  struct CResource *v15; // rbx
  unsigned int v16; // r14d
  __int64 v17; // rdx
  bool v18; // [rsp+48h] [rbp-41h] BYREF
  struct CResource *v19; // [rsp+50h] [rbp-39h] BYREF
  int v20[4]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-21h] BYREF
  void *v22[9]; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  if ( !(unsigned __int8)CInteractionTracker::TransitionToInertia(this, 1LL) )
    return 0LL;
  v7 = (struct CResource **)((char *)this + 464);
  v8 = *((_QWORD *)this + 58) == 0LL;
  *((_DWORD *)this + 45) = a5;
  if ( !v8 )
  {
    CExpressionValueStack::CExpressionValueStack(
      (CExpressionValueStack *)v21,
      *(struct CExpressionManager **)(*((_QWORD *)this + 2) + 224LL));
    v9 = *((_QWORD *)this + 2);
    v10 = *v7;
    v18 = 0;
    v11 = CBaseExpression::CalculateValue(v10, (struct CExpressionValueStack *)v21, *(_QWORD *)(v9 + 368), &v18);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x178A,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        (const char *)(unsigned int)v11);
      v21[0] = &CExpressionValueStack::`vftable';
      DynArrayImpl<1>::~DynArrayImpl<1>(v22);
      return v12;
    }
    CResource::UnRegisterNotifierInternal(this, *v7);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 58);
    v21[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(v22);
  }
  v20[1] = 0;
  v20[2] = 0;
  v20[3] = 0;
  v19 = 0LL;
  *(float *)v20 = a2;
  started = CInteractionTracker::CreateAndStartKeyframeAnimation(this, 2LL, 18LL, 2LL, v20, LODWORD(a4), &v19);
  v15 = v19;
  v16 = started;
  if ( started >= 0 )
  {
    started = CResource::RegisterNotifier(this, v19);
    v16 = started;
    if ( started < 0 )
    {
      v17 = 6048LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((char *)this + 464, v15);
    *((_QWORD *)*v7 + 88) = *(_QWORD *)a3;
    return 0LL;
  }
  v17 = 6041LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)(unsigned int)started);
  if ( v15 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v15 + 16LL))(v15);
  return v16;
}
