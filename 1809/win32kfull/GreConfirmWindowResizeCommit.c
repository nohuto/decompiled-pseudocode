/*
 * XREFs of GreConfirmWindowResizeCommit @ 0x1C0253500
 * Callers:
 *     NtUserConfirmResizeCommit @ 0x1C02129A0 (NtUserConfirmResizeCommit.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0075DF8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreConfirmWindowResizeCommit(HWND a1)
{
  unsigned int v2; // ebx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v6 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v4, a1);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 124) = 0;
      v2 = 1;
      if ( v5 )
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
    }
    v5 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v4);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  return v2;
}
