/*
 * XREFs of ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x1800A9970
 * Callers:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x180091978 (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009327C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800A6014 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x180093374 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x1800A2F10 (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800A5348 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A60E4 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800A9F28 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x1800AA748 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxxx @ 0x180149FD0 (McTemplateU0xxxxx.c)
 *     ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x1801988F0 (-Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddDirtyRegion(CGdiSpriteBitmap *this, void **a2)
{
  int v2; // r8d
  int v5; // edx
  int v6; // ebx
  _DWORD *v7; // rax
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  const struct tagRECT **v15; // r14
  const struct tagRECT **v16; // r15
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // r14d
  char v20; // si
  bool v21; // si
  CWindowNode *v22; // rbx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v26; // rcx
  unsigned int *v27; // r8
  unsigned int v28; // ecx
  const struct tagRECT *v29; // rbx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  HGDIOBJ ho; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v34[16]; // [rsp+50h] [rbp-B0h] BYREF
  HGDIOBJ *p_ho; // [rsp+60h] [rbp-A0h]
  void *v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  int v38; // [rsp+A0h] [rbp-60h]
  _DWORD v39[2]; // [rsp+A4h] [rbp-5Ch] BYREF
  _DWORD v40[13]; // [rsp+ACh] [rbp-54h] BYREF
  FastRegion::Internal::CRgnData *v41; // [rsp+E0h] [rbp-20h] BYREF
  int v42; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v43[48]; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT *v44; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT *v45; // [rsp+138h] [rbp+38h]
  int v46; // [rsp+140h] [rbp+40h]
  unsigned int v47[2]; // [rsp+144h] [rbp+44h]
  _BYTE v48[256]; // [rsp+150h] [rbp+50h] BYREF

  v2 = *((_DWORD *)this + 111);
  v36 = &v37;
  v5 = *((_DWORD *)this + 110);
  v6 = 0;
  if ( v5 <= 0 || v2 <= 0 )
  {
    LODWORD(v37) = 0;
  }
  else
  {
    v37 = 2LL;
    v38 = v5;
    v39[0] = 0;
    v40[2] = 0;
    v39[1] = (unsigned int)v43 - 76 - (unsigned int)v39;
    v40[3] = v5;
    v40[0] = v2;
    v40[1] = (unsigned int)v43 - 76 - (unsigned int)v40 + 8;
  }
  ho = 0LL;
  v44 = (struct tagRECT *)v48;
  v46 = 16;
  v45 = (struct tagRECT *)v48;
  v7 = *a2;
  *(_QWORD *)v47 = 16LL;
  if ( !*v7 )
    return (unsigned int)v6;
  if ( !*((_QWORD *)this + 47) && (*((_BYTE *)this + 116) & 0x10) != 0 )
  {
    memset_0(v34, 0, 0x38uLL);
    v26 = *((_QWORD *)this + 10);
    p_ho = &ho;
    v32 = 56;
    CRedirectedGDISurface::GetInformation(v26, 0, &v32, (__int64)v34);
    if ( ho )
    {
      v42 = 0;
      v41 = (FastRegion::Internal::CRgnData *)&v42;
      CRegion::SetHRGN((CRegion *)&v41, (HRGN)ho, v27);
      v6 = FastRegion::CRegion::Copy(a2, a2);
      if ( v6 >= 0 )
        v6 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)a2, &v41);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v6, 0x37Eu);
LABEL_40:
        FastRegion::CRegion::FreeMemory((void **)&v41);
        goto LABEL_21;
      }
      FastRegion::CRegion::FreeMemory((void **)&v41);
    }
  }
  v8 = FastRegion::CRegion::Intersect(
         (const struct FastRegion::Internal::CRgnData **)a2,
         (const struct FastRegion::Internal::CRgnData **)&v36);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x384u);
    goto LABEL_21;
  }
  if ( *(_DWORD *)*a2 )
  {
    if ( (*((_BYTE *)this + 116) & 0x10) == 0
      || !FastRegion::CRegion::Contains((CGdiSpriteBitmap *)((char *)this + 208), (const struct CRegion *)a2) )
    {
      v10 = FastRegion::CRegion::Union(
              (const struct FastRegion::Internal::CRgnData **)this + 26,
              (const struct FastRegion::Internal::CRgnData **)a2);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x393u);
        goto LABEL_21;
      }
      *((_BYTE *)this + 116) |= 0x40u;
    }
    v12 = *((_QWORD *)this + 57);
    if ( !v12 )
    {
LABEL_16:
      v47[1] = 0;
      v17 = CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>>(
              a2,
              &v44);
      v6 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x3B5u);
      }
      else
      {
        v19 = 0;
        v20 = *((_BYTE *)this + 116);
        *((_BYTE *)this + 116) = v20 | 1;
        v21 = (v20 & 1) == 0;
        if ( *((_DWORD *)this + 48) )
        {
          while ( 1 )
          {
            v22 = *(CWindowNode **)(*((_QWORD *)this + 21) + 8LL * v19);
            if ( v21 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              McTemplateU0xxxxx(
                v19,
                (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
                (_DWORD)this,
                *((_QWORD *)this + 53),
                (char)v22,
                *((_QWORD *)v22 + 10),
                *((_QWORD *)this + 9));
            v23 = CWindowNode::NotifyDirtySurface(v22, v44, v47[1], v21, (*((_BYTE *)this + 116) & 0x40) != 0);
            v6 = v23;
            if ( v23 < 0 )
              break;
            if ( ++v19 >= *((_DWORD *)this + 48) )
              goto LABEL_21;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x3CBu);
        }
      }
      goto LABEL_21;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 120LL))(v12, a2);
    v6 = v13;
    if ( v13 >= 0 )
    {
      v15 = (const struct tagRECT **)*((_QWORD *)this + 59);
      v16 = (const struct tagRECT **)*((_QWORD *)this + 60);
      while ( v15 != v16 )
      {
        v29 = *v15;
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v41, *v15 + 3);
        FastRegion::CRegion::Intersect(&v41, (const struct FastRegion::Internal::CRgnData **)a2);
        if ( *(_DWORD *)v41 )
        {
          FastRegion::Internal::CRgnData::Offset(v41, -v29[3].left, -v29[3].top);
          v30 = (*(__int64 (__fastcall **)(_QWORD, FastRegion::Internal::CRgnData **))(**(_QWORD **)&(*v15)[2].right
                                                                                     + 120LL))(
                  *(_QWORD *)&(*v15)[2].right,
                  &v41);
          v6 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x3AAu);
            goto LABEL_40;
          }
        }
        FastRegion::CRegion::FreeMemory((void **)&v41);
        ++v15;
      }
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x39Au);
  }
LABEL_21:
  if ( ho )
    DeleteObject(ho);
  if ( v44 != v45 )
  {
    WPF::ProcessHeapImpl::Free(v44);
    v44 = 0LL;
  }
  if ( &v37 != v36 )
    WPF::ProcessHeapImpl::Free(v36);
  return (unsigned int)v6;
}
