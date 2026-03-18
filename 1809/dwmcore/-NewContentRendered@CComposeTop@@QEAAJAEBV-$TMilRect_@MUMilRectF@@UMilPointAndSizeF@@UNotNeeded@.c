/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDD4C
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18005D180 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18015B2EC (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDC5C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009266C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B9D4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B10A8 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1801BDB4C (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::NewContentRendered(CComposeTop *this, __int64 a2)
{
  int *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct CShape *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  struct CShape *v15; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-39h] BYREF
  int v17; // [rsp+58h] [rbp-21h] BYREF
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  int v19[4]; // [rsp+A0h] [rbp+27h] BYREF

  v15 = 0LL;
  v16[1] = 0LL;
  v17 = 0;
  v18 = 0LL;
  v16[0] = &CRegionShape::`vftable';
  v16[2] = &v17;
  v3 = CMilRectLFromMilRectF(v19, a2);
  CRegionShape::BuildFromRects((__int64)v16, (__int64)v3, 1);
  if ( *((_QWORD *)this + 19) )
    goto LABEL_7;
  v5 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
  v7 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x60uLL);
    v7[1] = 0LL;
    v6 = (__int64)(v7 + 3);
    *v7 = &CRegionShape::`vftable';
    v7[2] = v7 + 3;
    *((_DWORD *)v7 + 6) = 0;
    v7[11] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 19) = v7;
  if ( v7 )
  {
LABEL_7:
    v9 = CShape::Combine(*((CShape **)this + 1), v4, (CShape *)v16, (float *)this + 21, 1, &v15);
    v11 = v15;
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x9Bu);
    }
    else
    {
      v12 = CComposeTop::AddShapeToLifetime(this, v15);
      v8 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xA1u);
    }
    if ( v11 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v11)(v11, 1LL);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x92u);
  }
  CRegionShape::~CRegionShape((CRegionShape *)v16);
  return v8;
}
