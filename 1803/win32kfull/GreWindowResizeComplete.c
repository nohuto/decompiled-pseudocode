/*
 * XREFs of GreWindowResizeComplete @ 0x1C023D070
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0079CB8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0079DCC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0079E08 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00C7A78 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C013451C (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C023A9A4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeComplete(__int64 a1, HWND a2)
{
  unsigned int v4; // edi
  struct PDEVOBJ *v5; // rdx
  struct DWMSPRITE *v6; // rbx
  int v7; // ebp
  SFMLOGICALSURFACE *v8; // r14
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-88h] BYREF
  __int64 v14; // [rsp+28h] [rbp-80h] BYREF
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v16[80]; // [rsp+40h] [rbp-68h] BYREF
  char v17; // [rsp+C0h] [rbp+18h] BYREF
  struct DWMSPRITE *v18; // [rsp+C8h] [rbp+20h] BYREF

  v4 = 0;
  v14 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v17, v5, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v18, a2);
    v6 = v18;
    if ( v18 )
    {
      v7 = 0;
      v8 = (SFMLOGICALSURFACE *)*((_QWORD *)v18 + 21);
      if ( *((_DWORD *)v18 + 29) )
      {
        if ( *((_DWORD *)v18 + 30) )
        {
          if ( !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v18 + 21)) )
            goto LABEL_13;
          v13 = a1;
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v13);
          if ( a1 && *(_QWORD *)(a1 + 3504) )
          {
            if ( (*(_DWORD *)(a1 + 40) & 0x4000000) != 0 )
            {
              v10 = (_QWORD *)SFMLOGICALSURFACE::AdapterLuid(v8, &v15);
              v11 = *(_QWORD *)(a1 + 1792);
              if ( v11 )
                *(_QWORD *)(v11 + 104) = *v10;
            }
            v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3504))(*(_QWORD *)(a1 + 1792), *(_QWORD *)v8);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
          if ( !v7 )
          {
LABEL_13:
            *((_DWORD *)v6 + 30) = 0;
            CheckAndProcessWindowResizeComplete(v6, 0LL, 0LL, v9);
          }
        }
        v4 = 1;
      }
      _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v17);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  return v4;
}
