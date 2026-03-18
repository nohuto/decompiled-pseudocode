/*
 * XREFs of ?UMPDDrvStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C01529A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0099604 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0099828 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0099A50 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C009A1A8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C02A232C (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02A5DA8 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        struct _BRUSHOBJ *a12,
        unsigned int a13)
{
  struct _SURFOBJ *v13; // rsi
  unsigned int v14; // edi
  int v15; // r12d
  int v16; // r14d
  int v17; // r15d
  UMPDOBJ *v18; // rbx
  int v19; // esi
  unsigned int v21; // eax
  unsigned int v22; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v24; // [rsp+90h] [rbp-80h] BYREF
  int v25; // [rsp+94h] [rbp-7Ch] BYREF
  int v26; // [rsp+98h] [rbp-78h] BYREF
  int v27; // [rsp+9Ch] [rbp-74h] BYREF
  int v28; // [rsp+A0h] [rbp-70h] BYREF
  int v29; // [rsp+A4h] [rbp-6Ch] BYREF
  int v30; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v31; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v32; // [rsp+B8h] [rbp-58h]
  void *v33; // [rsp+C0h] [rbp-50h] BYREF
  void *v34; // [rsp+C8h] [rbp-48h] BYREF
  void *v35; // [rsp+D0h] [rbp-40h] BYREF
  void *v36; // [rsp+D8h] [rbp-38h] BYREF
  void *v37; // [rsp+E0h] [rbp-30h] BYREF
  void *v38; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v39; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v40; // [rsp+F8h] [rbp-18h] BYREF
  struct _CLIPOBJ *v41; // [rsp+100h] [rbp-10h]
  struct tagCOLORADJUSTMENT *v42; // [rsp+108h] [rbp-8h]
  struct _POINTL *v43; // [rsp+110h] [rbp+0h]
  struct _RECTL *v44; // [rsp+118h] [rbp+8h]
  struct _RECTL *v45; // [rsp+120h] [rbp+10h]
  struct _POINTL *v46; // [rsp+128h] [rbp+18h]
  struct _BRUSHOBJ *v47; // [rsp+130h] [rbp+20h]
  _QWORD v48[16]; // [rsp+140h] [rbp+30h] BYREF

  v13 = a1;
  v42 = a6;
  v43 = a7;
  v44 = a8;
  v45 = a9;
  v46 = a10;
  v31 = a3;
  v32 = a2;
  v39 = a1;
  v47 = a12;
  v41 = a4;
  memset(v48, 0, sizeof(v48));
  v14 = 0;
  v24 = 1;
  v30 = 0;
  v29 = 0;
  v15 = 0;
  v28 = 0;
  v16 = 0;
  v25 = 0;
  v17 = 0;
  v26 = 0;
  v27 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v40);
  v38 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  memset(v48, 0, sizeof(v48));
  v18 = v40;
  if ( !v40 )
    goto LABEL_19;
  if ( !*((_DWORD *)v40 + 106) )
    goto LABEL_3;
  if ( a5 )
    v21 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 280;
  else
    v21 = 256;
  v24 = v21;
  v22 = UMPDOBJ::bThunkLargeBitmaps(
          v40,
          v13,
          v32,
          v31,
          &v38,
          &v37,
          &v36,
          &v35,
          &v34,
          &v33,
          &v30,
          &v25,
          &v29,
          &v26,
          &v28,
          &v27,
          &v24);
  v15 = v25;
  v19 = v22;
  v16 = v26;
  v17 = v27;
  v24 = v22;
  if ( v22 )
  {
    v13 = v39;
LABEL_3:
    v48[0] = 0x4500000080LL;
    v48[2] = *(_QWORD *)v18;
    v48[4] = v32;
    v48[5] = v31;
    v48[6] = v41;
    v48[8] = v42;
    v48[9] = v43;
    v48[10] = v44;
    v48[11] = v45;
    v48[12] = v46;
    LODWORD(v48[13]) = a11;
    v48[14] = v47;
    LODWORD(v48[15]) = a13;
    v48[3] = v13;
    v48[7] = a5;
    if ( !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 64), (struct _SURFOBJ **)&v48[3], v15)
      || !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 80), (struct _SURFOBJ **)&v48[4], v16)
      || !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 96), (struct _SURFOBJ **)&v48[5], v17)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v18, (UMPDOBJ *)((char *)v18 + 112), (const void **)&v48[6], 0x18u, 0LL)
      || !(unsigned int)UMPDOBJ::pxlo(v18, (struct _XLATEOBJ **)&v48[7])
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v48[8], 0x18u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v48[9], 8u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v48[10], 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v48[11], 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v48[12], 8u)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v18, (UMPDOBJ *)((char *)v18 + 144), (const void **)&v48[14], 0x18u, 0LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v18, v48, 128LL, &v24, Size) == -1)
      || (v19 = 1, !v24) )
    {
      v19 = 0;
    }
  }
  if ( *((_DWORD *)v18 + 106) )
    UMPDOBJ::RestoreBitmaps(v18, v39, v32, v31, v38, v37, v36, v35, v34, v33, v30, v15, v29, v16, v28, v17);
  v14 = v19;
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ(&v40);
  return v14;
}
