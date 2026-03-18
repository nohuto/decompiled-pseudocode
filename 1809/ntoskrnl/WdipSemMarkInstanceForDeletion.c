/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x140717634
 * Callers:
 *     WdipSemDisableScenario @ 0x1407174E4 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x1407176B8 (WdipSemQueryEnabledInstanceTable.c)
 */

__int64 __fastcall WdipSemMarkInstanceForDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx
  __int64 EnabledInstanceTable; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14040CF38, 0LL);
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
  ExReleasePushLockEx((ULONG_PTR)&qword_14040CF38, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
