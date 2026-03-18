/*
 * XREFs of ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801DA5E8
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801D9BF4 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180075BC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800A75F0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800E29EC (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801D7A54 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x1801D8670 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DC840 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ScrollToPosition(
        CInteractionTracker *this,
        const struct D2DVector3 *a2,
        float a3,
        int a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  struct CResource **v8; // r14
  __int64 v9; // rax
  CBaseExpression *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // xmm1_4
  int v15; // xmm0_4
  int started; // eax
  struct CResource *v17; // rbx
  unsigned int v18; // esi
  __int64 v19; // rdx
  struct CResource *v20; // [rsp+38h] [rbp-19h] BYREF
  int v21; // [rsp+40h] [rbp-11h] BYREF
  __int64 v22; // [rsp+44h] [rbp-Dh]
  int v23; // [rsp+4Ch] [rbp-5h]
  _QWORD v24[3]; // [rsp+50h] [rbp-1h] BYREF
  void *v25[6]; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  int v27; // [rsp+D0h] [rbp+7Fh] BYREF

  v27 = a4;
  if ( !(unsigned __int8)CInteractionTracker::TransitionToInertia(this, 1LL) )
    return 0LL;
  *((_DWORD *)this + 45) = 0;
  v8 = (struct CResource **)((char *)this + 456);
  if ( *((_QWORD *)this + 57) )
  {
    CExpressionValueStack::CExpressionValueStack(
      (CExpressionValueStack *)v24,
      *(struct CExpressionManager **)(*((_QWORD *)this + 2) + 240LL),
      v6,
      v7);
    v9 = *((_QWORD *)this + 2);
    v10 = *v8;
    LOBYTE(v27) = 0;
    v11 = CBaseExpression::CalculateValue(v10, (struct CExpressionValueStack *)v24, *(_QWORD *)(v9 + 384), (bool *)&v27);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181E,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        (const char *)(unsigned int)v11);
      v24[0] = &CExpressionValueStack::`vftable';
      DynArrayImpl<1>::~DynArrayImpl<1>(v25);
      return v12;
    }
    CResource::UnRegisterNotifierInternal(this, *v8);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 57);
    v24[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(v25);
  }
  v14 = *((_DWORD *)a2 + 1);
  v23 = 0;
  v15 = *(_DWORD *)a2;
  v20 = 0LL;
  v21 = v15;
  v22 = v14;
  started = CInteractionTracker::CreateAndStartKeyframeAnimation(
              (struct CComposition **)this,
              1u,
              0x34u,
              (const char *)&v21,
              SLODWORD(a3),
              (__int64 *)&v20);
  v17 = v20;
  v18 = started;
  if ( started >= 0 )
  {
    started = CResource::RegisterNotifier(this, v20);
    v18 = started;
    if ( started < 0 )
    {
      v19 = 6195LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((__int64 *)this + 57, (__int64)v17);
    return 0LL;
  }
  v19 = 6188LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)(unsigned int)started);
  if ( v17 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v17 + 16LL))(v17);
  return v18;
}
