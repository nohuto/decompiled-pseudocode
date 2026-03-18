/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1C002C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0017C6C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreLockVisRgn @ 0x1C002BA20 (GreLockVisRgn.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C002C420 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002C700 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0075F30 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1, HDC a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  int v4; // edx
  bool v5; // bl
  int v6; // edx
  __int64 v7; // r8
  __int64 *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1;
  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v9, a2);
    v3 = v9[0];
    if ( !v9[0] )
      return 0LL;
    v2 = v9[0][6];
    v10 = v2;
    v5 = 0;
    if ( (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
    {
      v4 = *((_DWORD *)v3 + 9);
      if ( (v4 & 0x200) == 0 || (*(_DWORD *)v3[122] & 1) != 0 || (v4 & 0x8000) != 0 )
        v5 = 1;
    }
    XDCOBJ::vAltUnlockFast(v9);
  }
  else
  {
    v10 = a1;
    v5 = (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) != 0;
  }
  if ( v5 )
  {
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared();
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemGreLock )
      ExEnterPriorityRegionAndAcquireResourceShared();
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    if ( ghsemDCVisRgn )
      ExEnterPriorityRegionAndAcquireResourceShared();
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  }
  else
  {
    GreLockVisRgn(v2, v6, v7);
  }
  return 1LL;
}
