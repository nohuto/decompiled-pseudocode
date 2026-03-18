/*
 * XREFs of GreWindowLayoutComplete @ 0x1C00FF220
 * Callers:
 *     NtUserLayoutCompleted @ 0x1C00FF110 (NtUserLayoutCompleted.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0079CB8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C023A9A4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowLayoutComplete(HWND a1, struct DWMSPRITE *a2, __int64 a3, int *a4)
{
  unsigned int v5; // edi
  int v7; // esi
  volatile signed __int32 *v8; // rbx
  int v10; // eax
  struct DWMSPRITE *v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v11 = a2;
  v5 = 0;
  v7 = 0;
  v12 = 0;
  v13 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v11, a1);
    v8 = (volatile signed __int32 *)v11;
    if ( v11 )
    {
      if ( *((_DWORD *)v11 + 29) )
      {
        v10 = *((_DWORD *)v11 + 31);
        if ( v10 > 0 )
        {
          *((_DWORD *)v11 + 31) = v10 - 1;
          CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v8, 0, &v12);
        }
      }
      _InterlockedDecrement(v8 + 3);
      v5 = 1;
      v7 = v12;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  *a4 = v7;
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v5;
}
