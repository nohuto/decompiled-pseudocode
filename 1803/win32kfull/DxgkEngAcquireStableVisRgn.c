/*
 * XREFs of DxgkEngAcquireStableVisRgn @ 0x1C02429E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  __int64 v2; // rbx
  int v3; // eax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  UserEnterUserCritSecShared();
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  MDCOBJ::MDCOBJ((MDCOBJ *)v4, a1);
  v2 = v4[0];
  if ( v4[0]
    && ((v5 = *(_QWORD *)(v4[0] + 48LL), (*(_DWORD *)(*(_QWORD *)(v4[0] + 80LL) + 12LL) & 1) != 0)
     || (v3 = *(_DWORD *)(v4[0] + 36LL), (v3 & 0x200) != 0) && (v3 & 0x8000) != 0)
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v5) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
  }
  else
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( v2 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
}
