/*
 * XREFs of ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C02A3520
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00952BC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0099828 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00F0AC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5A9C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvIcmCheckBitmapBits(struct DHPDEV__ *a1, void *a2, struct _SURFOBJ *a3, unsigned __int8 *a4)
{
  int v5; // r15d
  UMPDOBJ *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned int v13; // edi
  size_t Size; // [rsp+20h] [rbp-69h]
  unsigned int v16; // [rsp+40h] [rbp-49h] BYREF
  int v17; // [rsp+44h] [rbp-45h] BYREF
  int v18; // [rsp+48h] [rbp-41h] BYREF
  void *v19; // [rsp+50h] [rbp-39h] BYREF
  void *v20; // [rsp+58h] [rbp-31h] BYREF
  UMPDOBJ *v21; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v22[7]; // [rsp+68h] [rbp-21h] BYREF

  v18 = 0;
  v5 = 0;
  v16 = 1;
  v17 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  v19 = 0LL;
  v20 = 0LL;
  memset(v22, 0, sizeof(v22));
  v9 = v21;
  if ( !v21 )
    goto LABEL_15;
  v22[0] = 0x4200000038LL;
  v10 = *(_QWORD *)v21;
  v22[4] = a2;
  v11 = a3->sizlBitmap.cx * a3->sizlBitmap.cy;
  v22[2] = v10;
  v22[3] = a1;
  v22[5] = a3;
  v22[6] = a4;
  if ( !*((_DWORD *)v21 + 106) )
  {
LABEL_6:
    if ( !(unsigned int)UMPDOBJ::pso(v9, (UMPDOBJ *)((char *)v9 + 64), (struct _SURFOBJ **)&v22[5], v5)
      || (v13 = 1, (v22[6] = UMPDOBJ::_AllocUserMem(v9, v11, 1)) == 0LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v9, v22, 56LL, &v16, Size) == -1)
      || !v16 )
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
  v16 = ((v11 + 7) & 0xFFFFFFF8) + 64;
  v12 = UMPDOBJ::bThunkLargeBitmap(v21, a3, &v19, &v20, &v18, &v17, &v16);
  v5 = v17;
  v13 = v12;
  v16 = v12;
  if ( v12 )
    goto LABEL_6;
LABEL_11:
  if ( v18 )
  {
    if ( v5 )
      UMPDOBJ::bDeleteLargeBitmaps(v9, a3, 0LL, 0LL);
    a3->pvBits = v19;
    a3->pvScan0 = v20;
  }
LABEL_16:
  XUMPDOBJ::~XUMPDOBJ(&v21);
  return v13;
}
