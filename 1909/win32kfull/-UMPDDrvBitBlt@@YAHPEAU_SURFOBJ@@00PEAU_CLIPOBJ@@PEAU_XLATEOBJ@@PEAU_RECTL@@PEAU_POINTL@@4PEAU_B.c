/*
 * XREFs of ?UMPDDrvBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EF920
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

__int64 __fastcall UMPDDrvBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _SURFOBJ *v11; // rsi
  unsigned int v12; // edi
  int v13; // r12d
  int v14; // r14d
  int v15; // r15d
  UMPDOBJ *v16; // rbx
  int v17; // esi
  unsigned int v19; // eax
  unsigned int v20; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v22; // [rsp+90h] [rbp-80h] BYREF
  int v23; // [rsp+94h] [rbp-7Ch] BYREF
  int v24; // [rsp+98h] [rbp-78h] BYREF
  int v25; // [rsp+9Ch] [rbp-74h] BYREF
  int v26; // [rsp+A0h] [rbp-70h] BYREF
  int v27; // [rsp+A4h] [rbp-6Ch] BYREF
  int v28; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v29; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v30; // [rsp+B8h] [rbp-58h]
  void *v31; // [rsp+C0h] [rbp-50h] BYREF
  void *v32; // [rsp+C8h] [rbp-48h] BYREF
  void *v33; // [rsp+D0h] [rbp-40h] BYREF
  void *v34; // [rsp+D8h] [rbp-38h] BYREF
  void *v35; // [rsp+E0h] [rbp-30h] BYREF
  void *v36; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v37; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v38; // [rsp+F8h] [rbp-18h] BYREF
  struct _CLIPOBJ *v39; // [rsp+100h] [rbp-10h]
  struct _RECTL *v40; // [rsp+108h] [rbp-8h]
  struct _POINTL *v41; // [rsp+110h] [rbp+0h]
  struct _POINTL *v42; // [rsp+118h] [rbp+8h]
  struct _BRUSHOBJ *v43; // [rsp+120h] [rbp+10h]
  struct _POINTL *v44; // [rsp+128h] [rbp+18h]
  _QWORD v45[14]; // [rsp+130h] [rbp+20h] BYREF

  v11 = a1;
  v40 = a6;
  v41 = a7;
  v42 = a8;
  v43 = a9;
  v29 = a3;
  v30 = a2;
  v37 = a1;
  v44 = a10;
  v39 = a4;
  memset(v45, 0, sizeof(v45));
  v12 = 0;
  v22 = 1;
  v28 = 0;
  v27 = 0;
  v13 = 0;
  v26 = 0;
  v14 = 0;
  v23 = 0;
  v15 = 0;
  v24 = 0;
  v25 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v38);
  v36 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  memset(v45, 0, sizeof(v45));
  v16 = v38;
  if ( !v38 )
    goto LABEL_18;
  if ( !*((_DWORD *)v38 + 106) )
    goto LABEL_3;
  if ( a5 )
    v19 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 232;
  else
    v19 = 208;
  v22 = v19;
  v20 = UMPDOBJ::bThunkLargeBitmaps(
          v38,
          v11,
          v30,
          v29,
          &v36,
          &v35,
          &v34,
          &v33,
          &v32,
          &v31,
          &v28,
          &v23,
          &v27,
          &v24,
          &v26,
          &v25,
          &v22);
  v13 = v23;
  v17 = v20;
  v14 = v24;
  v15 = v25;
  v22 = v20;
  if ( v20 )
  {
    v11 = v37;
LABEL_3:
    v45[0] = 0x1200000070LL;
    v45[2] = *(_QWORD *)v16;
    v45[4] = v30;
    v45[5] = v29;
    v45[6] = v39;
    v45[8] = v40;
    v45[9] = v41;
    v45[10] = v42;
    v45[11] = v43;
    v45[12] = v44;
    LODWORD(v45[13]) = a11;
    v45[3] = v11;
    v45[7] = a5;
    if ( !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 64), (struct _SURFOBJ **)&v45[3], v13)
      || !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 80), (struct _SURFOBJ **)&v45[4], v14)
      || !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 96), (struct _SURFOBJ **)&v45[5], v15)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v16, (UMPDOBJ *)((char *)v16 + 112), (const void **)&v45[6], 0x18u, 0LL)
      || !(unsigned int)UMPDOBJ::pxlo(v16, (struct _XLATEOBJ **)&v45[7])
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v45[8], 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v45[9], 8u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v45[10], 8u)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v16, (UMPDOBJ *)((char *)v16 + 144), (const void **)&v45[11], 0x18u, 0LL)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v45[12], 8u)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v16, v45, 112LL, &v22, Size) == -1)
      || (v17 = 1, !v22) )
    {
      v17 = 0;
    }
  }
  if ( *((_DWORD *)v16 + 106) )
    UMPDOBJ::RestoreBitmaps(v16, v37, v30, v29, v36, v35, v34, v33, v32, v31, v28, v13, v27, v14, v26, v15);
  v12 = v17;
LABEL_18:
  XUMPDOBJ::~XUMPDOBJ(&v38);
  return v12;
}
