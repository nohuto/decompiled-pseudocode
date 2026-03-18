/*
 * XREFs of ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x180234378
 * Callers:
 *     ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180222EE4 (--0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CMatrixStack2D::Clear(CMatrixStack2D *this)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v3; // rcx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  *((_DWORD *)this + 6) = 0;
  v5 = 0LL;
  v4 = _xmm;
  if ( *((_DWORD *)this + 5) )
  {
    v1 = *(_QWORD *)this;
    *(_OWORD *)v1 = _xmm;
    *(_QWORD *)(v1 + 16) = v5;
    *((_DWORD *)this + 6) = 1;
  }
  else
  {
    v2 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 24, 1, &v4);
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xC0u);
  }
}
