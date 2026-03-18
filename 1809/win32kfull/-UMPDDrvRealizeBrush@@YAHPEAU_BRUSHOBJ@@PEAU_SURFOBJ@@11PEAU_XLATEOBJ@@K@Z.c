/*
 * XREFs of ?UMPDDrvRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C028F250
 * Callers:
 *     <none>
 * Callees:
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

_BOOL8 __fastcall UMPDDrvRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  int v6; // esi
  int v7; // r14d
  int v8; // r15d
  struct _SURFOBJ *v9; // rdi
  UMPDOBJ *v10; // rcx
  UMPDOBJ *v11; // rbx
  struct _SURFOBJ *v12; // r12
  unsigned int v13; // eax
  unsigned int v14; // eax
  BOOL v15; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v18; // [rsp+90h] [rbp-80h] BYREF
  int v19; // [rsp+94h] [rbp-7Ch] BYREF
  int v20; // [rsp+98h] [rbp-78h] BYREF
  int v21; // [rsp+9Ch] [rbp-74h] BYREF
  int v22; // [rsp+A0h] [rbp-70h] BYREF
  int v23; // [rsp+A4h] [rbp-6Ch] BYREF
  int v24; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v25; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v26; // [rsp+B8h] [rbp-58h] BYREF
  void *v27; // [rsp+C0h] [rbp-50h] BYREF
  void *v28; // [rsp+C8h] [rbp-48h] BYREF
  void *v29; // [rsp+D0h] [rbp-40h] BYREF
  void *v30; // [rsp+D8h] [rbp-38h] BYREF
  void *v31; // [rsp+E0h] [rbp-30h] BYREF
  void *v32; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v33; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v34; // [rsp+F8h] [rbp-18h] BYREF
  struct _SURFOBJ *v35; // [rsp+100h] [rbp-10h] BYREF
  struct _BRUSHOBJ *v36; // [rsp+108h] [rbp-8h]
  _QWORD v37[10]; // [rsp+110h] [rbp+0h] BYREF

  v36 = a1;
  v6 = 0;
  v24 = 0;
  v23 = 0;
  v7 = 0;
  v22 = 0;
  v8 = 0;
  v19 = 0;
  v9 = a4;
  v20 = 0;
  v21 = 0;
  v33 = a4;
  v25 = a2;
  v26 = a3;
  v35 = a4;
  v18 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v34);
  v32 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  memset(v37, 0, 0x48uLL);
  v11 = v34;
  if ( !v34 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v10, &v26, &v35) )
  {
    v15 = 0;
    goto LABEL_21;
  }
  v12 = v26;
  if ( *((_DWORD *)v11 + 106) )
  {
    if ( a5 )
      v13 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 128;
    else
      v13 = 104;
    v18 = v13;
    v14 = UMPDOBJ::bThunkLargeBitmaps(
            v11,
            v25,
            v26,
            v9,
            &v32,
            &v31,
            &v30,
            &v29,
            &v28,
            &v27,
            &v24,
            &v19,
            &v23,
            &v20,
            &v22,
            &v21,
            &v18);
    v6 = v19;
    v15 = v14;
    v7 = v20;
    v8 = v21;
    v18 = v14;
    if ( !v14 )
      goto LABEL_18;
    v9 = v33;
  }
  v37[0] = 0xC00000048LL;
  v37[2] = *(_QWORD *)v11;
  v37[6] = v36;
  v37[3] = v25;
  LODWORD(v37[8]) = a6;
  v37[4] = v12;
  v37[5] = v9;
  v37[7] = a5;
  v15 = 0;
  if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 144), (const void **)&v37[6], 0x18u, 0LL) )
  {
    if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (EVENT_DATA_DESCRIPTOR **)&v37[3], v6) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 80), (EVENT_DATA_DESCRIPTOR **)&v37[4], v7) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 96), (EVENT_DATA_DESCRIPTOR **)&v37[5], v8) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v11, (struct _XLATEOBJ **)&v37[7]) )
          {
            LODWORD(Size) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v11, v37, 0x48u, &v18, Size) != -1 )
            {
              if ( v18 )
                v15 = 1;
            }
          }
        }
      }
    }
  }
LABEL_18:
  if ( *((_DWORD *)v11 + 106) )
    UMPDOBJ::RestoreBitmaps(
      v11,
      (unsigned __int64)v25,
      (unsigned __int64)v12,
      (unsigned __int64)v33,
      v32,
      v31,
      v30,
      v29,
      v28,
      v27,
      v24,
      v6,
      v23,
      v7,
      v22,
      v8);
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v34);
  return v15;
}
