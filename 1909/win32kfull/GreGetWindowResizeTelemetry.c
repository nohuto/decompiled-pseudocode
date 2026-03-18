/*
 * XREFs of GreGetWindowResizeTelemetry @ 0x1C026CAA8
 * Callers:
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01FB614 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0030998 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetWindowResizeTelemetry(HWND a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v8 = 0;
  v13 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v12, a1);
    v9 = v12;
    if ( v12 )
    {
      v10 = *(_DWORD *)(v12 + 136);
      if ( v10 )
      {
        *a2 = *(_DWORD *)(v12 + 132) / v10;
        *a3 = *(_DWORD *)(v9 + 128);
        *a4 = *(_DWORD *)(v9 + 152);
        *(_QWORD *)(v9 + 128) = 0LL;
        *(_DWORD *)(v9 + 136) = 0;
        *(_DWORD *)(v9 + 152) = 0;
        v8 = 1;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v8;
}
