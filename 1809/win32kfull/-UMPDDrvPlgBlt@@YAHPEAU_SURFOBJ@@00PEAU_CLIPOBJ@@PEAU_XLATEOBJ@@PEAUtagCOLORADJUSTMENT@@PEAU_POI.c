/*
 * XREFs of ?UMPDDrvPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C028E270
 * Callers:
 *     <none>
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C008B9C4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C008E07C (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C008E1B4 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C008E458 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z @ 0x1C016007C (-bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C028C7D0 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02903A4 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

_BOOL8 __fastcall UMPDDrvPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _POINTFIX *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _SURFOBJ *v11; // rdi
  int v12; // r15d
  int v13; // esi
  int v14; // r14d
  UMPDOBJ *v15; // rcx
  UMPDOBJ *v16; // rbx
  struct _SURFOBJ *v17; // r12
  unsigned int v18; // eax
  unsigned int v19; // eax
  BOOL v20; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v23; // [rsp+90h] [rbp-80h] BYREF
  int v24; // [rsp+94h] [rbp-7Ch] BYREF
  int v25; // [rsp+98h] [rbp-78h] BYREF
  int v26; // [rsp+9Ch] [rbp-74h] BYREF
  int v27; // [rsp+A0h] [rbp-70h] BYREF
  int v28; // [rsp+A4h] [rbp-6Ch] BYREF
  int v29; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v30; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v31; // [rsp+B8h] [rbp-58h] BYREF
  void *v32; // [rsp+C0h] [rbp-50h] BYREF
  void *v33; // [rsp+C8h] [rbp-48h] BYREF
  void *v34; // [rsp+D0h] [rbp-40h] BYREF
  void *v35; // [rsp+D8h] [rbp-38h] BYREF
  void *v36; // [rsp+E0h] [rbp-30h] BYREF
  void *v37; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v38; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v39; // [rsp+F8h] [rbp-18h] BYREF
  struct _SURFOBJ *v40; // [rsp+100h] [rbp-10h] BYREF
  struct _CLIPOBJ *v41; // [rsp+108h] [rbp-8h]
  struct tagCOLORADJUSTMENT *v42; // [rsp+110h] [rbp+0h]
  struct _POINTL *v43; // [rsp+118h] [rbp+8h]
  struct _POINTFIX *v44; // [rsp+120h] [rbp+10h]
  struct _RECTL *v45; // [rsp+128h] [rbp+18h]
  struct _POINTL *v46; // [rsp+130h] [rbp+20h]
  _QWORD v47[14]; // [rsp+140h] [rbp+30h] BYREF

  v11 = a3;
  v42 = a6;
  v12 = 0;
  v13 = 0;
  v43 = a7;
  v14 = 0;
  v44 = a8;
  v45 = a9;
  v30 = a1;
  v46 = a10;
  v41 = a4;
  v38 = a3;
  v31 = a2;
  v40 = a3;
  v23 = 1;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v39);
  v37 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  memset(v47, 0, sizeof(v47));
  v16 = v39;
  if ( !v39 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v15, &v31, &v40) )
  {
    v20 = 0;
    goto LABEL_26;
  }
  v17 = v31;
  if ( *((_DWORD *)v16 + 106) )
  {
    if ( a5 )
      v18 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 248;
    else
      v18 = 224;
    v23 = v18;
    v19 = UMPDOBJ::bThunkLargeBitmaps(
            v16,
            v30,
            v31,
            v11,
            &v37,
            &v36,
            &v35,
            &v34,
            &v33,
            &v32,
            &v29,
            &v24,
            &v28,
            &v25,
            &v27,
            &v26,
            &v23);
    v12 = v24;
    v20 = v19;
    v13 = v25;
    v14 = v26;
    v23 = v19;
    if ( !v19 )
      goto LABEL_23;
    v11 = v38;
  }
  v47[0] = 0x4600000070LL;
  v47[2] = *(_QWORD *)v16;
  v47[3] = v30;
  v47[6] = v41;
  v47[8] = v42;
  v47[9] = v43;
  v47[10] = v44;
  v47[11] = v45;
  v47[12] = v46;
  LODWORD(v47[13]) = a11;
  v47[4] = v17;
  v47[5] = v11;
  v47[7] = a5;
  v20 = 0;
  if ( (unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 64), (EVENT_DATA_DESCRIPTOR **)&v47[3], v12) )
  {
    if ( (unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 80), (EVENT_DATA_DESCRIPTOR **)&v47[4], v13) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 96), (EVENT_DATA_DESCRIPTOR **)&v47[5], v14) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v16, (UMPDOBJ *)((char *)v16 + 112), (const void **)&v47[6], 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v16, (struct _XLATEOBJ **)&v47[7]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v47[8], 0x18u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v47[9], 8u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v47[10], 0x18u) )
                {
                  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v47[11], 0x10u) )
                  {
                    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v47[12], 8u) )
                    {
                      LODWORD(Size) = 4;
                      if ( (unsigned int)UMPDOBJ::Thunk(v16, v47, 0x70u, &v23, Size) != -1 )
                      {
                        if ( v23 )
                          v20 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_23:
  if ( *((_DWORD *)v16 + 106) )
    UMPDOBJ::RestoreBitmaps(
      v16,
      (unsigned __int64)v30,
      (unsigned __int64)v17,
      (unsigned __int64)v38,
      v37,
      v36,
      v35,
      v34,
      v33,
      v32,
      v29,
      v12,
      v28,
      v13,
      v27,
      v14);
LABEL_26:
  XUMPDOBJ::~XUMPDOBJ(&v39);
  return v20;
}
