/*
 * XREFs of GreWindowResizeComplete @ 0x1C026DB34
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0200980 (xxxDrawDragRectEx.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002A528 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002A608 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C002A650 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0046E0C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C015B62C (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B2A8 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeComplete(__int64 a1, HWND a2)
{
  unsigned int v4; // edi
  struct PDEVOBJ *v5; // rdx
  struct DWMSPRITE *v6; // rbx
  int v7; // eax
  int v8; // r15d
  SFMLOGICALSURFACE *v9; // r14
  __int64 v10; // r9
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+28h] [rbp-58h] BYREF
  __int128 v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  int v19; // [rsp+48h] [rbp-38h]
  _QWORD v20[2]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  char v24; // [rsp+C0h] [rbp+40h] BYREF
  struct DWMSPRITE *v25; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0;
  v15 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v24, v5, 0LL, 0LL);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v25, a2);
    v6 = v25;
    if ( v25 )
    {
      v7 = *((_DWORD *)v25 + 29);
      v8 = 0;
      v9 = (SFMLOGICALSURFACE *)*((_QWORD *)v25 + 21);
      if ( v7 >= 1 )
      {
        if ( v7 == 2 )
        {
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v25 + 21)) )
          {
            v11 = *(_DWORD *)(a1 + 40);
            v17 = 0LL;
            v20[1] = 0LL;
            v21 = 256;
            v23 = 0LL;
            v22 = 0LL;
            v20[0] = 0LL;
            v19 = 1;
            if ( (v11 & 1) != 0 )
            {
              *(_QWORD *)&v17 = *(_QWORD *)(a1 + 48);
              v18 = a1;
              GreAcquireSemaphore(v17);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v17, 11LL);
            }
            if ( *(_QWORD *)(a1 + 3512) )
            {
              if ( (*(_DWORD *)(a1 + 40) & 0x4000000) != 0 )
              {
                v12 = (_QWORD *)SFMLOGICALSURFACE::AdapterLuid(v9, &v16);
                v13 = *(_QWORD *)(a1 + 1800);
                if ( v13 )
                  *(_QWORD *)(v13 + 104) = *v12;
              }
              v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3512))(*(_QWORD *)(a1 + 1800), *(_QWORD *)v9);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v17);
            if ( v20[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v20);
          }
          if ( v8 )
          {
            *((_DWORD *)v6 + 29) = 3;
          }
          else
          {
            *((_DWORD *)v6 + 29) = 1;
            CheckAndProcessWindowResizeComplete(v6, 0LL, 0LL, v10);
          }
        }
        v4 = 1;
      }
      _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v24);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  return v4;
}
