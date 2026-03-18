/*
 * XREFs of ?UMPDDrvEndDoc@@YAHPEAU_SURFOBJ@@K@Z @ 0x1C0135750
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C001890C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0018E4C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C027CB58 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvEndDoc(struct _SURFOBJ *a1, int a2)
{
  unsigned int v2; // edi
  int v4; // r14d
  UMPDOBJ *v6; // rbx
  int v7; // esi
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
  v11 = 1;
  v13 = 0;
  v12 = 0;
  v4 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v16);
  v14 = 0LL;
  v15 = 0LL;
  memset(v17, 0, sizeof(v17));
  v6 = v16;
  if ( v16 )
  {
    if ( !*((_DWORD *)v16 + 106)
      || (v11 = 48,
          v9 = UMPDOBJ::bThunkLargeBitmap(v16, a1, &v14, &v15, &v13, &v12, &v11),
          v4 = v12,
          v7 = v9,
          (v11 = v9) != 0) )
    {
      v17[0] = 0x2200000028LL;
      v17[2] = *(_QWORD *)v6;
      v17[3] = a1;
      LODWORD(v17[4]) = a2;
      if ( !(unsigned int)UMPDOBJ::pso(v6, (UMPDOBJ *)((char *)v6 + 64), (struct _SURFOBJ **)&v17[3], v4)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v6, v17, 0x28u, &v11, Size) == -1)
        || (v7 = 1, !v11) )
      {
        v7 = 0;
      }
    }
    if ( v13 )
    {
      if ( v4 )
        UMPDOBJ::bDeleteLargeBitmaps(v6, a1, 0LL, 0LL);
      a1->pvBits = v14;
      a1->pvScan0 = v15;
    }
    v2 = v7;
  }
  XUMPDOBJ::~XUMPDOBJ(&v16);
  return v2;
}
