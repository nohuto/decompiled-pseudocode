/*
 * XREFs of ?UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C028D720
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
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00910EC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0290064 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

_BOOL8 __fastcall UMPDDrvGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  int v14; // r14d
  UMPDOBJ *v15; // rbx
  int v16; // esi
  unsigned int v17; // esi
  ULONG v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  BOOL v27; // edi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  void *v33; // [rsp+50h] [rbp-B0h] BYREF
  void *v34; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v35; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL *v36; // [rsp+68h] [rbp-98h]
  struct _POINTL *v37; // [rsp+70h] [rbp-90h]
  _QWORD v38[14]; // [rsp+80h] [rbp-80h] BYREF

  v36 = a8;
  v37 = a9;
  v30 = 1;
  v32 = 0;
  v14 = 0;
  v31 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v35);
  v33 = 0LL;
  v34 = 0LL;
  memset(v38, 0, 0x68uLL);
  v15 = v35;
  if ( !v35 )
    goto LABEL_33;
  v38[0] = 0x4400000068LL;
  v38[2] = *(_QWORD *)v35;
  v38[10] = v36;
  v38[11] = v37;
  v38[6] = a4;
  v38[3] = a1;
  v38[4] = a2;
  v38[5] = a3;
  LODWORD(v38[7]) = a5;
  v38[8] = a6;
  LODWORD(v38[9]) = a7;
  LODWORD(v38[12]) = a10;
  if ( a10 <= 1 )
  {
    v16 = 8;
  }
  else
  {
    if ( a10 != 2 )
      goto LABEL_33;
    v16 = 12;
  }
  v17 = a7 * v16;
  if ( *((_DWORD *)v35 + 106) )
  {
    if ( a3 )
      v18 = ((4 * a3->cEntries + 7) & 0xFFFFFFF8) + 184;
    else
      v18 = 160;
    if ( 16 * (unsigned __int64)a5 <= 0xFFFFFFFF )
    {
      v19 = 16 * a5;
      if ( v19 + 7 >= v19 )
      {
        v20 = (v19 + 7) & 0xFFFFFFF8;
        if ( v17 + 7 >= v17 )
        {
          v21 = v20 + v18;
          v22 = (v17 + 7) & 0xFFFFFFF8;
          if ( v20 + v18 >= v18 )
          {
            v23 = v20 + v18;
            v24 = v21 + v22;
            v25 = -1;
            if ( v23 + v22 >= v23 )
              v25 = v24;
            v30 = v25;
            if ( v24 >= v23 )
            {
              v26 = UMPDOBJ::bThunkLargeBitmap(v35, a1, &v33, &v34, &v32, &v31, &v30);
              v14 = v31;
              v27 = v26;
              v30 = v26;
              if ( !v26 )
                goto LABEL_29;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_33:
    v27 = 0;
    goto LABEL_34;
  }
LABEL_18:
  v27 = 0;
  if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), (EVENT_DATA_DESCRIPTOR **)&v38[3], v14) )
  {
    if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), (const void **)&v38[4], 0x18u, 0LL) )
    {
      if ( (unsigned int)UMPDOBJ::pxlo(v15, (struct _XLATEOBJ **)&v38[5]) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v38[6], 16 * a5) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v38[8], v17) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v38[10], 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v38[11], 8u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v15, v38, 0x68u, &v30, Size) != -1 )
                {
                  if ( v30 )
                    v27 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( v32 )
  {
    if ( v14 )
      UMPDOBJ::bDeleteLargeBitmaps(v15, a1, 0LL, 0LL);
    a1->pvBits = v33;
    a1->pvScan0 = v34;
  }
LABEL_34:
  XUMPDOBJ::~XUMPDOBJ(&v35);
  return v27;
}
