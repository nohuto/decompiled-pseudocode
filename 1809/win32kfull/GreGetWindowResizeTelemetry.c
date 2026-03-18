/*
 * XREFs of GreGetWindowResizeTelemetry @ 0x1C0253B48
 * Callers:
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01E5FEC (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0075DF8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetWindowResizeTelemetry(HWND a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[32]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]

  v8 = 0;
  v12 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v13, a1);
    v9 = v14;
    if ( v14 )
    {
      v10 = *(_DWORD *)(v14 + 136);
      if ( v10 )
      {
        *a2 = *(_DWORD *)(v14 + 132) / v10;
        *a3 = *(_DWORD *)(v9 + 128);
        *a4 = *(_DWORD *)(v9 + 152);
        *(_DWORD *)(v9 + 128) = 0;
        *(_DWORD *)(v9 + 132) = 0;
        *(_DWORD *)(v9 + 136) = 0;
        *(_DWORD *)(v9 + 152) = 0;
        v8 = 1;
        v9 = v14;
      }
      if ( v9 )
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
    }
    v14 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v13);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  return v8;
}
