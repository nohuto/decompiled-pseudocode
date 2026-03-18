/*
 * XREFs of ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C0279AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C001890C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0018CD4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x1C0018D88 (-bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0018DB4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0018E4C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C027CB58 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvDrawEscape(
        struct _SURFOBJ *a1,
        int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned int v7; // edi
  int v9; // r15d
  UMPDOBJ *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  UMPDOBJ *v14; // rcx
  size_t Size; // [rsp+20h] [rbp-B9h]
  int v17; // [rsp+40h] [rbp-99h] BYREF
  int v18; // [rsp+44h] [rbp-95h] BYREF
  int v19; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-8Dh] BYREF
  void *v21; // [rsp+50h] [rbp-89h] BYREF
  void *v22; // [rsp+58h] [rbp-81h] BYREF
  UMPDOBJ *v23; // [rsp+60h] [rbp-79h] BYREF
  struct _CLIPOBJ *v24; // [rsp+68h] [rbp-71h]
  struct _RECTL *v25; // [rsp+70h] [rbp-69h]
  _QWORD v26[10]; // [rsp+80h] [rbp-59h] BYREF

  v7 = -1;
  v25 = a4;
  v18 = -1;
  v24 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v23);
  v21 = 0LL;
  v22 = 0LL;
  v9 = 0;
  v19 = 0;
  v17 = 0;
  memset(v26, 0, 0x48uLL);
  v10 = v23;
  if ( !v23 )
    goto LABEL_20;
  if ( !*((_DWORD *)v23 + 106) )
    goto LABEL_8;
  if ( a5 + 7 >= a5 )
  {
    v11 = -1;
    v12 = ((a5 + 7) & 0xFFFFFFF8) + 120;
    if ( v12 >= 0x78 )
      v11 = ((a5 + 7) & 0xFFFFFFF8) + 120;
    v20 = v11;
    if ( v12 >= 0x78 )
    {
      v13 = UMPDOBJ::bThunkLargeBitmap(v23, a1, &v21, &v22, &v19, &v17, &v20);
      v9 = v17;
      if ( !v13 )
      {
LABEL_16:
        if ( v19 )
        {
          if ( v9 )
            UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
          a1->pvBits = v21;
          a1->pvScan0 = v22;
        }
        goto LABEL_20;
      }
LABEL_8:
      v26[0] = 0x1900000048LL;
      v26[2] = *(_QWORD *)v10;
      v26[3] = a1;
      v26[5] = v24;
      LODWORD(v26[4]) = a2;
      v26[6] = v25;
      LODWORD(v26[7]) = a5;
      v26[8] = a6 & -(__int64)(a5 != 0);
      if ( !a5
        || !(unsigned int)UMPDOBJ::bNeedThunk(v10, (PVOID)(a6 & -(__int64)(a5 != 0)))
        || (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v26[8], a5) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), (struct _SURFOBJ **)&v26[3], v9) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                               v10,
                               (UMPDOBJ *)((char *)v10 + 112),
                               (const void **)&v26[5],
                               0x18u,
                               0LL) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v26[6], 0x10u) )
            {
              LODWORD(Size) = 4;
              if ( (unsigned int)UMPDOBJ::Thunk(v10, v26, 0x48u, &v18, Size) != -1 )
                v7 = v18;
            }
          }
        }
      }
      goto LABEL_16;
    }
  }
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v23);
  return v7;
}
