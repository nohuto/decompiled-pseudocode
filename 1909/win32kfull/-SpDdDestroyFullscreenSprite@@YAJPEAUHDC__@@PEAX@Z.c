/*
 * XREFs of ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026B48C
 * Callers:
 *     NtGdiDdDestroyFullscreenSprite @ 0x1C0274E70 (NtGdiDdDestroyFullscreenSprite.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0030A78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0030AC0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     GreDeleteSprite @ 0x1C0089B04 (GreDeleteSprite.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall SpDdDestroyFullscreenSprite(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  HDEV v4; // rsi
  struct PDEVOBJ *v5; // rdx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v8[1] = 0LL;
  v3 = -1073741811;
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  if ( v8[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
    v10 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    v4 = *(HDEV *)(v8[0] + 48LL);
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v9, v5, 0LL, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( g_pDwmState && (unsigned int)GreDeleteSprite(v4, 0LL, a2, 1) )
      v3 = 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v9);
    SEMOBJ::vUnlock((SEMOBJ *)&v10);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  }
  return v3;
}
