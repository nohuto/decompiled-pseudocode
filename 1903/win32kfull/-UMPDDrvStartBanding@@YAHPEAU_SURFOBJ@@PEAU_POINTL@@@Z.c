/*
 * XREFs of ?UMPDDrvStartBanding@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1C012C500
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0050018 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C005093C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007A1D0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5F4C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvStartBanding(struct _SURFOBJ *a1, struct _POINTL *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // r15d
  UMPDOBJ *v7; // rbx
  unsigned int v9; // eax
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v11; // [rsp+40h] [rbp-29h] BYREF
  int v12; // [rsp+44h] [rbp-25h] BYREF
  int v13; // [rsp+48h] [rbp-21h] BYREF
  void *v14; // [rsp+50h] [rbp-19h] BYREF
  void *v15; // [rsp+58h] [rbp-11h] BYREF
  UMPDOBJ *v16; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v17[5]; // [rsp+68h] [rbp-1h] BYREF

  v2 = 0;
  v4 = 1;
  v13 = 0;
  v11 = 1;
  v5 = 0;
  v12 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v16);
  v14 = 0LL;
  v15 = 0LL;
  memset(v17, 0, sizeof(v17));
  v7 = v16;
  if ( v16 )
  {
    if ( !*((_DWORD *)v16 + 106)
      || (v11 = 56,
          v9 = UMPDOBJ::bThunkLargeBitmap(v16, a1, &v14, &v15, &v13, &v12, &v11),
          v5 = v12,
          v4 = v9,
          (v11 = v9) != 0) )
    {
      v17[0] = 0x3900000028LL;
      v17[2] = *(_QWORD *)v7;
      v17[3] = a1;
      v17[4] = a2;
      if ( (unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), (struct _SURFOBJ **)&v17[3], v5) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v7, (const void **)&v17[4], 8u) )
        {
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v7, v17, 40LL, &v11, Size) != -1 && a2 )
            *a2 = *(struct _POINTL *)UMPDOBJ::GetKernelPtr(v7, (char *)v17[4]);
          v4 = v11;
        }
      }
    }
    if ( v13 )
    {
      if ( v5 )
        UMPDOBJ::bDeleteLargeBitmaps(v7, a1, 0LL, 0LL);
      a1->pvBits = v14;
      a1->pvScan0 = v15;
    }
    v2 = v4;
  }
  XUMPDOBJ::~XUMPDOBJ(&v16);
  return v2;
}
