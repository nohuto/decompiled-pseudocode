/*
 * XREFs of NtGdiGetGammaRampCapability @ 0x1C00D73F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0031970 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00319C0 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C00D7024 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 */

_BOOL8 __fastcall NtGdiGetGammaRampCapability(HDC a1)
{
  BOOL v1; // ebx
  __int64 v2; // rdi
  int v3; // r8d
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  int v7; // [rsp+28h] [rbp-8h]
  int v8; // [rsp+2Ch] [rbp-4h]
  __int64 v9; // [rsp+48h] [rbp+18h] BYREF
  PERESOURCE v10; // [rsp+50h] [rbp+20h] BYREF

  v1 = 0;
  v7 = 0;
  v8 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v6, a1);
  v2 = v6;
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 32) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v10, (struct XDCOBJ *)&v6);
      v9 = *(_QWORD *)(v2 + 48);
      if ( (unsigned int)PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v9) )
        v1 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v9) != 0;
      NEEDGRELOCK::vUnlock(&v10);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v3);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v4);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v6);
  }
  return v1;
}
