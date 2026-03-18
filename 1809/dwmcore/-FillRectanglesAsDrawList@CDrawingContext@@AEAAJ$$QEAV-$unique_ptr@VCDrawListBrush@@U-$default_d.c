/*
 * XREFs of ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580
 * Callers:
 *     ?FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVMILMatrix3x2@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800B1FB4 (-FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVM.c)
 *     ?DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180162818 (-DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801650A4 (-FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18002777C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180028E60 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C3B8 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18005FD68 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800B23D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800B2A90 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ?size@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEBA_KXZ @ 0x1800B3A90 (-size@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@d.c)
 *     ?last@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800B3AD0 (-last@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800B3B10 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800B3BB0 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800B3C40 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE4CC (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEEB8 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesAsDrawList(
        CDrawingContext *this,
        __int64 **a2,
        _OWORD *a3,
        __int128 *a4)
{
  __int64 *v5; // rcx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64 *); // rax
  char v11; // al
  int v12; // ecx
  int Current; // eax
  struct CThreadContext *v14; // rdx
  char *v15; // rcx
  int v16; // r8d
  __int64 *v17; // rax
  int v18; // r14d
  unsigned int v19; // ecx
  __int64 (__fastcall ***v20)(_QWORD, __int64); // rdx
  int v21; // eax
  int DrawList; // eax
  unsigned int v23; // ecx
  _DWORD *v24; // rdi
  int v25; // eax
  unsigned int v26; // ecx
  CDrawListCache **v27; // r13
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  CDrawListCache *v31; // rbx
  int v32; // eax
  CDrawListCache *v33; // r13
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rbx
  _QWORD *v39; // r12
  __int64 v40; // rcx
  unsigned int v41; // ebx
  void (__fastcall ***v42)(_QWORD, __int64); // rcx
  unsigned int *v43; // rdi
  __int64 v44; // rbx
  struct CThreadContext *v46[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v47; // [rsp+40h] [rbp-C0h] BYREF
  int v48; // [rsp+50h] [rbp-B0h]
  int v49; // [rsp+80h] [rbp-80h]
  __int16 v50; // [rsp+9Ch] [rbp-64h]
  char v51; // [rsp+9Eh] [rbp-62h]
  _QWORD v52[2]; // [rsp+A0h] [rbp-60h] BYREF
  int i; // [rsp+B0h] [rbp-50h]
  __int128 v54; // [rsp+B4h] [rbp-4Ch]
  __int64 (__fastcall ***v55)(_QWORD, __int64); // [rsp+C8h] [rbp-38h]
  __int128 v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  unsigned int v58; // [rsp+E8h] [rbp-18h] BYREF
  char v59; // [rsp+ECh] [rbp-14h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  v52[0] = this;
  v5 = *a2;
  v54 = _xmm;
  v52[1] = 0LL;
  i = 0;
  v56 = 0LL;
  v55 = 0LL;
  v57 = 0LL;
  v58 = 0;
  v59 = 0;
  v9 = *v5;
  v47 = 0LL;
  v48 = 0;
  v50 = 1;
  v10 = *(__int64 (__fastcall **)(__int64 *))(v9 + 24);
  v51 = 0;
  v11 = v10(v5);
  v12 = 0;
  if ( v11 )
    v12 = 512;
  i = v12;
  Current = CThreadContext::GetCurrent(v46);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v14 = v46[0];
  v15 = 0LL;
  v16 = *((_DWORD *)v46[0] + 63);
  if ( v16 )
  {
    v15 = (char *)*((_QWORD *)v46[0] + 32);
    *((_QWORD *)v46[0] + 32) = *(_QWORD *)v15;
    *((_DWORD *)v14 + 63) = v16 - 1;
  }
  if ( v15 || (v15 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL)) != 0LL )
  {
    *(_OWORD *)(v15 + 8) = _xmm;
    v15[52] = 0;
    *(_QWORD *)v15 = &CMultiPrimitiveDrawListBrush::`vftable';
    *((_QWORD *)v15 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v17 = *a2;
    *a2 = 0LL;
    *((_QWORD *)v15 + 7) = v17;
    *((_OWORD *)v15 + 4) = *a3;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v20 = v55;
    v59 = 0;
    v55 = (__int64 (__fastcall ***)(_QWORD, __int64))v15;
    v54 = *a4;
    if ( v20 )
      std::default_delete<CShape>::operator()((__int64)v15, v20);
    v21 = v58;
    if ( v58 <= 1 )
      v21 = 1;
    v58 = v21;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v52,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v47,
                 (CDrawingContext *)((char *)this + 3744));
    v18 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, DrawList, 0x639u);
    }
    else
    {
      v24 = (_DWORD *)((char *)this + 3264);
      *(float *)v46 = FLOAT_1_0;
      v25 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 816, v46);
      v18 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x63Cu);
      }
      else
      {
        v27 = (CDrawListCache **)((char *)this + 6024);
        if ( *((_QWORD *)this + 753)
          || (*v27 = 0LL, v28 = CDrawListCache::Create((struct CDrawListCache **)this + 753), v18 = v28, v28 >= 0) )
        {
          v31 = *v27;
          CDrawListCache::Update(
            *v27,
            *(_QWORD *)(*((_QWORD *)this + 4) + 368LL),
            *((struct CDrawListEntry ***)this + 473),
            (__int64)(*((_QWORD *)this + 474) - *((_QWORD *)this + 473)) >> 3,
            (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 63) != 0),
            *((_DWORD *)this + 960) != 0);
          if ( *((char *)v31 + 88) < 0 )
          {
            v49 = 0;
            CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)&v47);
            CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v47, (float *)v31 + 14, (float *)v31 + 15);
          }
          v32 = CDrawingContext::EmitDrawListCache(this, *v27);
          v18 = v32;
          if ( v32 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v32, 0x515u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x511u);
        }
        v33 = *v27;
        if ( v33 && *((_QWORD *)v33 + 3) )
        {
          if ( *((_DWORD *)v33 + 4) == 1 )
          {
            ++dword_180308190;
          }
          else if ( *((_DWORD *)v33 + 4) == 2 )
          {
            ++dword_18030819C;
          }
          *((_QWORD *)v33 + 3) = 0LL;
          *((_DWORD *)v33 + 4) = 0;
          v34 = (_QWORD *)detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)v33 + 32);
          v35 = detail::pointer_buffer_impl<CDrawListEntry *>::last((char *)v33 + 32);
          while ( v34 != (_QWORD *)v35 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v34 + 8LL))(*v34);
            ++v34;
          }
          v36 = detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::size((char *)v33 + 32);
          if ( v36 )
            detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(
              (char *)v33 + 32,
              v37,
              v36);
          *((_BYTE *)v33 + 100) = 0;
          v24 = (_DWORD *)((char *)this + 3264);
        }
        if ( *v24 )
          --*v24;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v18, 0x641u);
      }
    }
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0x22u);
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x633u);
  }
  v38 = (_QWORD *)*((_QWORD *)this + 473);
  v39 = (_QWORD *)*((_QWORD *)this + 474);
  while ( v38 != v39 )
  {
    if ( *v38 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 8LL))(*v38);
      *v38 = 0LL;
    }
    ++v38;
  }
  if ( (__int64)(*((_QWORD *)this + 474) - *((_QWORD *)this + 473)) >> 3 )
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region((char *)this + 3784);
  *((_DWORD *)this + 960) = 0;
  v40 = *((_QWORD *)this + 472);
  if ( v40 )
  {
    *((_QWORD *)this + 472) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
  }
  v41 = 0;
  v54 = _xmm;
  v59 = 0;
  for ( i = 0; v41 < v58; ++v41 )
  {
    v42 = (void (__fastcall ***)(_QWORD, __int64))(&v55)[v41];
    (&v55)[v41] = 0LL;
    if ( v42 )
      (**v42)(v42, 1LL);
  }
  v58 = 0;
  v43 = &v58;
  v44 = 4LL;
  do
  {
    v43 -= 2;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((__int64 (__fastcall ****)(_QWORD, __int64))v43);
    --v44;
  }
  while ( v44 );
  return (unsigned int)v18;
}
