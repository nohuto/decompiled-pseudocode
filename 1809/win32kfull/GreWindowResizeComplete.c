/*
 * XREFs of GreWindowResizeComplete @ 0x1C025450C
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0075DF8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0075EE0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00A1DA0 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C0156870 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0251A34 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeComplete(__int64 a1, HWND a2)
{
  unsigned int v4; // esi
  struct PDEVOBJ *v5; // rdx
  struct DWMSPRITE *v6; // rbx
  int v7; // eax
  int v8; // r15d
  SFMLOGICALSURFACE *v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v14[32]; // [rsp+28h] [rbp-71h] BYREF
  struct DWMSPRITE *v15; // [rsp+48h] [rbp-51h]
  __int64 v16; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v18[112]; // [rsp+80h] [rbp-19h] BYREF
  char v19; // [rsp+110h] [rbp+77h] BYREF
  __int64 v20; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = 0;
  v13 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v19, v5, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v14, a2);
    v6 = v15;
    if ( v15 )
    {
      v7 = *((_DWORD *)v15 + 29);
      v8 = 0;
      v9 = (SFMLOGICALSURFACE *)*((_QWORD *)v15 + 21);
      if ( v7 >= 1 )
      {
        if ( v7 == 2 )
        {
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v15 + 21)) )
          {
            v20 = a1;
            DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17, (struct PDEVOBJ *)&v20);
            if ( a1 && *(_QWORD *)(a1 + 3512) )
            {
              if ( (*(_DWORD *)(a1 + 40) & 0x4000000) != 0 )
              {
                v10 = (_QWORD *)SFMLOGICALSURFACE::AdapterLuid(v9, &v16);
                v11 = *(_QWORD *)(a1 + 1800);
                if ( v11 )
                  *(_QWORD *)(v11 + 104) = *v10;
              }
              v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3512))(*(_QWORD *)(a1 + 1800), *(_QWORD *)v9);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
            DCOBJ::~DCOBJ((DCOBJ *)v18);
          }
          if ( v8 )
          {
            *((_DWORD *)v6 + 29) = 3;
          }
          else
          {
            *((_DWORD *)v6 + 29) = 1;
            CheckAndProcessWindowResizeComplete(v6, 0, 0LL);
          }
          v6 = v15;
        }
        v4 = 1;
      }
      if ( v6 )
        _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
    }
    v15 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v14);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v19);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v4;
}
