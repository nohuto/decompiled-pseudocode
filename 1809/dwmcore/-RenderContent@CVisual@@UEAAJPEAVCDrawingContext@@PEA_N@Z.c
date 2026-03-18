/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF440
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF030 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF360 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180027190 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18002915C (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800A8E54 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180166A58 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180167484 (-VisualWasRendered@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801B67E8 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     McTemplateU0pffffss @ 0x1801B8AAC (McTemplateU0pffffss.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned int v6; // r13d
  unsigned __int64 v7; // rcx
  _DWORD *v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // r15
  _QWORD *ThreadLocalStoragePointer; // rax
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  int v14; // r11d
  struct _LIST_ENTRY *v15; // rcx
  int Cache; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  _BYTE *v23; // r8
  unsigned int i; // edx
  char *v25; // rax
  __int64 v26; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v28; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v30; // r8
  unsigned int v31; // edx
  unsigned int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // rdx
  int v35; // r8d
  int v36; // eax
  unsigned int v37; // ecx
  CMILMatrix *TopByReference; // rax
  unsigned int j; // ebx
  int v40; // eax
  unsigned int v41; // ecx
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm3_4
  float v45; // xmm1_4
  int v46; // eax
  unsigned int v47; // ecx
  const char *v48; // r15
  const char *v49; // rbx
  char v50; // r12
  __int64 v51; // rcx
  int v52; // edx
  int v53; // ecx
  int v54; // r9d
  _BYTE v55[4]; // [rsp+50h] [rbp-39h] BYREF
  int v56; // [rsp+54h] [rbp-35h]
  struct CDrawListCache *v57; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-29h]
  __int128 v59; // [rsp+68h] [rbp-21h] BYREF
  float v60; // [rsp+78h] [rbp-11h] BYREF
  float v61; // [rsp+7Ch] [rbp-Dh]
  float v62; // [rsp+80h] [rbp-9h]
  float v63; // [rsp+84h] [rbp-5h]
  char v64[16]; // [rsp+88h] [rbp-1h] BYREF
  char v65[16]; // [rsp+98h] [rbp+Fh] BYREF

  v58 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 368LL);
  if ( v7 != *((_QWORD *)this + 29) )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v8 & 0x20000000) != 0 )
    {
      v7 = (unsigned int)v8[1];
      v23 = v8 + 2;
      for ( i = 0; i < (unsigned int)v7; ++v23 )
      {
        if ( *v23 == 3 )
          break;
        ++i;
      }
      if ( i >= (unsigned int)v7 )
      {
        v25 = 0LL;
      }
      else
      {
        v7 = (unsigned __int64)v8 + ((v7 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
        v25 = (char *)(v7 + 8LL * i);
      }
      v26 = *(_QWORD *)v25;
      if ( v26 )
      {
        LODWORD(v7) = 0;
        *(_DWORD *)(v26 + 64) = 0;
        *(_QWORD *)(v26 + 68) = 1LL;
      }
    }
    *((_BYTE *)this + 93) &= ~0x80u;
  }
  v9 = 0;
  if ( *((_BYTE *)a2 + 6348) )
  {
    if ( qword_180308258 )
    {
      v32 = 0;
      if ( *((_DWORD *)qword_180308258 + 18) )
      {
        v33 = *((_QWORD *)qword_180308258 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v33 + 8LL * v32)) )
        {
          v32 = v35 + 1;
          if ( v32 >= *(_DWORD *)(v34 + 72) )
            goto LABEL_5;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 164LL) )
        {
          v36 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, char *))(*(_QWORD *)this + 192LL))(
                  this,
                  *((_QWORD *)a2 + 466),
                  v64);
          v9 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x1CBFu);
          }
          else
          {
            TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a2 + 480));
            CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
            for ( j = 0; j < *((_DWORD *)a2 + 1556); ++j )
              CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)a2 + 775) + 8LL * j), v65, a2);
          }
        }
      }
    }
  }
LABEL_5:
  if ( (v9 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v9, 0x1031u);
    goto LABEL_25;
  }
  v10 = *((_QWORD *)this + 32);
  if ( !v10 )
    goto LABEL_25;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v55[0] = 0;
  v12 = ThreadLocalStoragePointer[tls_index];
  v59 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  if ( dword_18030BCFC > *(_DWORD *)(v12 + 4) )
  {
    Init_thread_header(&dword_18030BCFC);
    if ( dword_18030BCFC == -1 )
    {
      dword_18030687C = -2147022876;
      Init_thread_footer(&dword_18030BCFC);
    }
  }
  if ( *((_QWORD *)a2 + 45)
    || *((_QWORD *)a2 + 787)
    || !(*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *))(*(_QWORD *)v10 + 208LL))(v10, a2) )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, char *, _BYTE *, __int128 *))(*(_QWORD *)v10 + 160LL))(
            v10,
            a2,
            (char *)this + 132,
            v55,
            &v59);
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_180306878, 2u, v21, 0x110Eu);
    }
    else if ( !*((_QWORD *)a2 + 45) && !*((_QWORD *)a2 + 787) )
    {
      ++dword_1803081C4;
    }
    goto LABEL_22;
  }
  v13 = 0LL;
  v57 = 0LL;
  if ( !CCommonRegistryData::m_fDisableDrawListCaching && *((_BYTE *)a2 + 6350) )
  {
    v14 = -2003292412;
    if ( *(_BYTE *)(*((_QWORD *)a2 + 757) + 32LL) )
    {
      v15 = (struct _LIST_ENTRY *)((char *)this + 328);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(this);
      if ( !TreeDataListHead )
        goto LABEL_67;
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink == TreeDataListHead )
        goto LABEL_67;
      while ( 1 )
      {
        v15 = Flink - 14;
        if ( Flink[2].Flink == v28 )
          break;
        Flink = Flink->Flink;
        if ( Flink == TreeDataListHead )
          goto LABEL_67;
      }
    }
    if ( v15 )
    {
      Cache = CDrawListCacheSet::GetCache((CDrawListCacheSet *)&v15[8], 0, 0, *((struct IRenderTarget **)a2 + 44), &v57);
      v56 = Cache;
      if ( Cache >= 0 )
      {
        v13 = (volatile signed __int32 *)v57;
        goto LABEL_18;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, Cache, 0x774u);
      v14 = v56;
      v13 = (volatile signed __int32 *)v57;
    }
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, &dword_180306878, 2u, v14, 0x1102u);
    goto LABEL_69;
  }
