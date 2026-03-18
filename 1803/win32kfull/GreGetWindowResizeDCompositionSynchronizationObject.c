/*
 * XREFs of GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C00FBBEC
 * Callers:
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00FBAF8 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0079CB8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetWindowResizeDCompositionSynchronizationObject(HWND a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  v9 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v8, a1);
    v5 = v8;
    if ( v8 )
    {
      v7 = *(_QWORD *)(v8 + 96);
      if ( v7 )
      {
        ObfReferenceObject(*(PVOID *)(v8 + 96));
        v7 = *(_QWORD *)(v5 + 96);
      }
      *a2 = v7;
      v4 = 1;
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v4;
}
