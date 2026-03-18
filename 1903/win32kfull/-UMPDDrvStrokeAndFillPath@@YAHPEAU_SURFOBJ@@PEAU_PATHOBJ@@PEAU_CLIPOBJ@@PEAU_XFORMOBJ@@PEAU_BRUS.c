/*
 * XREFs of ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02A5610
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0050018 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00501E4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C005093C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007A1D0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1C028DFCC (-ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5F4C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v12; // edi
  int v13; // r15d
  UMPDOBJ *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // esi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  void *v23; // [rsp+50h] [rbp-B0h] BYREF
  void *v24; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v26; // [rsp+68h] [rbp-98h]
  struct _XFORMOBJ *v27; // [rsp+70h] [rbp-90h]
  struct _BRUSHOBJ *v28; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v29; // [rsp+80h] [rbp-80h]
  struct _POINTL *v30; // [rsp+88h] [rbp-78h]
  _QWORD v31[12]; // [rsp+90h] [rbp-70h] BYREF

  v28 = a5;
  v29 = a7;
  v26 = a3;
  v30 = a8;
  v27 = a4;
  memset(v31, 0, sizeof(v31));
  v12 = 0;
  v20 = 1;
  v22 = 0;
  v13 = 0;
  v21 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  v23 = 0LL;
  v24 = 0LL;
  memset(v31, 0, sizeof(v31));
  v14 = v25;
  if ( v25 )
  {
    if ( !*((_DWORD *)v25 + 106)
      || (!a6 ? (v15 = 200) : (v15 = ((4 * a6->cstyle + 7) & 0xFFFFFFF8) + 240),
          v20 = v15,
          v16 = UMPDOBJ::bThunkLargeBitmap(v25, a1, &v23, &v24, &v22, &v21, &v20),
          v13 = v21,
          v17 = v16,
          (v20 = v16) != 0) )
    {
      v31[0] = 0x1000000060LL;
      v31[2] = *(_QWORD *)v14;
      v31[5] = v26;
      v31[6] = v27;
      v31[7] = v28;
      v31[10] = v29;
      v31[8] = v30;
      v31[11] = __PAIR64__(a10, a9);
      v31[3] = a1;
      v31[4] = a2;
      v31[9] = a6;
      if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&v31[3], v13)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 224), (const void **)&v31[4], 8u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&v31[5], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 272), (const void **)&v31[6], 4u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 144), (const void **)&v31[7], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkLINEATTRS(v14, (struct _LINEATTRS **)&v31[9])
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 160), (const void **)&v31[10], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v31[8], 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, v31, 96LL, &v20, Size) == -1)
        || (v17 = 1, !v20) )
      {
        v17 = 0;
      }
    }
    if ( v22 )
    {
      if ( v13 )
        UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
      a1->pvBits = v23;
      a1->pvScan0 = v24;
    }
    v12 = v17;
  }
  XUMPDOBJ::~XUMPDOBJ(&v25);
  return v12;
}
