/*
 * XREFs of ?UMPDDrvPaint@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C027AC20
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
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C027CB58 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvPaint(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        struct _POINTL *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v7; // r15d
  UMPDOBJ *v10; // rbx
  unsigned int v11; // eax
  int v12; // esi
  size_t Size; // [rsp+20h] [rbp-B1h]
  unsigned int v15; // [rsp+40h] [rbp-91h] BYREF
  int v16; // [rsp+44h] [rbp-8Dh] BYREF
  int v17; // [rsp+48h] [rbp-89h] BYREF
  void *v18; // [rsp+50h] [rbp-81h] BYREF
  void *v19; // [rsp+58h] [rbp-79h] BYREF
  UMPDOBJ *v20; // [rsp+60h] [rbp-71h] BYREF
  struct _POINTL *v21; // [rsp+68h] [rbp-69h]
  _QWORD v22[12]; // [rsp+70h] [rbp-61h] BYREF

  v5 = 0;
  v21 = a4;
  v17 = 0;
  v16 = 0;
  v7 = 0;
  v15 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  v18 = 0LL;
  v19 = 0LL;
  memset(v22, 0, sizeof(v22));
  v10 = v20;
  if ( v20 )
  {
    if ( !*((_DWORD *)v20 + 106)
      || (v15 = 160,
          v11 = UMPDOBJ::bThunkLargeBitmap(v20, a1, &v18, &v19, &v17, &v16, &v15),
          v7 = v16,
          v12 = v11,
          (v15 = v11) != 0) )
    {
      v22[0] = 0x1100000060LL;
      v22[2] = *(_QWORD *)v10;
      v22[8] = v21;
      LODWORD(v22[11]) = a5;
      v22[3] = a1;
      v22[5] = a2;
      v22[7] = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), (struct _SURFOBJ **)&v22[3], v7)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 112), (const void **)&v22[5], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 144), (const void **)&v22[7], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v22[8], 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v10, v22, 0x60u, &v15, Size) == -1)
        || (v12 = 1, !v15) )
      {
        v12 = 0;
      }
    }
    if ( v17 )
    {
      if ( v7 )
        UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
      a1->pvBits = v18;
      a1->pvScan0 = v19;
    }
    v5 = v12;
  }
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v5;
}
