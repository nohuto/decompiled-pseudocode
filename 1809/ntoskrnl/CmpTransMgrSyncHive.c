/*
 * XREFs of CmpTransMgrSyncHive @ 0x1406FE3B4
 * Callers:
 *     CmpTransMgrPrepare @ 0x1406FE07C (CmpTransMgrPrepare.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x1405FBD2C (HvpMarkDirty.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR BugCheckParameter2)
{
  volatile signed __int64 *v2; // rdi
  char v3; // bl
  int v4; // esi
  char v6; // r14
  char v7; // cl

  CmpLockRegistry();
  v2 = (volatile signed __int64 *)(BugCheckParameter2 + 72);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 72, 0LL);
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 )
    goto LABEL_2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  v6 = HvpMarkDirty(BugCheckParameter2, 0, 32, 0);
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
  KeAbPostRelease(BugCheckParameter2 + 80);
  if ( v6 )
  {
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
LABEL_2:
    v3 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 72));
    KeAbPostRelease(BugCheckParameter2 + 72);
    CmpUnlockRegistry();
    v4 = CmpFlushHive(BugCheckParameter2, 0);
    if ( v4 < 0 )
      return (unsigned int)-1073741670;
    return (unsigned int)v4;
  }
  v4 = -1073741670;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  CmpUnlockRegistry();
  return (unsigned int)v4;
}
