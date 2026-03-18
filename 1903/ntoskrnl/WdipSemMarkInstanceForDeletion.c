/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x1407165F4
 * Callers:
 *     WdipSemDisableScenario @ 0x1407164A4 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140716678 (WdipSemQueryEnabledInstanceTable.c)
 */

__int64 __fastcall WdipSemMarkInstanceForDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx
  __int64 EnabledInstanceTable; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140435238, 0LL);
  if ( a1 )
  {
    EnabledInstanceTable = WdipSemQueryEnabledInstanceTable(a1);
    v2 = EnabledInstanceTable;
    if ( EnabledInstanceTable )
    {
      if ( *(_DWORD *)(EnabledInstanceTable + 44) )
        v2 = 0LL;
      else
        *(_DWORD *)(EnabledInstanceTable + 44) = 1;
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140435238, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
