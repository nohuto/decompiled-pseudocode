/*
 * XREFs of GreCancelSynchronizedWindowResize @ 0x1C02533E8
 * Callers:
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E5B50 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0075DF8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0251A34 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

void __fastcall GreCancelSynchronizedWindowResize(HWND a1)
{
  struct DWMSPRITE *v2; // rbx
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF
  struct DWMSPRITE *v4; // [rsp+40h] [rbp-18h]
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  v5 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v3, a1);
    v2 = v4;
    if ( v4 )
    {
      if ( *((int *)v4 + 29) >= 1 )
      {
        CheckAndProcessWindowResizeComplete(v4, 1, 0LL);
        *((_DWORD *)v2 + 38) = 1;
        v2 = v4;
      }
      if ( v2 )
        _InterlockedDecrement((volatile signed __int32 *)v2 + 3);
    }
    v4 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v3);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}
