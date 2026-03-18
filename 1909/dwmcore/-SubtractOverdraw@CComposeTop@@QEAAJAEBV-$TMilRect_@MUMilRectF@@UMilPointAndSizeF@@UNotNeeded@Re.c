/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FE3C8
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ??1CRegionShape@@UEAA@XZ @ 0x18004AF7C (--1CRegionShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18004E5C4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800698D0 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1801FE31C (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  int *v4; // rax
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // rcx
  struct CShape *v8; // rbx
  char v9; // al
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  struct CShape *v12; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-39h] BYREF
  int v14; // [rsp+58h] [rbp-21h] BYREF
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  int v16[4]; // [rsp+A0h] [rbp+27h] BYREF

  v2 = 0;
  v12 = 0LL;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v13[1] = 0LL;
    v14 = 0;
    v15 = 0LL;
    v13[0] = &CRegionShape::`vftable';
    v13[2] = &v14;
    v4 = CMilRectLFromMilRectF(v16, a2);
    CRegionShape::BuildFromRects((__int64)v13, (__int64)v4, 1);
    v6 = CShape::Combine(*(_QWORD *)(a1 + 152), v5, (__int64)v13, a1 + 84, 2, &v12);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC7u, 0LL);
      v8 = v12;
    }
    else
    {
      v8 = v12;
      v9 = ShapeBoundsEmpty(v12);
      v10 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 152);
      if ( v9 )
      {
        if ( v10 )
          (**v10)(v10, 1LL);
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      else
      {
        if ( v10 )
          (**v10)(v10, 1LL);
        *(_QWORD *)(a1 + 152) = v8;
        v8 = 0LL;
      }
    }
    CRegionShape::~CRegionShape((CRegionShape *)v13);
    if ( v8 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v8)(v8, 1LL);
  }
  return v2;
}
