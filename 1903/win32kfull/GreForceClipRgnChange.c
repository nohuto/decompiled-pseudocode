/*
 * XREFs of GreForceClipRgnChange @ 0x1C0044764
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002A528 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002A608 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C002A650 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0046D0C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 */

void __fastcall GreForceClipRgnChange(__int64 a1, struct PDEVOBJ *a2)
{
  __int64 v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  char v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v4, a2, 0LL, 0LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v5, (HWND)a2);
  v3 = v5;
  if ( v5 )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v6, (struct _EX_PUSH_LOCK *)(v5 + 88));
    vSpDwmFlushSpriteClipRgnChange(*(struct SFMLOGICALSURFACE **)(v3 + 168));
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v4);
}
