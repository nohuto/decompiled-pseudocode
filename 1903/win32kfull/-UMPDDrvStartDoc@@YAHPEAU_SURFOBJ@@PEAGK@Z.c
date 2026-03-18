/*
 * XREFs of ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x1C011C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0050018 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007A1D0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C011CEF8 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5F4C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvStartDoc(struct _SURFOBJ *a1, unsigned __int16 *a2, int a3)
{
  int v4; // esi
  UMPDOBJ *v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  size_t Size; // [rsp+20h] [rbp-59h]
  unsigned int v14; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+44h] [rbp-35h] BYREF
  int v16; // [rsp+48h] [rbp-31h] BYREF
  void *v17; // [rsp+50h] [rbp-29h] BYREF
  void *v18; // [rsp+58h] [rbp-21h] BYREF
  UMPDOBJ *v19; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v20[6]; // [rsp+68h] [rbp-11h] BYREF

  v14 = 1;
  v16 = 0;
  v15 = 0;
  v4 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v19);
  v17 = 0LL;
  v18 = 0LL;
  memset(v20, 0, sizeof(v20));
  v7 = v19;
  if ( !v19 )
    goto LABEL_10;
  if ( !*((_DWORD *)v19 + 106) )
  {
LABEL_3:
    v20[0] = 0x2300000030LL;
    v20[2] = *(_QWORD *)v7;
    v20[3] = a1;
    v20[4] = a2;
    LODWORD(v20[5]) = a3;
    if ( !(unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), (struct _SURFOBJ **)&v20[3], v4)
      || !(unsigned int)UMPDOBJ::ThunkStringW(v7, (unsigned __int16 **)&v20[4])
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v7, v20, 48LL, &v14, Size) == -1)
      || (v8 = 1, !v14) )
    {
      v8 = 0;
    }
    goto LABEL_7;
  }
  v14 = 56;
  if ( a2 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    v11 = 2 * v10 + 2;
    if ( v11 + 7 >= v11 && ((v11 + 7) & 0xFFFFFFF8) + 56 >= 0x38 )
    {
      v14 = ((v11 + 7) & 0xFFFFFFF8) + 56;
      goto LABEL_17;
    }
LABEL_10:
    v8 = 0;
    goto LABEL_8;
  }
LABEL_17:
  v12 = UMPDOBJ::bThunkLargeBitmap(v19, a1, &v17, &v18, &v16, &v15, &v14);
  v4 = v15;
  v8 = v12;
  v14 = v12;
  if ( v12 )
    goto LABEL_3;
LABEL_7:
  if ( v16 )
  {
    if ( v4 )
      UMPDOBJ::bDeleteLargeBitmaps(v7, a1, 0LL, 0LL);
    a1->pvBits = v17;
    a1->pvScan0 = v18;
  }
LABEL_8:
  XUMPDOBJ::~XUMPDOBJ(&v19);
  return v8;
}
