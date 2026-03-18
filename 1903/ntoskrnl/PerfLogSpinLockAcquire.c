/*
 * XREFs of PerfLogSpinLockAcquire @ 0x140331D80
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402A7544 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A7878 (KiAcquireSpinLockInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x1402A79B4 (KiTryToAcquireSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B274 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B300 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14033B388 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 * Callees:
 *     <none>
 */

char __fastcall PerfLogSpinLockAcquire(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  struct _KPRCB *CurrentPrcb; // rax
  _BYTE *EtwSupport; // r10
  unsigned __int8 v9; // r11
  __int64 v10; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  EtwSupport = CurrentPrcb->EtwSupport;
  v9 = EtwSupport[272];
  if ( v9 < 8u )
  {
    EtwSupport[272] = v9 + 1;
    v10 = 32LL * v9;
    *(_DWORD *)&EtwSupport[v10 + 40] = a5;
    LOBYTE(CurrentPrcb) = a6;
    EtwSupport[v10 + 44] = a6;
    *(_QWORD *)&EtwSupport[v10 + 16] = a2;
    *(_DWORD *)&EtwSupport[v10 + 36] = a4;
    *(_QWORD *)&EtwSupport[v10 + 24] = a1;
    *(_DWORD *)&EtwSupport[v10 + 32] = a3;
  }
  else
  {
    ++*((_DWORD *)EtwSupport + 69);
  }
  return (char)CurrentPrcb;
}
