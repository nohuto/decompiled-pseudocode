/*
 * XREFs of ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C00FD330
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00952BC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00996D0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0099828 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00F0AC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5A9C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvQueryPerBandInfo(struct _SURFOBJ *a1, struct _PERBANDINFO *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // r15d
  UMPDOBJ *v7; // rbx
  char *v8; // rax
  char *KernelPtr; // rax
  char *v10; // rax
  unsigned int v12; // eax
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v14; // [rsp+40h] [rbp-29h] BYREF
  int v15; // [rsp+44h] [rbp-25h] BYREF
  int v16; // [rsp+48h] [rbp-21h] BYREF
  void *v17; // [rsp+50h] [rbp-19h] BYREF
  void *v18; // [rsp+58h] [rbp-11h] BYREF
  UMPDOBJ *v19; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v20[5]; // [rsp+68h] [rbp-1h] BYREF

  v2 = 0;
  v4 = 1;
  v16 = 0;
  v14 = 1;
  v5 = 0;
  v15 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v19);
  v17 = 0LL;
  v18 = 0LL;
  memset(v20, 0, sizeof(v20));
  v7 = v19;
  if ( v19 )
  {
    if ( !*((_DWORD *)v19 + 106)
      || (v14 = 72,
          v12 = UMPDOBJ::bThunkLargeBitmap(v19, a1, &v17, &v18, &v16, &v15, &v14),
          v5 = v15,
          v4 = v12,
          (v14 = v12) != 0) )
    {
      v20[0] = 0x4B00000028LL;
      v20[2] = *(_QWORD *)v7;
      v20[3] = a1;
      if ( (unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), (struct _SURFOBJ **)&v20[3], v5) )
      {
        v8 = (char *)UMPDOBJ::_AllocUserMem(v7, 0x14u, 0);
        v20[4] = v8;
        if ( v8 )
        {
          if ( a2 )
          {
            KernelPtr = UMPDOBJ::GetKernelPtr(v7, v8);
            *(_OWORD *)KernelPtr = *(_OWORD *)&a2->bRepeatThisBand;
            *((_DWORD *)KernelPtr + 4) = a2->ulVertRes;
          }
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v7, v20, 40LL, &v14, Size) != -1 && a2 )
          {
            v10 = UMPDOBJ::GetKernelPtr(v7, (char *)v20[4]);
            *(_OWORD *)&a2->bRepeatThisBand = *(_OWORD *)v10;
            a2->ulVertRes = *((_DWORD *)v10 + 4);
          }
          v4 = v14;
        }
      }
    }
    if ( v16 )
    {
      if ( v5 )
        UMPDOBJ::bDeleteLargeBitmaps(v7, a1, 0LL, 0LL);
      a1->pvBits = v17;
      a1->pvScan0 = v18;
    }
    v2 = v4;
  }
  XUMPDOBJ::~XUMPDOBJ(&v19);
  return v2;
}
