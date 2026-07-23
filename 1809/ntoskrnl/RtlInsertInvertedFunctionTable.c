/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x1400F5AB4
 * Callers:
 *     MiProcessLoaderEntry @ 0x1400F5C2C (MiProcessLoaderEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x1400F5B48 (RtlpInsertInvertedFunctionTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x1400F5E00 (MmLockLoadedModuleListExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // esi
  NTSTATUS v4; // eax
  __int64 v5; // rbx
  int v6; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v3 = a1;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, a2, 3LL, (__int64)&v11, v9);
  v5 = v9[0];
  if ( v4 < 0 )
    v5 = 0LL;
  v9[0] = v5;
  MmLockLoadedModuleListExclusive(&v10);
  RtlpInsertInvertedFunctionTableEntry(v6, v3, v5, v2, v11);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v10;
  __writecr8(v10);
  return result;
}
