/*
 * XREFs of GreSetRedirectionBitmapOwner @ 0x1C0118D0C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C0077534 (CreateOrGetRedirectionBitmap.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01D4004 (ChangeRedirectionBitmapOwner.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetRedirectionBitmapOwner(HSURF a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  SURFACE *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[32]; // [rsp+28h] [rbp-28h] BYREF
  SURFACE *v11; // [rsp+48h] [rbp-8h]
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v6 = 0;
  if ( (unsigned int)GreSetBitmapOwner(a1, 0LL) )
  {
    SURFREF::SURFREF((SURFREF *)v10, a1);
    v7 = v11;
    if ( v11 )
    {
      if ( (*((_DWORD *)v11 + 28) & 0x800) != 0 )
      {
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v9, (struct _SURFOBJ *)((char *)v11 + 24));
        W32PIDLOCK::vLockSingleThread((SURFACE *)((char *)v11 + 272));
        v12 = *((_QWORD *)v11 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v12, (struct _SURFOBJ *)((char *)v11 + 24), 0LL, 2u);
        if ( a2 != -1 )
          *((_QWORD *)v11 + 81) = a2;
        *((_DWORD *)v11 + 164) = a3;
        W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)v11 + 272));
        v6 = 1;
        if ( a3 && (unsigned int)SURFACE::Map(v11, v10, 0LL) <= 1 )
          SURFACE::bUnMap(v11, v10, 0LL);
        if ( v9 )
          GreUnlockDisplayDevice(*(_QWORD *)(v9 + 48));
        v7 = v11;
      }
      if ( v7 )
        DEC_SHARE_REF_CNT(v7);
    }
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v10);
  }
  return v6;
}
