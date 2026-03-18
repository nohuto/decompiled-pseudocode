/*
 * XREFs of GreIsWindowResizeInProgress @ 0x1C0074940
 * Callers:
 *     DwmChildRectChange @ 0x1C00A746C (DwmChildRectChange.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01EA210 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0075DF8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

_BOOL8 __fastcall GreIsWindowResizeInProgress(HWND a1, _DWORD *a2)
{
  BOOL v4; // ebx
  int *v5; // rcx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  int *v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v9 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v7, a1);
    v5 = v8;
    if ( v8 )
    {
      v4 = 1;
      if ( v8[29] < 1 )
        v4 = v8[31] != 0;
      if ( a2 )
        *a2 = v8[30] > 0;
      _InterlockedDecrement(v5 + 3);
    }
    v8 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v7);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v4;
}
