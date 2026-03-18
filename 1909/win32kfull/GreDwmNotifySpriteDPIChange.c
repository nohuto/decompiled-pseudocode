/*
 * XREFs of GreDwmNotifySpriteDPIChange @ 0x1C00303CC
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C002FA68 (UpdateWindowSpriteDPI.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E85C8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C002FAD8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0030A78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0030AC0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     DwmAsyncNotifySpriteDPIChange @ 0x1C0030CCC (DwmAsyncNotifySpriteDPIChange.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDwmNotifySpriteDPIChange(__int64 a1, HWND a2, HSPRITE a3)
{
  unsigned int v5; // edi
  struct PDEVOBJ *v6; // rdx
  __int64 v7; // rbx
  void *v8; // rax
  unsigned int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  v5 = 0;
  v12 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v13, v6, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v11, a2, a3);
    v7 = v11;
    if ( v11 )
    {
      v8 = (void *)UserReferenceDwmApiPort();
      v9 = DwmAsyncNotifySpriteDPIChange(v8);
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
      v5 = v9;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v13);
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  return v5;
}
