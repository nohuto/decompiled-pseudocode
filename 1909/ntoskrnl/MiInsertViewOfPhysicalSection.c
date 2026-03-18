/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x14019773C
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x14077D4A4 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiInsertPhysicalPteMapping @ 0x1400F727C (MiInsertPhysicalPteMapping.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     MiInsertVad @ 0x14015AE70 (MiInsertVad.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v15; // [rsp+88h] [rbp+10h]
  unsigned int v16; // [rsp+90h] [rbp+18h]

  v16 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
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
  v15 = v9;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v15);
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
      MiMakeSystemAddressValid(v3, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x3F, v11, 0);
      v6 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_5:
      MiInsertPhysicalPteMapping(v3, v7, v16);
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
