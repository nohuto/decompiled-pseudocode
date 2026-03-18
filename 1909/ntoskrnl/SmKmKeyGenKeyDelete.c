/*
 * XREFs of SmKmKeyGenKeyDelete @ 0x1408E96F4
 * Callers:
 *     SmKmKeyGenGenerate @ 0x1408E95E4 (SmKmKeyGenGenerate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

void __fastcall SmKmKeyGenKeyDelete(volatile signed __int64 *BugCheckParameter2, PPRIVILEGE_SET Privileges)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  PPRIVILEGE_SET *Luid; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v5 = *(_QWORD *)&Privileges->PrivilegeCount;
  if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) != Privileges
    || (Luid = (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid, *Luid != Privileges) )
  {
    __fastfail(3u);
  }
  *Luid = (PPRIVILEGE_SET)v5;
  *(_QWORD *)(v5 + 8) = Luid;
  CmSiFreeMemory(Privileges);
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
