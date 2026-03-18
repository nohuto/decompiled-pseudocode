/*
 * XREFs of GreZorderSprite @ 0x1C0077AAC
 * Callers:
 *     TrackLayeredZorder @ 0x1C0074B68 (TrackLayeredZorder.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C0074BE4 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C0079D50 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0079DCC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0079E08 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C007B560 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C024B480 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 */

void __fastcall GreZorderSprite(HDEV a1, HWND a2, HWND a3, int a4)
{
  struct PDEVOBJ *v8; // rdx
  HSPRITE v9; // rbx
  HSPRITE v10; // r14
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+68h] [rbp+20h] BYREF

  v11[0] = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v12, v8, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v9 = 0LL;
    v10 = DWMSPRITEREF::hspLookupWindow(a2);
    if ( a3 )
      v9 = DWMSPRITEREF::hspLookupWindow(a3);
    vSpDwmZorderSprite(v10, v9);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v12);
  }
  else
  {
    GdiZorderSprite(a1, a2, a3);
  }
  SEMOBJ::vUnlock((SEMOBJ *)v11);
}