LABEL_18:
  v18 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, char *, _BYTE *, __int128 *, volatile signed __int32 *))(*(_QWORD *)v10 + 240LL))(
          v10,
          a2,
          (char *)this + 132,
          v55,
          &v59,
          v13);
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180306878, 2u, v18, 0x110Au);
LABEL_69:
    if ( v13 )
      CMILRefCountBase::Release((CMILRefCountBase *)v13);
    goto LABEL_22;
  }
  if ( v13 && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(struct CDrawListCache *, __int64))(*(_QWORD *)v57 + 16LL))(v57, 1LL);
LABEL_22:
  if ( !v55[0] || !qword_180308258 || !*((_DWORD *)qword_180308258 + 18) )
    goto LABEL_23;
  v30 = *((_QWORD *)qword_180308258 + 6);
  while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v30 + 8LL * v6)) )
  {
    if ( ++v6 >= v31 )
      goto LABEL_23;
  }
  v40 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, float *))(*(_QWORD *)this + 192LL))(
          this,
          *((_QWORD *)a2 + 466),
          &v60);
  v9 = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x104Fu);
    goto LABEL_25;
  }
  v42 = *(float *)&v59;
  if ( v60 > *(float *)&v59 )
  {
    *(float *)&v59 = v60;
    v42 = v60;
  }
  v43 = *((float *)&v59 + 1);
  if ( v61 > *((float *)&v59 + 1) )
  {
    *((float *)&v59 + 1) = v61;
    v43 = v61;
  }
  v44 = *((float *)&v59 + 2);
  if ( *((float *)&v59 + 2) > v62 )
  {
    *((float *)&v59 + 2) = v62;
    v44 = v62;
  }
  v45 = *((float *)&v59 + 3);
  if ( *((float *)&v59 + 3) > v63 )
  {
    *((float *)&v59 + 3) = v63;
    v45 = v63;
  }
  if ( v44 <= v42 || v45 <= v43 )
    v59 = 0uLL;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 272LL))(this) )
    CDrawingContext::RecordVisualMove(a2, this);
  v46 = CDrawingContext::VisualWasRendered(a2, &v59, this);
  v9 = v46;
  if ( v46 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x105Fu);
  }
  else
  {
LABEL_23:
    if ( a3 )
      *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 216LL))(*((_QWORD *)this + 32)) == 0;
  }
LABEL_25:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) == 0
    || !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 224LL))(this) )
  {
    return v9;
  }
  v48 = psz;
  v49 = psz;
  v50 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 164LL) )
  {
    v48 = "Window";
    goto LABEL_119;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 144LL) )
    v48 = "Sprite";
  else
    v50 = 0;
  v51 = *((_QWORD *)this + 32);
  if ( !v51 )
    goto LABEL_119;
  if ( v58 != CCachedVisualImage::s_CVIEnsureBitmapCount )
  {
    v49 = "CVI";
    goto LABEL_119;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 48LL))(v51, 109LL) )
  {
    v49 = "PG";
    goto LABEL_118;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
         *((_QWORD *)this + 32),
         124LL) )
  {
    v49 = "RD";
    goto LABEL_118;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
         *((_QWORD *)this + 32),
         37LL) )
  {
    v49 = "CS";
    goto LABEL_118;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
         *((_QWORD *)this + 32),
         75LL) )
  {
    v49 = "HWnd";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
              *((_QWORD *)this + 32),
              166LL) )
  {
    v49 = "YCbCr";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
              *((_QWORD *)this + 32),
              139LL) )
  {
    v49 = "Snap";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
              *((_QWORD *)this + 32),
              82LL) )
  {
    v49 = "Ink";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
              *((_QWORD *)this + 32),
              58LL) )
  {
    v49 = "GenInk";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
              *((_QWORD *)this + 32),
              103LL) )
  {
    v49 = "RT";
  }
  else if ( !v50 )
  {
LABEL_118:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) == 0 )
      return v9;
  }
LABEL_119:
  CDrawingContext::EtwLogCurrentState(a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McTemplateU0pffffss(
      v53,
      v52,
      (_DWORD)this,
      v54,
      *((_DWORD *)this + 42),
      *((_DWORD *)this + 43),
      *((_DWORD *)this + 44),
      (__int64)v48,
      (__int64)v49);
  return v9;
}
