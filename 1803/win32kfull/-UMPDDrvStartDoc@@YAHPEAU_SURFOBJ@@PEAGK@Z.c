/*
 * XREFs of ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x1C0118170
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C00188D0 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C001890C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0018E4C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C027CB58 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvStartDoc(struct _SURFOBJ *a1, unsigned __int16 *a2, int a3)
{
  int v4; // esi
  UMPDOBJ *v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // eax
  size_t Size; // [rsp+20h] [rbp-59h]
  unsigned int v17; // [rsp+40h] [rbp-39h] BYREF
  int v18; // [rsp+44h] [rbp-35h] BYREF
  int v19; // [rsp+48h] [rbp-31h] BYREF
  void *v20; // [rsp+50h] [rbp-29h] BYREF
  void *v21; // [rsp+58h] [rbp-21h] BYREF
  UMPDOBJ *v22; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v23[6]; // [rsp+68h] [rbp-11h] BYREF

  v17 = 1;
  v19 = 0;
  v18 = 0;
  v4 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v22);
  v20 = 0LL;
  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  v7 = v22;
  if ( !v22 )
    goto LABEL_10;
  if ( !*((_DWORD *)v22 + 106) )
  {
LABEL_3:
    v23[0] = 0x2300000030LL;
    v23[2] = *(_QWORD *)v7;
    v23[3] = a1;
    v23[4] = a2;
    LODWORD(v23[5]) = a3;
    if ( !(unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), (struct _SURFOBJ **)&v23[3], v4)
      || !(unsigned int)UMPDOBJ::ThunkStringW(v7, (unsigned __int16 **)&v23[4])
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v7, v23, 0x30u, &v17, Size) == -1)
      || (v8 = 1, !v17) )
    {
      v8 = 0;
    }
    goto LABEL_7;
  }
  v17 = 56;
  if ( a2 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    v11 = 2 * v10 + 2;
    v12 = 2 * v10 + 9;
    if ( v12 < v11 )
      goto LABEL_10;
    v13 = v12 & 0xFFFFFFF8;
    v14 = -1;
    if ( v13 < 0xFFFFFFC8 )
      v14 = v13 + 56;
    v17 = v14;
    if ( v13 >= 0xFFFFFFC8 )
    {
LABEL_10:
      v8 = 0;
      goto LABEL_8;
    }
  }
  v15 = UMPDOBJ::bThunkLargeBitmap(v22, a1, &v20, &v21, &v19, &v18, &v17);
  v4 = v18;
  v8 = v15;
  v17 = v15;
  if ( v15 )
    goto LABEL_3;
LABEL_7:
  if ( v19 )
  {
    if ( v4 )
      UMPDOBJ::bDeleteLargeBitmaps(v7, a1, 0LL, 0LL);
    a1->pvBits = v20;
    a1->pvScan0 = v21;
  }
LABEL_8:
  XUMPDOBJ::~XUMPDOBJ(&v22);
  return v8;
}
