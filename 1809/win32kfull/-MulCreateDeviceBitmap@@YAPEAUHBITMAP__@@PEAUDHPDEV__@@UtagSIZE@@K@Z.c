/*
 * XREFs of ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C0285410
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C0289E04 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C028A164 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmap(struct DHPDEV__ *a1, SIZEL sizl, ULONG iFormat)
{
  __int64 **v3; // rsi
  struct _MDSURF *v4; // rdi
  HBITMAP Bitmap; // rbp
  __int64 *v9; // rax
  HSURF v10; // rax
  HSURF v11; // r12
  SURFOBJ *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE v16[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int64 *v18; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(__int64 ***)a1;
  v4 = 0LL;
  Bitmap = 0LL;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v9 = v3[6];
      v18 = v9;
      if ( (v9[228] & 0x8000000) != 0 && v9[346] )
      {
        v10 = (HSURF)((__int64 (__fastcall *)(__int64, SIZEL, _QWORD))v9[346])(v9[225], sizl, iFormat);
        v11 = v10;
        v12 = v10 ? EngLockSurface(v10) : 0LL;
        if ( v12 )
        {
          if ( !v4 )
          {
            v4 = pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
            if ( !v4 )
              goto LABEL_20;
            Bitmap = EngCreateBitmap(sizl, 0, iFormat, 1u, 0LL);
            if ( !Bitmap )
            {
              EngFreeMem(v4);
LABEL_20:
              EngUnlockSurface(v12);
              EngDeleteSurface(v11);
              return 0LL;
            }
          }
          v13 = *((_QWORD *)v4 + 1);
          *(_QWORD *)v4 = a1;
          *(_QWORD *)(v13 + 8LL * *((unsigned int *)v3 + 4)) = v12;
          v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
          *(_DWORD *)(v14 + 112) |= 0x80000u;
          *(_QWORD *)(v14 + 144) = Bitmap;
          vSetupDevBitmap((struct PDEVOBJ *)&v18, (struct SURFACE *)v14);
        }
      }
      v3 = (__int64 **)*v3;
    }
    while ( v3 );
    if ( v4 )
    {
      SURFREF::SURFREF((SURFREF *)v16, (HSURF)Bitmap);
      if ( v17 )
      {
        *(_DWORD *)(v17 + 112) |= 0x400000u;
        *(_WORD *)(v17 + 100) = 3;
        *(_QWORD *)(v17 + 24) = v4;
        EngAssociateSurface((HSURF)Bitmap, *((HDEV *)a1 + 4), *((_DWORD *)a1 + 17));
        if ( v17 )
          DEC_SHARE_REF_CNT(v17);
      }
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v16);
    }
  }
  return Bitmap;
}
