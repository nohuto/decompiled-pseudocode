/*
 * XREFs of ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180098B60
 * Callers:
 *     ?FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVMILMatrix3x2@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800957C0 (-FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVM.c)
 *     ?DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016B9C4 (-DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016DE28 (-FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18003ECD0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180066860 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800819F0 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x180095C40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180095D04 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180095ECC (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180096860 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180097560 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180099050 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x180099088 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB6D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180181404 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesAsDrawList(
        CDrawingContext *this,
        __int64 **a2,
        _OWORD *a3,
        __int128 *a4)
{
  __int64 *v5; // rcx
  __int64 v9; // rax
  unsigned __int8 (__fastcall *v10)(__int64 *); // rax
  CMultiPrimitiveDrawListBrush *v11; // rbx
  signed int v12; // r14d
  int Current; // eax
  __int64 v14; // r8
  struct CThreadContext *v15; // rdx
  char *v16; // rcx
  int v17; // r8d
  __int64 *v18; // rax
  __int64 v19; // rcx
  CMultiPrimitiveDrawListBrush *v20; // rdx
  signed int DrawList; // eax
  __int64 v22; // rcx
  signed int v23; // eax
  __int64 v24; // rcx
  __int64 *v25; // r15
  __int64 v26; // rbx
  signed int v27; // eax
  __int64 v28; // r15
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdi
  unsigned __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rbx
  const char *v37; // rcx
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  _QWORD *v44; // rbx
  _QWORD *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  CMultiPrimitiveDrawListBrush *v48; // rcx
  unsigned int v49; // ebx
  unsigned int *v50; // rdi
  __int64 v51; // rbx
  __int64 (__fastcall ***v52)(_QWORD, __int64); // rdx
  signed int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  enum D2D1_ANTIALIAS_MODE v57; // [rsp+20h] [rbp-E0h]
  void *v58; // [rsp+28h] [rbp-D8h]
  CMultiPrimitiveDrawListBrush *v59; // [rsp+30h] [rbp-D0h]
  struct CThreadContext *v60; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v61; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  __int128 v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+70h] [rbp-90h]
  __int128 v65; // [rsp+80h] [rbp-80h] BYREF
  int v66; // [rsp+90h] [rbp-70h]
  int v67; // [rsp+C0h] [rbp-40h]
  __int16 v68; // [rsp+DCh] [rbp-24h]
  char v69; // [rsp+DEh] [rbp-22h]
  _QWORD v70[2]; // [rsp+E0h] [rbp-20h] BYREF
  int i; // [rsp+F0h] [rbp-10h]
  __int128 v72; // [rsp+F4h] [rbp-Ch]
  CMultiPrimitiveDrawListBrush *v73; // [rsp+108h] [rbp+8h]
  __int128 v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+20h]
  unsigned int v76; // [rsp+128h] [rbp+28h] BYREF
  char v77; // [rsp+12Ch] [rbp+2Ch]
  void *retaddr; // [rsp+188h] [rbp+88h]

  v70[0] = this;
  v5 = *a2;
  v72 = _xmm;
  v70[1] = 0LL;
  i = 0;
  v74 = 0LL;
  v73 = 0LL;
  v75 = 0LL;
  v76 = 0;
  v77 = 0;
  v9 = *v5;
  v65 = 0LL;
  v66 = 0;
  v68 = 1;
  v10 = *(unsigned __int8 (__fastcall **)(__int64 *))(v9 + 24);
  v69 = 0;
  if ( v10(v5) )
    i = 512;
  v11 = 0LL;
  v12 = 0;
  Current = CThreadContext::GetCurrent(&v60);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr, v14);
  v15 = v60;
  v16 = 0LL;
  v17 = *((_DWORD *)v60 + 67);
  if ( v17 )
  {
    v16 = (char *)*((_QWORD *)v60 + 34);
    *((_QWORD *)v60 + 34) = *(_QWORD *)v16;
    *((_DWORD *)v15 + 67) = v17 - 1;
  }
  if ( v16 || (v16 = (char *)DefaultHeap::Alloc(0x60uLL)) != 0LL )
  {
    *(_OWORD *)(v16 + 8) = _xmm;
    v16[52] = 0;
    v16[64] = 0;
    *(_QWORD *)v16 = &CMultiPrimitiveDrawListBrush::`vftable';
    v11 = (CMultiPrimitiveDrawListBrush *)v16;
    *((_QWORD *)v16 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v18 = *a2;
    *a2 = 0LL;
    *((_QWORD *)v16 + 9) = v18;
    *((_OWORD *)v16 + 5) = *a3;
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x8007000E, 0x1Fu, 0LL);
  }
  v19 = 0LL;
  v59 = v11;
  if ( v12 < 0 )
  {
    v57 = 1584;
    goto LABEL_76;
  }
  v20 = v73;
  v59 = 0LL;
  v73 = v11;
  v72 = *a4;
  if ( v20 )
    std::default_delete<CShape>::operator()(0LL, (__int64 (__fastcall ***)(_QWORD, __int64))v20);
  if ( v76 <= 1 )
    v76 = 1;
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               (CBrushDrawListGenerator *)v70,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v65,
               (CDrawingContext *)((char *)this + 3744));
  v12 = DrawList;
  if ( DrawList < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, DrawList, 0x636u, 0LL);
    goto LABEL_37;
  }
  LODWORD(v60) = (_DWORD)FLOAT_1_0;
  v23 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 816, &v60);
  v12 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x639u, 0LL);
    goto LABEL_37;
  }
  v25 = (__int64 *)((char *)this + 6032);
  if ( *((_QWORD *)this + 754)
    || (*v25 = 0LL, v54 = CDrawListCache::Create((struct CDrawListCache **)this + 754), v12 = v54, v54 >= 0) )
  {
    v26 = *v25;
    LOBYTE(v58) = *((_DWORD *)this + 960) != 0;
    CDrawListCache::Update(
      *v25,
      *(struct CDrawListEntry **)(*((_QWORD *)this + 4) + 384LL),
      *((struct CDrawListEntry ***)this + 473),
      (enum D2D1_ANTIALIAS_MODE)((__int64)(*((_QWORD *)this + 474) - *((_QWORD *)this + 473)) >> 3),
      *((_DWORD *)this + 63) != 0,
      (__int64)v58);
    if ( *(char *)(v26 + 88) < 0 )
    {
      v67 = 0;
      CDrawingContext::GetWorldTransform(this, (struct CMILMatrix *)&v65);
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v65, (float *)(v26 + 56), (float *)(v26 + 60));
    }
    v27 = CDrawingContext::EmitDrawListCache(this, (struct CDrawListCache *)*v25);
    v12 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v27, 0x527u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x523u, 0LL);
  }
  v28 = *v25;
  if ( v28 && *(_QWORD *)(v28 + 24) )
  {
    if ( *(_DWORD *)(v28 + 16) == 1 )
    {
      ++dword_180339960;
    }
    else if ( *(_DWORD *)(v28 + 16) == 2 )
    {
      ++dword_18033996C;
    }
    *(_QWORD *)(v28 + 24) = 0LL;
    *(_DWORD *)(v28 + 16) = 0;
    v29 = (_QWORD *)detail::pointer_buffer_impl<CDrawListEntry *>::first(v28 + 32);
    v30 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v28 + 32);
    v31 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v28 + 32) + 8 * v30;
    while ( v29 != (_QWORD *)v31 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v29 + 8LL))(*v29);
      ++v29;
    }
    v32 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v28 + 32);
    v33 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v28 + 32) + 8 * v32;
    v34 = (v33 - detail::pointer_buffer_impl<CDrawListEntry *>::first(v28 + 32)) >> 3;
    if ( v34 )
    {
      v35 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v28 + 32);
      v36 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v28 + 32) + 8 * v35;
      v38 = (v36 - detail::pointer_buffer_impl<CDrawListEntry *>::first(v28 + 32)) >> 3;
      if ( v34 > v38 )
        std::_Xoverflow_error(v37);
      v39 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v28 + 32);
      *(_QWORD *)&v61 = v39;
      *((_QWORD *)&v61 + 1) = v38;
      v62 = 0LL;
      if ( v34 != v38 )
      {
        v63 = v61;
        v64 = v62;
        std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
          &v61,
          v39 + 8 * v34,
          v39 + 8 * v38,
          &v63);
      }
      v41 = *(_DWORD *)(v28 + 32) & 3;
      if ( v41 == 1 )
      {
        v42 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v28 + 32);
        *(_QWORD *)(v42 - 16) -= v34;
      }
      else
      {
        if ( !v41 )
          goto LABEL_58;
        v56 = v41 - 2;
        if ( v56 )
        {
          if ( v56 != 1 )
            ModuleFailFastForHRESULT(2147549183LL, retaddr, v40);
          if ( v34 != -1LL )
LABEL_58:
            *(_QWORD *)(v28 + 32) = 2LL;
        }
      }
    }
    *(_BYTE *)(v28 + 100) = 0;
  }
  v43 = *((_DWORD *)this + 816);
  if ( v43 )
    *((_DWORD *)this + 816) = v43 - 1;
  if ( v12 < 0 )
  {
    v57 = 1598;
LABEL_76:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v12, v57, 0LL);
  }
LABEL_37:
  v44 = (_QWORD *)*((_QWORD *)this + 473);
  v45 = (_QWORD *)*((_QWORD *)this + 474);
  while ( v44 != v45 )
  {
    if ( *v44 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v44 + 8LL))(*v44);
      *v44 = 0LL;
    }
    ++v44;
  }
  v46 = (__int64)(*((_QWORD *)this + 474) - *((_QWORD *)this + 473)) >> 3;
  if ( v46 )
    *((_QWORD *)this + 474) -= 8 * v46;
  *((_DWORD *)this + 960) = 0;
  v47 = *((_QWORD *)this + 472);
  if ( v47 )
  {
    *((_QWORD *)this + 472) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
  }
  v48 = v59;
  if ( v59 )
    CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v59, 1);
  v49 = 0;
  v72 = _xmm;
  v77 = 0;
  for ( i = 0; v49 < v76; ++v49 )
  {
    v48 = *(&v73 + v49);
    *(&v73 + v49) = 0LL;
    if ( v48 )
      (**(void (__fastcall ***)(CMultiPrimitiveDrawListBrush *, __int64))v48)(v48, 1LL);
  }
  v76 = 0;
  v50 = &v76;
  v51 = 4LL;
  do
  {
    v52 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v50 - 1);
    v50 -= 2;
    --v51;
    if ( v52 )
      std::default_delete<CShape>::operator()((__int64)v48, v52);
  }
  while ( v51 );
  return (unsigned int)v12;
}
