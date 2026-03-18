/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0062CEC
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0108BB8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0062DDC (--1RFONTOBJ@@QEAA@XZ.c)
 *     HmgFree @ 0x1C0062E00 (HmgFree.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C0062EC8 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C009EA10 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C009ED90 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(DC **this, unsigned int a2)
{
  DC *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  DC *v7; // rdx
  _QWORD *v9; // rsi
  unsigned int v10; // ebp
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  struct PFT *v12; // [rsp+40h] [rbp+8h] BYREF

  RFONTOBJ::RFONTOBJ((RFONTOBJ *)v11, *((struct RFONT **)*this + 221));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1208));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1344));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1480));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1616));
  DC::hpath(*this, 0LL);
  if ( (int)IsXDCOBJ_vCleanupColorTransformSupported() >= 0 )
    XDCOBJ_vCleanupColorTransformWrap(this, a2);
  v4 = *this;
  v5 = (_QWORD *)*((_QWORD *)*this + 260);
  if ( v5 )
  {
    do
    {
      v9 = v5;
      v5 = (_QWORD *)v5[1];
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
      v10 = 32;
      v12 = *(struct PFT **)(*v9 + 128LL);
      if ( v12 == gpPFTPrivate )
        v10 = 64;
      --*(_DWORD *)(*v9 + 64LL);
      if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
        PFTOBJ_bUnloadWorkhorseWrap(&v12, *v9, 0LL, v10);
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
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v11);
  return 1LL;
}
