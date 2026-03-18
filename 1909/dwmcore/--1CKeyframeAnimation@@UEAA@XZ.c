/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800A23BC
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1800A1350 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18020EB64 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800A1220 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A1390 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x1800A4950 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800A7500 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A7ED0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800D3A68 (-_Tidy@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x18016A4FC (--A-$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  unsigned int v1; // edi
  char *v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  CExpressionValue *v6; // rdi

  *((_BYTE *)this + 540) &= ~1u;
  v1 = 0;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  if ( *((_DWORD *)this + 98) )
  {
    v3 = (char *)this + 368;
    do
    {
      v4 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[](v3, v1);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 224LL))(*v4, 0LL);
      v5 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[](v3, v1);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
      ++v1;
    }
    while ( v1 < *((_DWORD *)this + 98) );
  }
  *((_DWORD *)this + 98) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 368, 8LL);
  if ( (*((_BYTE *)this + 541) & 1) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  ReleaseInterface<MoveOptimizationInfo>((char *)this + 320);
  if ( *((_QWORD *)this + 43) )
    ReleaseInterface<MoveOptimizationInfo>((char *)this + 344);
  else
    SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>((void **)this + 44);
  std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Tidy((char *)this + 424);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 368);
  v6 = (CExpressionValue *)*((_QWORD *)this + 45);
  if ( v6 )
  {
    KeyframeSequence::RemoveAllKeyFrames(*((KeyframeSequence **)this + 45));
    CExpressionValue::~CExpressionValue(v6);
    operator delete(v6);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 39);
  CBaseExpression::~CBaseExpression(this);
}
