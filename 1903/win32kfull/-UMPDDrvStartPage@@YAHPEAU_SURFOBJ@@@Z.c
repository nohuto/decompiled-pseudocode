/*
 * XREFs of ?UMPDDrvStartPage@@YAHPEAU_SURFOBJ@@@Z @ 0x1C012D290
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0050018 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007A1D0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5F4C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvStartPage(struct _SURFOBJ *a1)
{
  unsigned int v1; // edi
  int v3; // esi
  UMPDOBJ *v4; // rbx
  int v5; // r14d
  unsigned int v7; // eax
  size_t Size; // [rsp+28h] [rbp-29h]
  unsigned int v9; // [rsp+48h] [rbp-9h] BYREF
  int v10; // [rsp+4Ch] [rbp-5h] BYREF
  int v11; // [rsp+50h] [rbp-1h] BYREF
  void *v12; // [rsp+58h] [rbp+7h] BYREF
  void *v13; // [rsp+60h] [rbp+Fh] BYREF
  UMPDOBJ *v14; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v15[4]; // [rsp+70h] [rbp+1Fh] BYREF

  v1 = 0;
  v9 = 1;
  v11 = 0;
  v10 = 0;
  v3 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v14);
  v12 = 0LL;
  v13 = 0LL;
  memset(v15, 0, sizeof(v15));
  v4 = v14;
  if ( v14 )
  {
    if ( !*((_DWORD *)v14 + 106)
      || (v9 = 40,
          v7 = UMPDOBJ::bThunkLargeBitmap(v14, a1, &v12, &v13, &v11, &v10, &v9),
          v3 = v10,
          v5 = v7,
          (v9 = v7) != 0) )
    {
      v15[0] = 0x2100000020LL;
      v15[2] = *(_QWORD *)v4;
      v15[3] = a1;
      if ( !(unsigned int)UMPDOBJ::pso(v4, (UMPDOBJ *)((char *)v4 + 64), (struct _SURFOBJ **)&v15[3], v3)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v4, v15, 32LL, &v9, Size) == -1)
        || (v5 = 1, !v9) )
      {
        v5 = 0;
      }
    }
    if ( v11 )
    {
      if ( v3 )
        UMPDOBJ::bDeleteLargeBitmaps(v4, a1, 0LL, 0LL);
      a1->pvBits = v12;
      a1->pvScan0 = v13;
    }
    v1 = v5;
  }
  XUMPDOBJ::~XUMPDOBJ(&v14);
  return v1;
}
