/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800686F0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180068340 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180068610 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18003F5B4 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180065260 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x18007903C (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800E93B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E9418 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18016F734 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180170280 (-VisualWasRendered@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C183C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     McTemplateU0pffffss @ 0x1801C38C0 (McTemplateU0pffffss.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned int v3; // r13d
  unsigned int v4; // esi
  __int64 i; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // r14
  _QWORD *ThreadLocalStoragePointer; // rax
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  CDirtyRegion *v16; // rax
  int v17; // r12d
  struct _LIST_ENTRY *v18; // rcx
  int Cache; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  volatile signed __int32 *v23; // rcx
  __int64 v24; // rax
  _BYTE *v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v29; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v31; // rdx
  __int64 v32; // r9
  int v33; // edx
  unsigned int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // r9
  int v37; // edx
  unsigned int v38; // r8d
  int v39; // eax
  unsigned int v40; // ecx
  CMILMatrix *TopByReference; // rax
  __int64 j; // r14
  CDirtyRegion *v43; // rcx
  int v44; // eax
  unsigned int v45; // ecx
  float v46; // xmm0_4
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm1_4
  int v50; // eax
  unsigned int v51; // ecx
  const char *v52; // r15
  const char *v53; // r14
  char v54; // r12
  __int64 v55; // rcx
  int v56; // edx
  int v57; // ecx
  int v58; // r9d
  char v59[8]; // [rsp+50h] [rbp-39h] BYREF
  CDirtyRegion *v60; // [rsp+58h] [rbp-31h] BYREF
  __int128 v61; // [rsp+68h] [rbp-21h] BYREF
  float v62; // [rsp+78h] [rbp-11h] BYREF
  float v63; // [rsp+7Ch] [rbp-Dh]
  float v64; // [rsp+80h] [rbp-9h]
  float v65; // [rsp+84h] [rbp-5h]
  char v66[16]; // [rsp+88h] [rbp-1h] BYREF
  char v67[16]; // [rsp+98h] [rbp+Fh] BYREF

  v3 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  v4 = 0;
  if ( (*((_BYTE *)this + 95) & 8) != 0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1273LL) )
    {
      *a3 = 1;
      goto LABEL_18;
    }
    *((_BYTE *)a2 + 6354) = 1;
  }
  i = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
  if ( i != *((_QWORD *)this + 29) )
  {
    v9 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v9 & 0x20000000) != 0 )
    {
      v24 = (unsigned int)v9[1];
      v25 = v9 + 2;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v24; ++v25 )
      {
        if ( *v25 == 3 )
          break;
        i = (unsigned int)(i + 1);
      }
      if ( (unsigned int)i >= (unsigned int)v24 )
        v26 = 0LL;
      else
        v26 = (__int64 *)((char *)&v9[2 * i] + ((v24 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
      v27 = *v26;
      if ( v27 )
      {
        LODWORD(i) = 0;
        *(_DWORD *)(v27 + 64) = 0;
        *(_QWORD *)(v27 + 68) = 1LL;
      }
    }
    *((_BYTE *)this + 93) &= ~0x80u;
  }
  if ( *((_BYTE *)a2 + 6348) )
  {
    if ( g_DisplayManager )
    {
      v35 = 0LL;
      if ( *((_DWORD *)g_DisplayManager + 18) )
      {
        v36 = *((_QWORD *)g_DisplayManager + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v36 + 8 * v35)) )
        {
          v35 = (unsigned int)(v37 + 1);
          if ( (unsigned int)v35 >= v38 )
            goto LABEL_6;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 197LL) )
        {
          v39 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, char *))(*(_QWORD *)this + 232LL))(
                  this,
                  *((_QWORD *)a2 + 466),
                  v66);
          v4 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x1AF6u, 0LL);
          }
          else
          {
            TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a2 + 480));
            CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
            for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 1556); j = (unsigned int)(j + 1) )
              CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)a2 + 775) + 8 * j), v67, a2);
          }
        }
      }
    }
  }
LABEL_6:
  if ( (v4 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(i, 0LL, 0, v4, 0x10CCu, 0LL);
    goto LABEL_18;
  }
  v10 = *((_QWORD *)this + 32);
  if ( v10 )
  {
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v59[0] = 0;
    v12 = ThreadLocalStoragePointer[tls_index];
    v61 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    if ( dword_18033D374 > *(_DWORD *)(v12 + 4) )
    {
      Init_thread_header(&dword_18033D374);
      if ( dword_18033D374 == -1 )
      {
        dword_180337EF4 = -2147022876;
        Init_thread_footer(&dword_18033D374);
      }
    }
    if ( *((_QWORD *)a2 + 45)
      || *((_QWORD *)a2 + 787)
      || !(*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *))(*(_QWORD *)v10 + 256LL))(v10, a2) )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, char *, char *, __int128 *))(*(_QWORD *)v10 + 200LL))(
              v10,
              a2,
              (char *)this + 132,
              v59,
              &v61);
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_180337EF0, 2u, v13, 0x11A5u, 0LL);
      }
      else if ( !*((_QWORD *)a2 + 45) && !*((_QWORD *)a2 + 787) )
      {
        ++dword_180339994;
      }
