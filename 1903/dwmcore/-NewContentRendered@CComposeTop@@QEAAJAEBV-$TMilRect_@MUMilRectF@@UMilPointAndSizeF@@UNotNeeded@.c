/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FF67C
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800B9890 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A94C4 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FF57C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800282CC (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18003A3DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180050470 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD2BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1801FF460 (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::NewContentRendered(CComposeTop *this, __int64 a2)
{
  int *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  unsigned int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rcx
  struct CShape *v11; // rdi
  signed int v12; // eax
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
  v5 = DefaultHeap::Alloc(0x60uLL);
  v7 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x60uLL);
    *v7 = &CRegionShape::`vftable';
    v6 = (__int64)(v7 + 3);
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
    v9 = CShape::Combine(*((_QWORD *)this + 1), v4, (__int64)v16, (__int64)this + 84, 1, &v15);
    v11 = v15;
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x98u, 0LL);
    }
    else
    {
      v12 = CComposeTop::AddShapeToLifetime(this, v15);
      v8 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x9Eu, 0LL);
    }
    if ( v11 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v11)(v11, 1LL);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x8007000E, 0x8Fu, 0LL);
  }
  CRegionShape::~CRegionShape((CRegionShape *)v16);
  return v8;
}
