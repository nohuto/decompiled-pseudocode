/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800C0370
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1800C0330 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x180210274 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x180080904 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C0510 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800C05C4 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800C06EC (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  __int64 v1; // rdi
  __int64 *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rbp
  __int64 v8; // rcx

  *((_BYTE *)this + 540) &= ~1u;
  v1 = 0LL;
  for ( *(_QWORD *)this = &CKeyframeAnimation::`vftable';
        (unsigned int)v1 < *((_DWORD *)this + 98);
        v1 = (unsigned int)(v1 + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 46) + 8 * v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 98) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 368, 8u);
  if ( (*((_BYTE *)this + 541) & 1) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  ReleaseInterface<MoveOptimizationInfo>((CGdiSpriteBitmap **)this + 40);
  if ( *((_QWORD *)this + 43) )
    ReleaseInterface<MoveOptimizationInfo>((CGdiSpriteBitmap **)this + 43);
  else
    SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>((char *)this + 352);
  v3 = (__int64 *)*((_QWORD *)this + 53);
  if ( v3 )
  {
    v7 = (__int64 *)*((_QWORD *)this + 54);
    if ( v3 != v7 )
    {
      do
      {
        v8 = *v3;
        if ( *v3 )
        {
          *v3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        ++v3;
      }
      while ( v3 != v7 );
      v3 = (__int64 *)*((_QWORD *)this + 53);
    }
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 55) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 368);
  v4 = (_QWORD *)*((_QWORD *)this + 45);
  if ( v4 )
  {
    KeyframeSequence::RemoveAllKeyFrames(*((KeyframeSequence **)this + 45));
    v5 = v4[8];
    if ( v5 )
    {
      v4[8] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    operator delete(v4);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 39);
  CBaseExpression::~CBaseExpression(this);
}
