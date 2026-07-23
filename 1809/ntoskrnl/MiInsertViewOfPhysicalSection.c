/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x14018CDD4
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiInsertPhysicalPteMapping @ 0x14010FF00 (MiInsertPhysicalPteMapping.c)
 *     MiInsertVad @ 0x1401101EC (MiInsertVad.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbp
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r13
  __int64 v8; // rbx
  KIRQL v9; // al
  __int64 v10; // rbx
  unsigned __int8 v11; // di
  __int64 v12; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v16; // [rsp+88h] [rbp+10h]
  unsigned int v17; // [rsp+90h] [rbp+18h]

  v17 = (unsigned __int8)*(_DWORD *)(a2 + 48) >> 3;
  v3 = ((8 * (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32))) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v5 = ((8 * (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32))) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 80);
  v8 = **(_QWORD **)(a2 + 72);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72));
  ++*(_QWORD *)(v8 + 40);
  ++*(_QWORD *)(v8 + 48);
  v16 = v9;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v16);
  --CurrentThread->SpecialApcDisable;
  v10 = a1 + 1280;
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  MiInsertVad(a2, a1, 1);
  v11 = MiLockWorkingSetShared(a1 + 1280);
  if ( v3 <= v5 )
  {
    while ( 1 )
    {
      if ( v6 )
      {
        if ( (v3 & 0xFFF) != 0 )
          goto LABEL_5;
        MiUnlockPageTableInternal(v10, v6);
      }
      LOBYTE(v12) = v11;
      MiMakeSystemAddressValid(v3, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v12, 0);
      v6 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_5:
      MiInsertPhysicalPteMapping(v3, v7, v17);
      v3 += 8LL;
      if ( (v3 & 0x78) == 0
        && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v6)
                                         || KeShouldYieldProcessor()) )
      {
        MiUnlockPageTableInternal(v10, v6);
        MiUnlockWorkingSetShared(v10, v11);
        v6 = 0LL;
        MiLockWorkingSetShared(v10);
      }
      ++v7;
      if ( v3 > v5 )
      {
        if ( v6 )
          MiUnlockPageTableInternal(v10, v6);
        break;
      }
    }
  }
  MiUnlockWorkingSetShared(v10, v11);
  return MiUnlockVad((__int64)CurrentThread, a2);
}
