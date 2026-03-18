/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x140118D34
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x1400BCD50 (MmPurgeSection.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned __int8 a4)
{
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-18h] BYREF

  v9[1] = 8LL;
  v9[0] = 0LL;
  v10 = 393479LL;
  v11[1] = v11;
  v11[0] = v11;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  v9[0] = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = v9;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(a3, a4);
  return KeWaitForGate(&v10, 18LL);
}
