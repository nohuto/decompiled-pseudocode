/*
 * XREFs of GreDeleteSpriteDelayDelete @ 0x1C025360C
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0065A50 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C000E15C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0074DA8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0075EE0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0261F00 (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreDeleteSpriteDelayDelete(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  unsigned int v4; // edi
  struct DWMSPRITE *v8; // rsi
  __int64 v9; // rcx
  SURFACE *v10; // rax
  __int64 v11; // rcx
  W32PIDLOCK *v12; // rbx
  struct DWMSPRITE *v13; // r8
  _BYTE v15[32]; // [rsp+20h] [rbp-58h] BYREF
  struct DWMSPRITE *v16; // [rsp+40h] [rbp-38h]
  char v17; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v17, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v15, (HWND)a2, a3);
    v8 = v16;
    if ( v16 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)v16 + 21) + 184LL);
      if ( v9 )
      {
        v10 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v9);
        if ( (unsigned int)SURFACE::bRedirectionBitmap(v10) )
        {
          v12 = (W32PIDLOCK *)(v11 + 272);
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v11 + 272));
          W32PIDLOCK::vUnlockSingleThread(v12);
        }
      }
      *((_DWORD *)v8 + 16) = *((_DWORD *)v8 + 14);
      *((_DWORD *)v8 + 17) = *((_DWORD *)v8 + 15);
      v13 = v16;
      if ( v16 )
        _InterlockedDecrement((volatile signed __int32 *)v16 + 3);
      v16 = 0LL;
      vspDestroyDwmSpriteObjInternal(a1, 0LL, v13);
      if ( v16 )
        _InterlockedDecrement((volatile signed __int32 *)v16 + 3);
    }
    v16 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v15);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v17);
  }
  else
  {
    return (unsigned int)GdiDeleteSpriteDelayDelete(a1, (HWND)a2, a3);
  }
  return v4;
}
