/*
 * XREFs of ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025232C
 * Callers:
 *     NtGdiDdDestroyFullscreenSprite @ 0x1C025BE60 (NtGdiDdDestroyFullscreenSprite.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C000DC58 (GreDeleteSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0075EE0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall SpDdDestroyFullscreenSprite(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  HDEV v4; // rsi
  struct PDEVOBJ *v5; // rdx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  _QWORD v8[9]; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+80h] [rbp+18h] BYREF
  __int64 v10; // [rsp+88h] [rbp+20h] BYREF

  v3 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
    v10 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    v4 = *(HDEV *)(v8[0] + 48LL);
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v9, v5, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( g_pDwmState && (unsigned int)GreDeleteSprite(v4, 0LL, a2, 1) )
      v3 = 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v9);
    SEMOBJ::vUnlock((SEMOBJ *)&v10);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v3;
}