LABEL_16:
      if ( !v59[0] )
        goto LABEL_17;
      if ( !g_DisplayManager )
        goto LABEL_17;
      v31 = 0LL;
      if ( !*((_DWORD *)g_DisplayManager + 18) )
        goto LABEL_17;
      v32 = *((_QWORD *)g_DisplayManager + 6);
      while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v32 + 8 * v31)) )
      {
        v31 = (unsigned int)(v33 + 1);
        if ( (unsigned int)v31 >= v34 )
          goto LABEL_17;
      }
      v44 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, float *))(*(_QWORD *)this + 232LL))(
              this,
              *((_QWORD *)a2 + 466),
              &v62);
      v4 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x10EAu, 0LL);
        goto LABEL_18;
      }
      v46 = *(float *)&v61;
      if ( v62 > *(float *)&v61 )
      {
        *(float *)&v61 = v62;
        v46 = v62;
      }
      v47 = *((float *)&v61 + 1);
      if ( v63 > *((float *)&v61 + 1) )
      {
        *((float *)&v61 + 1) = v63;
        v47 = v63;
      }
      v48 = *((float *)&v61 + 2);
      if ( *((float *)&v61 + 2) > v64 )
      {
        *((float *)&v61 + 2) = v64;
        v48 = v64;
      }
      v49 = *((float *)&v61 + 3);
      if ( *((float *)&v61 + 3) > v65 )
      {
        *((float *)&v61 + 3) = v65;
        v49 = v65;
      }
      if ( v48 <= v46 || v49 <= v47 )
        v61 = 0uLL;
      if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 312LL))(this) )
        CDrawingContext::RecordVisualMove(a2, this);
      v50 = CDrawingContext::VisualWasRendered(a2, &v61, this);
      v4 = v50;
      if ( v50 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x10FAu, 0LL);
      else
LABEL_17:
        *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 264LL))(*((_QWORD *)this + 32)) == 0;
      goto LABEL_18;
    }
    v16 = 0LL;
    v60 = 0LL;
    if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)a2 + 6350) )
      goto LABEL_27;
    v17 = -2003292412;
    if ( *(_BYTE *)(*((_QWORD *)a2 + 757) + 32LL) )
    {
      v18 = (struct _LIST_ENTRY *)((char *)this + 328);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(this);
      if ( !TreeDataListHead )
        goto LABEL_70;
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink == TreeDataListHead )
        goto LABEL_70;
      while ( 1 )
      {
        v18 = Flink - 14;
        if ( Flink[2].Flink == v29 )
          break;
        Flink = Flink->Flink;
        if ( Flink == TreeDataListHead )
          goto LABEL_70;
      }
    }
    if ( v18 )
    {
      Cache = CDrawListCacheSet::GetCache(
                (CDrawListCacheSet *)&v18[8],
                0,
                0LL,
                *((struct IRenderTarget **)a2 + 44),
                &v60);
      v17 = Cache;
      if ( Cache >= 0 )
      {
        v16 = v60;
LABEL_27:
        v21 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, char *, char *, __int128 *, CDirtyRegion *))(*(_QWORD *)v10 + 288LL))(
                v10,
                a2,
                (char *)this + 132,
                v59,
                &v61,
                v16);
        if ( v21 >= 0 )
        {
          v23 = (volatile signed __int32 *)v60;
          if ( v60 )
          {
            v60 = 0LL;
            if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v23 + 16LL))(v23, 1LL);
          }
          goto LABEL_16;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_180337EF0, 2u, v21, 0x11A1u, 0LL);
LABEL_72:
        v43 = v60;
        if ( v60 )
        {
          v60 = 0LL;
          CDirtyRegion::Release(v43);
        }
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, Cache, 0x7C1u, 0LL);
    }
LABEL_70:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v18, &dword_180337EF0, 2u, v17, 0x1199u, 0LL);
    goto LABEL_72;
  }
LABEL_18:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) == 0
    || !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 264LL))(this) )
  {
    return v4;
  }
  v52 = byte_18028123E;
  v53 = byte_18028123E;
  v54 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 197LL) )
  {
    v52 = "Window";
    goto LABEL_122;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 175LL) )
    v52 = "Sprite";
  else
    v54 = 0;
  v55 = *((_QWORD *)this + 32);
  if ( !v55 )
    goto LABEL_122;
  if ( v3 != CCachedVisualImage::s_CVIEnsureBitmapCount )
  {
    v53 = "CVI";
    goto LABEL_122;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 48LL))(v55, 125LL) )
  {
    v53 = "PG";
    goto LABEL_121;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
         *((_QWORD *)this + 32),
         142LL) )
  {
    v53 = "RD";
    goto LABEL_121;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
         *((_QWORD *)this + 32),
         39LL) )
  {
    v53 = "CS";
    goto LABEL_121;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
         *((_QWORD *)this + 32),
         79LL) )
  {
    v53 = "HWnd";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
              *((_QWORD *)this + 32),
              199LL) )
  {
    v53 = "YCbCr";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
              *((_QWORD *)this + 32),
              171LL) )
  {
    v53 = "Snap";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
              *((_QWORD *)this + 32),
              86LL) )
  {
    v53 = "Ink";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
              *((_QWORD *)this + 32),
              61LL) )
  {
    v53 = "GenInk";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
              *((_QWORD *)this + 32),
              110LL) )
  {
    v53 = "RT";
  }
  else if ( !v54 )
  {
LABEL_121:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) == 0 )
      return v4;
  }
LABEL_122:
  CDrawingContext::EtwLogCurrentState(a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McTemplateU0pffffss(
      v57,
      v56,
      (_DWORD)this,
      v58,
      *((_DWORD *)this + 42),
      *((_DWORD *)this + 43),
      *((_DWORD *)this + 44),
      (__int64)v52,
      (__int64)v53);
  return v4;
}
