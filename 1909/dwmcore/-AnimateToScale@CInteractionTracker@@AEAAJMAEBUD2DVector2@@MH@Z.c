/*
 * XREFs of ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801D7614
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

__int64 __fastcall CInteractionTracker::AnimateToScale(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3,
        float a4,
        bool a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  struct CResource **v9; // r14
  __int64 v10; // rax
  CBaseExpression *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int started; // eax
  struct CResource *v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // rdx
  struct CResource *v19; // [rsp+38h] [rbp-31h] BYREF
  __int128 v20; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v21[3]; // [rsp+50h] [rbp-19h] BYREF
  void *v22[8]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]

  if ( !(unsigned __int8)CInteractionTracker::TransitionToInertia(this, 1LL) )
    return 0LL;
  *((_DWORD *)this + 45) = 0;
  v9 = (struct CResource **)((char *)this + 464);
  if ( *((_QWORD *)this + 58) )
  {
    CExpressionValueStack::CExpressionValueStack(
      (CExpressionValueStack *)v21,
      *(struct CExpressionManager **)(*((_QWORD *)this + 2) + 240LL),
      v7,
      v8);
    v10 = *((_QWORD *)this + 2);
    v11 = *v9;
    a5 = 0;
    v12 = CBaseExpression::CalculateValue(v11, (struct CExpressionValueStack *)v21, *(_QWORD *)(v10 + 384), &a5);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1860,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        (const char *)(unsigned int)v12);
      v21[0] = &CExpressionValueStack::`vftable';
      DynArrayImpl<1>::~DynArrayImpl<1>(v22);
      return v13;
    }
    CResource::UnRegisterNotifierInternal(this, *v9);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 58);
    v21[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(v22);
  }
  v19 = 0LL;
  v20 = LODWORD(a2);
  started = CInteractionTracker::CreateAndStartKeyframeAnimation(this, 2LL, 18LL, &v20, LODWORD(a4), &v19);
  v16 = v19;
  v17 = started;
  if ( started >= 0 )
  {
    started = CResource::RegisterNotifier(this, v19);
    v17 = started;
    if ( started < 0 )
    {
      v18 = 6261LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((char *)this + 464, v16);
    *((_QWORD *)*v9 + 90) = *(_QWORD *)a3;
    return 0LL;
  }
  v18 = 6254LL;
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
