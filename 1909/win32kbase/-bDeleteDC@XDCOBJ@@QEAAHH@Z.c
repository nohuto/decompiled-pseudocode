/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C001A294
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C001ADA8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BCED0 (GreRestoreDCInternal.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C001A380 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C001A3C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     HmgFree @ 0x1C001A3F0 (HmgFree.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C001A4B8 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00AD6B0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(DC **this, unsigned int a2)
{
  DC *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  DC *v7; // rdx
  _QWORD *v9; // rsi
  unsigned int v10; // ebp
  struct PFT *v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v12, *((struct RFONT **)*this + 218));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1184));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1320));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1456));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1592));
  DC::hpath(*this, 0LL);
  if ( (int)IsXDCOBJ_vCleanupColorTransformSupported() >= 0 )
    XDCOBJ_vCleanupColorTransformWrap(this, a2);
  v4 = *this;
  v5 = (_QWORD *)*((_QWORD *)*this + 257);
  if ( v5 )
  {
    do
    {
      v9 = v5;
      v5 = (_QWORD *)v5[1];
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
      v10 = 32;
      v11 = *(struct PFT **)(*v9 + 128LL);
      if ( v11 == gpPFTPrivate )
        v10 = 64;
      --*(_DWORD *)(*v9 + 64LL);
      if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
        PFTOBJ_bUnloadWorkhorseWrap(&v11, *v9, 0LL, v10);
      Win32FreePool((__int64)v9);
    }
    while ( v5 );
    v4 = *this;
  }
  v6 = *((_QWORD *)v4 + 37);
  v7 = v4;
  if ( v6 && (DC *)v6 != (DC *)((char *)v4 + 264) )
  {
    Win32FreePool(v6);
    *((_QWORD *)*this + 37) = 0LL;
    v7 = *this;
  }
  HmgFree(*(_QWORD *)v7);
  *this = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  return 1LL;
}
