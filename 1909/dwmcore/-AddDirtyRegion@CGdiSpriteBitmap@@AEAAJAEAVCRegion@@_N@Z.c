/*
 * XREFs of ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18006B304
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x180048E3C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18006CF00 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800D3BF0 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x180048F38 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800518E4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180061E70 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x1800621B8 (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18006B6F0 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006B8B8 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18006BBE0 (-EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJAEBVCRegion@@_N1@Z @ 0x18006BD90 (-NotifyDirtySurface@CWindowNode@@QEAAJAEBVCRegion@@_N1@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006D570 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18006DFB0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006E3F8 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAC88 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18015E2F4 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     McTemplateU0xxxxx @ 0x180178438 (McTemplateU0xxxxx.c)
 *     ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x1802131B0 (-Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddDirtyRegion(CGdiSpriteBitmap *this, struct CRegion *a2, char a3)
{
  int v3; // r9d
  int v6; // edx
  int v8; // ebx
  _DWORD *v9; // rax
  const struct FastRegion::Internal::CRgnData *v10; // rbx
  int v11; // eax
  FastRegion::Internal::CRgnData *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  const struct FastRegion::Internal::CRgnData *v15; // r14
  const struct FastRegion::Internal::CRgnData **v16; // rbx
  const struct FastRegion::Internal::CRgnData *v17; // r15
  int v18; // eax
  FastRegion::Internal::CRgnData *v19; // rcx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // r14d
  __int64 v23; // rcx
  int v24; // eax
  const struct tagRECT **v25; // r14
  const struct tagRECT **v26; // r15
  char v27; // r14
  bool v28; // r14
  unsigned int v29; // r15d
  CWindowNode *v30; // rbx
  __int64 v32; // rcx
  unsigned int *v33; // r8
  unsigned int v34; // ecx
  FastRegion::Internal::CRgnData *v35; // rax
  FastRegion::Internal::CRgnData *v36; // rax
  const struct tagRECT *v37; // r12
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // r9d
  unsigned int v41; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+40h] [rbp-C0h] BYREF
  HGDIOBJ ho; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v44[16]; // [rsp+50h] [rbp-B0h] BYREF
  HGDIOBJ *p_ho; // [rsp+60h] [rbp-A0h]
  struct FastRegion::Internal::CRgnData *v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h] BYREF
  int v48; // [rsp+A0h] [rbp-60h]
  _DWORD v49[2]; // [rsp+A4h] [rbp-5Ch] BYREF
  _DWORD v50[13]; // [rsp+ACh] [rbp-54h] BYREF
  FastRegion::Internal::CRgnData *v51; // [rsp+E0h] [rbp-20h] BYREF
  int v52; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v53[48]; // [rsp+100h] [rbp+0h] BYREF
  int v54; // [rsp+130h] [rbp+30h] BYREF
  void *lpMem; // [rsp+138h] [rbp+38h]
  _BYTE v56[256]; // [rsp+140h] [rbp+40h] BYREF

  v3 = *((_DWORD *)this + 111);
  v46 = (struct FastRegion::Internal::CRgnData *)&v47;
  v6 = *((_DWORD *)this + 110);
  v8 = 0;
  if ( v6 <= 0 || v3 <= 0 )
  {
    LODWORD(v47) = 0;
  }
  else
  {
    v47 = 2LL;
    v48 = v6;
    v49[0] = 0;
    v50[2] = 0;
    v49[1] = (unsigned int)v53 - 76 - (unsigned int)v49;
    v50[3] = v6;
    v50[0] = v3;
    v50[1] = (unsigned int)v53 - 76 - (unsigned int)v50 + 8;
  }
  v9 = *(_DWORD **)a2;
  ho = 0LL;
  if ( !*v9 )
    return (unsigned int)v8;
  if ( !*((_QWORD *)this + 47) && (*((_BYTE *)this + 116) & 0x10) != 0 )
  {
    memset_0(v44, 0, 0x38uLL);
    v32 = *((_QWORD *)this + 10);
    p_ho = &ho;
    v42 = 56;
    CRedirectedGDISurface::GetInformation(v32, 0, &v42, (__int64)v44);
    if ( ho )
    {
      v52 = 0;
      v51 = (FastRegion::Internal::CRgnData *)&v52;
      CRegion::SetHRGN((CRegion *)&v51, (HRGN)ho, v33);
      v8 = FastRegion::CRegion::Copy(a2, a2);
      if ( v8 >= 0 )
        v8 = FastRegion::CRegion::Intersect(a2, (const struct CRegion *)&v51);
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v8, 0x36Cu, 0LL);
LABEL_55:
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v51);
        goto LABEL_31;
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v51);
    }
  }
  v10 = *(const struct FastRegion::Internal::CRgnData **)a2;
  if ( !*(_DWORD *)v46 )
  {
    *(_DWORD *)v10 = 0;
    goto LABEL_51;
  }
  if ( !*(_DWORD *)v10 )
  {
LABEL_51:
    v8 = 0;
    goto LABEL_13;
  }
  v11 = FastRegion::Internal::CRgnData::EstimateSizeIntersect(*(const struct FastRegion::Internal::CRgnData **)a2, v46);
  v12 = (FastRegion::Internal::CRgnData *)v56;
  lpMem = v56;
  v54 = v11;
  if ( (unsigned __int64)v11 > 0x100 )
  {
    v36 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v11);
    v12 = v36;
    if ( !v36 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v54);
      v8 = -2147024882;
LABEL_66:
      v40 = v8;
      v41 = 882;
      goto LABEL_67;
    }
    v10 = *(const struct FastRegion::Internal::CRgnData **)a2;
    lpMem = v36;
  }
  FastRegion::Internal::CRgnData::Intersect(v12, v10, v46);
  v13 = FastRegion::CRegion::SaveResult(a2, (struct FastRegion::Internal::CWorkBuffer *)&v54);
  v14 = (unsigned int)lpMem;
  v8 = v13;
  if ( v56 != lpMem )
    operator delete(lpMem);
  if ( v8 < 0 )
    goto LABEL_66;
LABEL_13:
  if ( **(_DWORD **)a2 )
  {
    if ( (*((_BYTE *)this + 116) & 0x10) != 0
      && FastRegion::CRegion::Contains((CGdiSpriteBitmap *)((char *)this + 208), a2) )
    {
LABEL_22:
      v23 = *((_QWORD *)this + 57);
      if ( v23 )
      {
        v24 = (*(__int64 (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v23 + 120LL))(v23, a2);
        v8 = v24;
        if ( v24 < 0 )
        {
          v41 = 904;
LABEL_62:
          v40 = v24;
LABEL_67:
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v40, v41, 0LL);
          goto LABEL_31;
        }
        v25 = (const struct tagRECT **)*((_QWORD *)this + 58);
        v26 = (const struct tagRECT **)*((_QWORD *)this + 59);
        while ( v25 != v26 )
        {
          v37 = *v25;
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v51, *v25 + 3);
          FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v51, a2);
          if ( *(_DWORD *)v51 )
          {
            FastRegion::Internal::CRgnData::Offset(v51, -v37[3].left, -v37[3].top);
            v38 = (*(__int64 (__fastcall **)(_QWORD, FastRegion::Internal::CRgnData **))(**(_QWORD **)&(*v25)[2].right
                                                                                       + 120LL))(
                    *(_QWORD *)&(*v25)[2].right,
                    &v51);
            v8 = v38;
            if ( v38 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x398u, 0LL);
              goto LABEL_55;
            }
          }
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v51);
          ++v25;
        }
      }
      v27 = *((_BYTE *)this + 116);
      *((_BYTE *)this + 116) = v27 | 1;
      v28 = (v27 & 1) == 0;
      if ( !a3 )
        goto LABEL_31;
      v29 = 0;
      if ( !*((_DWORD *)this + 48) )
        goto LABEL_31;
      while ( 1 )
      {
        v30 = *(CWindowNode **)(*((_QWORD *)this + 21) + 8LL * v29);
        if ( v28 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0xxxxx(
            v29,
            (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
            (_DWORD)this,
            *((_QWORD *)this + 53),
            (char)v30,
            *((_QWORD *)v30 + 10),
            *((_QWORD *)this + 9));
        v24 = CWindowNode::NotifyDirtySurface(v30, a2, v28, *((_BYTE *)this + 116) >> 7);
        v8 = v24;
        if ( v24 < 0 )
          break;
        if ( ++v29 >= *((_DWORD *)this + 48) )
          goto LABEL_31;
      }
      v41 = 952;
      goto LABEL_62;
    }
    v15 = *(const struct FastRegion::Internal::CRgnData **)a2;
    v16 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 208);
    if ( !**(_DWORD **)a2 )
    {
      v8 = 0;
      goto LABEL_21;
    }
    v17 = *v16;
    if ( *(_DWORD *)*v16 )
    {
      v18 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v16, *(const struct FastRegion::Internal::CRgnData **)a2);
      v19 = (FastRegion::Internal::CRgnData *)v56;
      lpMem = v56;
      v54 = v18;
      if ( (unsigned __int64)v18 > 0x100 )
      {
        v35 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v18);
        v19 = v35;
        if ( !v35 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v54);
          v8 = -2147024882;
          v22 = -2147024882;
LABEL_64:
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v22, 0x381u, 0LL);
          goto LABEL_31;
        }
        v15 = *(const struct FastRegion::Internal::CRgnData **)a2;
        v17 = *v16;
        lpMem = v35;
      }
      FastRegion::Internal::CRgnData::Union(v19, v17, v15);
      v20 = FastRegion::CRegion::SaveResult(
              (CGdiSpriteBitmap *)((char *)this + 208),
              (struct FastRegion::Internal::CWorkBuffer *)&v54);
      v21 = (unsigned int)lpMem;
      v22 = v20;
      if ( v56 != lpMem )
        operator delete(lpMem);
    }
    else
    {
      v22 = FastRegion::CRegion::Copy((CGdiSpriteBitmap *)((char *)this + 208), a2);
    }
    v8 = v22;
    if ( v22 >= 0 )
    {
LABEL_21:
      *((_BYTE *)this + 116) |= 0x80u;
      goto LABEL_22;
    }
    goto LABEL_64;
  }
LABEL_31:
  if ( ho )
    DeleteObject(ho);
  if ( &v47 != (__int64 *)v46 )
    operator delete(v46);
  return (unsigned int)v8;
}
