/*
 * XREFs of GreConfirmWindowResizeCommit @ 0x1C026C4D0
 * Callers:
 *     NtUserConfirmResizeCommit @ 0x1C022A0E0 (NtUserConfirmResizeCommit.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0030998 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreConfirmWindowResizeCommit(HWND a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v6 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v5, a1);
    v3 = v5;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 124) = 0;
      v2 = 1;
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  return v2;
}
