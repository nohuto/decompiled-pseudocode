/*
 * XREFs of ?UMPDDrvTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KI@Z @ 0x1C028FCC0
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

__int64 __fastcall UMPDDrvTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v11; // r14d
  int v12; // esi
  UMPDOBJ *v13; // rcx
  UMPDOBJ *v14; // rbx
  struct _SURFOBJ *v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v20; // [rsp+90h] [rbp-80h] BYREF
  int v21; // [rsp+94h] [rbp-7Ch] BYREF
  int v22; // [rsp+98h] [rbp-78h] BYREF
  int v23; // [rsp+9Ch] [rbp-74h] BYREF
  int v24; // [rsp+A0h] [rbp-70h] BYREF
  struct _SURFOBJ *v25; // [rsp+A8h] [rbp-68h] BYREF
  void *v26; // [rsp+B0h] [rbp-60h] BYREF
  void *v27; // [rsp+B8h] [rbp-58h] BYREF
  void *v28; // [rsp+C0h] [rbp-50h] BYREF
  void *v29; // [rsp+C8h] [rbp-48h] BYREF
  UMPDOBJ *v30; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v31; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v32; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v33; // [rsp+E8h] [rbp-28h]
  _QWORD v34[10]; // [rsp+F0h] [rbp-20h] BYREF

  v8 = 0;
  v32 = a5;
  v33 = a6;
  v31 = a3;
  v11 = 0;
  v25 = a2;
  v12 = 0;
  v20 = 1;
  v24 = 0;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  memset(v34, 0, sizeof(v34));
  v14 = v30;
  if ( !v30 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v13, &v25, 0LL) )
    goto LABEL_20;
  v15 = v25;
  if ( !*((_DWORD *)v14 + 106) )
    goto LABEL_9;
  if ( a4 )
    v16 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 168;
  else
    v16 = 144;
  v20 = v16;
  v17 = UMPDOBJ::bThunkLargeBitmaps(
          v14,
          a1,
          v25,
          0LL,
          &v29,
          &v28,
          &v27,
          &v26,
          0LL,
          0LL,
          &v24,
          &v21,
          &v23,
          &v22,
          0LL,
          0LL,
          &v20);
  v11 = v21;
  v12 = v22;
  v8 = v17;
  v20 = v17;
  if ( v17 )
  {
    v8 = 0;
LABEL_9:
    v34[0] = 0x4A00000050LL;
    v34[2] = *(_QWORD *)v14;
    v34[5] = v31;
    v34[7] = v32;
    v34[8] = v33;
    v34[9] = __PAIR64__(a8, a7);
    v34[3] = a1;
    v34[4] = v15;
    v34[6] = a4;
    if ( (unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), (EVENT_DATA_DESCRIPTOR **)&v34[3], v11) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 80), (EVENT_DATA_DESCRIPTOR **)&v34[4], v12) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&v34[5], 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v14, (struct _XLATEOBJ **)&v34[6]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v34[7], 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v34[8], 0x10u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v14, v34, 0x50u, &v20, Size) != -1 )
                {
                  if ( v20 )
                    v8 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)v14 + 106) )
    UMPDOBJ::RestoreBitmaps(
      v14,
      (unsigned __int64)a1,
      (unsigned __int64)v15,
      0LL,
      v29,
      v28,
      v27,
      v26,
      0LL,
      0LL,
      v24,
      v11,
      v23,
      v12,
      0,
      0);
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v8;
}
