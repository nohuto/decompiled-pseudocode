/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800C2418
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1800C2B40 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x1801E0158 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18005427C (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180072D24 (-_Tidy@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Mi.c)
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180073378 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18009E3AC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C2558 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x180175DE4 (--A-$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  unsigned int v1; // edi
  char *v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  CExpressionValue *v6; // rdi

  *((_BYTE *)this + 524) &= ~1u;
  v1 = 0;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  if ( *((_DWORD *)this + 92) )
  {
    v3 = (char *)this + 344;
    do
    {
      v4 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[](v3, v1);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 184LL))(*v4, 0LL);
      v5 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[](v3, v1);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
      ++v1;
    }
    while ( v1 < *((_DWORD *)this + 92) );
  }
  *((_DWORD *)this + 92) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 344, 8u);
  if ( (*((_BYTE *)this + 525) & 1) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  ReleaseInterface<CCompositionSurfaceInfo>((CGdiSpriteBitmap **)this + 37);
  if ( *((_QWORD *)this + 40) )
    ReleaseInterface<CCompositionSurfaceInfo>((CGdiSpriteBitmap **)this + 40);
  else
    SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>((void **)this + 41);
  std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Tidy((__int64)this + 408);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 50);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 43);
  v6 = (CExpressionValue *)*((_QWORD *)this + 42);
  if ( v6 )
  {
    KeyframeSequence::RemoveAllKeyFrames(*((KeyframeSequence **)this + 42));
    CExpressionValue::~CExpressionValue(v6);
    WPF::ProcessHeapImpl::Free(v6);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 36);
  CBaseExpression::~CBaseExpression(this);
}
