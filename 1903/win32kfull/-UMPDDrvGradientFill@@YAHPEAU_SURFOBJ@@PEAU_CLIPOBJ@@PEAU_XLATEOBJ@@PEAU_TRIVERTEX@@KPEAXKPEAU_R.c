/*
 * XREFs of ?UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02A36F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C004FDF4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0050018 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00501E4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C005093C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007A1D0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5F4C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  ULONG v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  unsigned int v23; // eax
  BOOL v24; // edi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  void *v30; // [rsp+50h] [rbp-B0h] BYREF
  void *v31; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v32; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL *v33; // [rsp+68h] [rbp-98h]
  struct _POINTL *v34; // [rsp+70h] [rbp-90h]
  _QWORD v35[14]; // [rsp+80h] [rbp-80h] BYREF

  v33 = a8;
  v34 = a9;
  v27 = 1;
  v29 = 0;
  v14 = 0;
  v28 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v30 = 0LL;
  v31 = 0LL;
  memset(v35, 0, 0x68uLL);
  v15 = v32;
  if ( !v32 )
    goto LABEL_31;
  v35[0] = 0x4400000068LL;
  v35[2] = *(_QWORD *)v32;
  v35[10] = v33;
  v35[11] = v34;
  v35[6] = a4;
  v35[3] = a1;
  v35[4] = a2;
  v35[5] = a3;
  LODWORD(v35[7]) = a5;
  v35[8] = a6;
  LODWORD(v35[9]) = a7;
  LODWORD(v35[12]) = a10;
  if ( a10 <= 1 )
  {
    v16 = 8;
  }
  else
  {
    if ( a10 != 2 )
      goto LABEL_31;
    v16 = 12;
  }
  v17 = a7 * v16;
  if ( *((_DWORD *)v32 + 106) )
  {
    if ( a3 )
      v18 = ((4 * a3->cEntries + 7) & 0xFFFFFFF8) + 184;
    else
      v18 = 160;
    v19 = 16 * a5;
    if ( 16 * (unsigned __int64)a5 <= 0xFFFFFFFF && v19 + 7 >= v19 )
    {
      v20 = (v19 + 7) & 0xFFFFFFF8;
      if ( v17 + 7 >= v17 )
      {
        v21 = (v17 + 7) & 0xFFFFFFF8;
        v22 = v18 + v20;
        if ( v18 + v20 >= v18 && v22 + v21 >= v22 )
        {
          v27 = v22 + v21;
          v23 = UMPDOBJ::bThunkLargeBitmap(v32, a1, &v30, &v31, &v29, &v28, &v27);
          v14 = v28;
          v24 = v23;
          v27 = v23;
          if ( !v23 )
            goto LABEL_27;
          goto LABEL_16;
        }
      }
    }
LABEL_31:
    v24 = 0;
    goto LABEL_32;
  }
LABEL_16:
  v24 = 0;
  if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), (struct _SURFOBJ **)&v35[3], v14) )
  {
    if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), (const void **)&v35[4], 0x18u, 0LL) )
    {
      if ( (unsigned int)UMPDOBJ::pxlo(v15, (struct _XLATEOBJ **)&v35[5]) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v35[6], 16 * a5) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v35[8], v17) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v35[10], 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v35[11], 8u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v15, v35, 104LL, &v27, Size) != -1 )
                {
                  if ( v27 )
                    v24 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_27:
  if ( v29 )
  {
    if ( v14 )
      UMPDOBJ::bDeleteLargeBitmaps(v15, a1, 0LL, 0LL);
    a1->pvBits = v30;
    a1->pvScan0 = v31;
  }
LABEL_32:
  XUMPDOBJ::~XUMPDOBJ(&v32);
  return v24;
}
