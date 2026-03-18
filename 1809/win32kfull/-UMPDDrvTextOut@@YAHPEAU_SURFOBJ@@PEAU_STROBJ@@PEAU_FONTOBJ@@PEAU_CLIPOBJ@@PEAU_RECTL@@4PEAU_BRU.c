/*
 * XREFs of ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C008B6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00875F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C00877C8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C008B9C4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1C008BA5C (-pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C008BC48 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C008E1B4 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C008E458 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00910EC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0290064 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  unsigned int v11; // edi
  int v13; // r12d
  struct UMPDOBJ *v14; // rbx
  unsigned int v15; // esi
  struct _FONTOBJ *v16; // r13
  unsigned int v17; // eax
  int v19; // esi
  struct _RECTL *i; // rcx
  unsigned int v21; // edx
  __int64 cGlyphs; // rcx
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL *v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+58h] [rbp-A8h]
  void *v36; // [rsp+60h] [rbp-A0h] BYREF
  void *v37; // [rsp+68h] [rbp-98h] BYREF
  struct UMPDOBJ *v38; // [rsp+70h] [rbp-90h] BYREF
  struct _FONTOBJ *v39; // [rsp+78h] [rbp-88h]
  struct _CLIPOBJ *v40; // [rsp+80h] [rbp-80h]
  struct _RECTL *v41; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v42; // [rsp+90h] [rbp-70h]
  struct _BRUSHOBJ *v43; // [rsp+98h] [rbp-68h]
  _QWORD v44[14]; // [rsp+A0h] [rbp-60h] BYREF

  v41 = a6;
  v11 = 1;
  v42 = a7;
  v13 = 0;
  v43 = a8;
  v34 = a9;
  v40 = a4;
  v39 = a3;
  v31 = 1;
  v33 = 0;
  v32 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v38);
  v36 = 0LL;
  v37 = 0LL;
  memset(v44, 0, 0x68uLL);
  v14 = v38;
  if ( !v38 )
    goto LABEL_20;
  if ( a5 )
  {
    v19 = 1;
    for ( i = a5; i->left != i->right; ++v19 )
      ++i;
    v15 = 16 * v19;
  }
  else
  {
    v15 = 0;
  }
  if ( !*((_DWORD *)v38 + 106) )
    goto LABEL_5;
  v21 = 272;
  if ( a2 )
  {
    cGlyphs = a2->cGlyphs;
    if ( (unsigned __int64)(2 * cGlyphs) <= 0xFFFFFFFF )
    {
      v23 = 2 * cGlyphs;
      if ( (unsigned __int64)(24 * cGlyphs) <= 0xFFFFFFFF )
      {
        v24 = 24 * cGlyphs;
        if ( v23 + 7 >= v23 )
        {
          v25 = (v23 + 7) & 0xFFFFFFF8;
          if ( v24 + 7 >= v24 )
          {
            v26 = (v24 + 7) & 0xFFFFFFF8;
            if ( v25 + 320 >= 0x140 && v25 + 320 + v26 >= v25 + 320 )
            {
              v21 = v25 + 320 + v26;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_20:
    v11 = 0;
    goto LABEL_19;
  }
LABEL_32:
  if ( v15 + 7 < v15 )
    goto LABEL_20;
  v27 = -1;
  v28 = v21 + ((v15 + 7) & 0xFFFFFFF8);
  if ( v28 >= v21 )
    v27 = v21 + ((v15 + 7) & 0xFFFFFFF8);
  v31 = v27;
  if ( v28 < v21 )
    goto LABEL_20;
  v29 = UMPDOBJ::bThunkLargeBitmap(v38, a1, &v36, &v37, &v33, &v32, &v31);
  v13 = v32;
  v11 = v29;
  v31 = v29;
LABEL_5:
  v44[0] = 0x1700000068LL;
  v44[2] = *(_QWORD *)v14;
  v44[6] = v40;
  v44[8] = v41;
  v44[9] = v42;
  v44[10] = v43;
  v44[7] = a5;
  v44[4] = a2;
  v16 = v39;
  v44[11] = v34;
  LODWORD(v44[12]) = a10;
  v44[3] = a1;
  v44[5] = v39;
  if ( v11
    && (unsigned int)UMPDOBJ::pso(v14, (struct UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&v44[3], v13)
    && (unsigned int)UMPDOBJ::pstro(v14, (struct _STROBJ **)&v44[4])
    && (unsigned int)UMPDOBJ::pfo(v14, (struct _FONTOBJ **)&v44[5])
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 112), (void **)&v44[6], 0x18u, 0LL)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (void **)&v44[7], v15)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (void **)&v44[8], 0x10u)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 144), (void **)&v44[9], 0x18u, 0LL)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 160), (void **)&v44[10], 0x18u, 0LL)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (void **)&v44[11], 8u) )
  {
    v35 = 0;
    v34 = (struct _POINTL *)v16;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v34, v14, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v17 = UMPDOBJ::Thunk(v14, v44, 0x68u, &v31, Size);
    v11 = v31;
    if ( v17 == -1 )
      v11 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v34, v14, 0, 0, 0LL);
    v34 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34);
  }
  if ( v33 )
  {
    if ( v13 )
      UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
    a1->pvBits = v36;
    a1->pvScan0 = v37;
  }
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v38);
  return v11;
}
