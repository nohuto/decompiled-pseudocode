/*
 * XREFs of GreDeleteSpriteDelayDelete @ 0x1C023C400
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009AF40 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0079D14 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0079DCC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0079E08 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C6438 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C024A10C (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreDeleteSpriteDelayDelete(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  unsigned int v4; // esi
  struct DWMSPRITE *v8; // rbx
  __int64 v9; // rcx
  SURFACE *v10; // rax
  __int64 v11; // rcx
  W32PIDLOCK *v12; // rdi
  struct DWMSPRITE *v14; // [rsp+20h] [rbp-38h] BYREF
  char v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v15, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v14, (HWND)a2, a3);
    v8 = v14;
    if ( v14 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)v14 + 21) + 184LL);
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
      _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
      vspDestroyDwmSpriteObjInternal(a1, 0LL, v8);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v15);
  }
  else
  {
    return (unsigned int)GdiDeleteSpriteDelayDelete(a1, (HWND)a2, a3);
  }
  return v4;
}
