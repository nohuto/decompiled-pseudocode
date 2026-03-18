/*
 * XREFs of ?UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C027A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C001890C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0018CD4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0018DB4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0018E4C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C011FF2C (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C027CB58 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned int v22; // edx
  ULONG v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // eax
  BOOL v26; // edi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  void *v32; // [rsp+50h] [rbp-B0h] BYREF
  void *v33; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v34; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL *v35; // [rsp+68h] [rbp-98h]
  struct _POINTL *v36; // [rsp+70h] [rbp-90h]
  _QWORD v37[14]; // [rsp+80h] [rbp-80h] BYREF

  v35 = a8;
  v36 = a9;
  v29 = 1;
  v31 = 0;
  v14 = 0;
  v30 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v34);
  v32 = 0LL;
  v33 = 0LL;
  memset(v37, 0, 0x68uLL);
  v15 = v34;
  if ( !v34 )
    goto LABEL_36;
  v37[0] = 0x4400000068LL;
  v37[2] = *(_QWORD *)v34;
  v37[10] = v35;
  v37[11] = v36;
  v37[6] = a4;
  v37[3] = a1;
  v37[4] = a2;
  v37[5] = a3;
  LODWORD(v37[7]) = a5;
  v37[8] = a6;
  LODWORD(v37[9]) = a7;
  LODWORD(v37[12]) = a10;
  if ( a10 <= 1 )
  {
    v16 = 8;
  }
  else
  {
    if ( a10 != 2 )
      goto LABEL_36;
    v16 = 12;
  }
  v17 = a7 * v16;
  if ( *((_DWORD *)v34 + 106) )
  {
    if ( a3 )
      v18 = ((4 * a3->cEntries + 7) & 0xFFFFFFF8) + 184;
    else
      v18 = 160;
    if ( 16 * (unsigned __int64)a5 <= 0xFFFFFFFF && 16 * a5 + 7 >= 16 * a5 )
    {
      v19 = v17 + 7;
      v20 = (16 * a5 + 7) & 0xFFFFFFF8;
      v21 = v17 + 7 < v17 ? v31 : v19 & 0xFFFFFFF8;
      if ( v19 >= v17 && v18 + v20 >= v18 )
      {
        v22 = v18 + v20;
        v23 = v18 + v20 + v21;
        v24 = -1;
        if ( v22 + v21 >= v22 )
          v24 = v23;
        v29 = v24;
        if ( v23 >= v22 )
        {
          v25 = UMPDOBJ::bThunkLargeBitmap(v34, a1, &v32, &v33, &v31, &v30, &v29);
          v14 = v30;
          v26 = v25;
          v29 = v25;
          if ( !v25 )
            goto LABEL_32;
          goto LABEL_21;
        }
      }
    }
LABEL_36:
    v26 = 0;
    goto LABEL_37;
  }
LABEL_21:
  v26 = 0;
  if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), (struct _SURFOBJ **)&v37[3], v14) )
  {
    if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), (const void **)&v37[4], 0x18u, 0LL) )
    {
      if ( (unsigned int)UMPDOBJ::pxlo(v15, (struct _XLATEOBJ **)&v37[5]) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v37[6], 16 * a5) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v37[8], v17) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v37[10], 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v37[11], 8u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v15, v37, 0x68u, &v29, Size) != -1 )
                {
                  if ( v29 )
                    v26 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_32:
  if ( v31 )
  {
    if ( v14 )
      UMPDOBJ::bDeleteLargeBitmaps(v15, a1, 0LL, 0LL);
    a1->pvBits = v32;
    a1->pvScan0 = v33;
  }
LABEL_37:
  XUMPDOBJ::~XUMPDOBJ(&v34);
  return v26;
}
