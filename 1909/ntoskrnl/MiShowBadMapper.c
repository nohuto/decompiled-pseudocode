/*
 * XREFs of MiShowBadMapper @ 0x1402BCB38
 * Callers:
 *     MiFillSystemPtes @ 0x140030060 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x1400F727C (MiInsertPhysicalPteMapping.c)
 *     MiDeletePhysmemPte @ 0x14015B04C (MiDeletePhysmemPte.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017560 (RtlCaptureStackBackTrace.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLookupDataTableEntry @ 0x1400FB388 (MiLookupDataTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x14015586C (MmLockLoadedModuleListExclusive.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall MiShowBadMapper(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // bl
  unsigned int v4; // edi
  unsigned __int64 *v5; // rsi
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v8[4]; // [rsp+30h] [rbp-68h] BYREF
  ULONG BackTraceHash[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  v2 = byte_14046603A;
  if ( byte_14046603A )
    goto LABEL_20;
  if ( (a2 & 1) != 0 && KdPitchDebugger == byte_14046603A && (_BYTE)KdDebuggerNotPresent == byte_14046603A )
LABEL_21:
    KeBugCheckEx(0x1Au, 0x1233uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (a2 & 4) != 0 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(1u, 8u, BackTrace, BackTraceHash);
    MmLockLoadedModuleListExclusive(v8);
    v4 = 0;
    v5 = (unsigned __int64 *)BackTrace;
    while ( *v5 > 0x7FFFFFFEFFFFLL )
    {
      v6 = MiLookupDataTableEntry(*v5, 0LL);
      if ( v6 && (*(_DWORD *)(v6 + 104) & 0x2000000) != 0 && (MmVerifierData & 0x400000) == 0 )
      {
        v2 = 1;
        break;
      }
      ++v4;
      ++v5;
      if ( v4 >= 8 )
        break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8[0] < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v8[0]);
LABEL_20:
    if ( v2 == 1 )
      goto LABEL_21;
  }
}
