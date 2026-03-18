/*
 * XREFs of ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C02A3A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0050018 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007A1D0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5F4C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvIcmCheckBitmapBits(struct DHPDEV__ *a1, void *a2, struct _SURFOBJ *a3, unsigned __int8 *a4)
{
  int v5; // r15d
  UMPDOBJ *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r9
  size_t Size; // [rsp+20h] [rbp-69h]
  unsigned int v17; // [rsp+40h] [rbp-49h] BYREF
  int v18; // [rsp+44h] [rbp-45h] BYREF
  int v19; // [rsp+48h] [rbp-41h] BYREF
  void *v20; // [rsp+50h] [rbp-39h] BYREF
  void *v21; // [rsp+58h] [rbp-31h] BYREF
  UMPDOBJ *v22; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v23[7]; // [rsp+68h] [rbp-21h] BYREF

  v19 = 0;
  v5 = 0;
  v17 = 1;
  v18 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v22);
  v20 = 0LL;
  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  v9 = v22;
  if ( !v22 )
    goto LABEL_15;
  v23[0] = 0x4200000038LL;
  v10 = *(_QWORD *)v22;
  v23[4] = a2;
  v11 = a3->sizlBitmap.cx * a3->sizlBitmap.cy;
  v23[2] = v10;
  v23[3] = a1;
  v23[5] = a3;
  v23[6] = a4;
  if ( !*((_DWORD *)v22 + 106) )
  {
LABEL_6:
    if ( !(unsigned int)UMPDOBJ::pso(v9, (UMPDOBJ *)((char *)v9 + 64), (struct _SURFOBJ **)&v23[5], v5)
      || (v13 = 1, (v23[6] = UMPDOBJ::_AllocUserMem(v9, v11, 1LL, v14)) == 0LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v9, v23, 56LL, &v17, Size) == -1)
      || !v17 )
    {
      v13 = 0;
    }
    goto LABEL_11;
  }
  if ( v11 + 7 < v11 || ((v11 + 7) & 0xFFFFFFF8) + 64 < 0x40 )
  {
LABEL_15:
    v13 = 0;
    goto LABEL_16;
  }
  v17 = ((v11 + 7) & 0xFFFFFFF8) + 64;
  v12 = UMPDOBJ::bThunkLargeBitmap(v22, a3, &v20, &v21, &v19, &v18, &v17);
  v5 = v18;
  v13 = v12;
  v17 = v12;
  if ( v12 )
    goto LABEL_6;
LABEL_11:
  if ( v19 )
  {
    if ( v5 )
      UMPDOBJ::bDeleteLargeBitmaps(v9, a3, 0LL, 0LL);
    a3->pvBits = v20;
    a3->pvScan0 = v21;
  }
LABEL_16:
  XUMPDOBJ::~XUMPDOBJ(&v22);
  return v13;
}
