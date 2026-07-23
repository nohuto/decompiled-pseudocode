/*
 * XREFs of MiSetTrimWhileAgingState @ 0x140120390
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x14012001C (MmSetTrimWhileAgingState.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140190F3C (MiInitializeWorkingSetManagerParameters.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiSetTrimWhileAgingState(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  LONG *SharedVm; // rdi
  __int64 v6; // r9

  v2 = *(_QWORD *)(a1 + 7024);
  v3 = a1 + 7424;
  v4 = a2;
  SharedVm = MiGetSharedVm(a1 + 7424);
  LOBYTE(v6) = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  switch ( v4 )
  {
    case 0u:
      *(_QWORD *)(v2 + 80) = 0LL;
      goto LABEL_9;
    case 1u:
      *(_QWORD *)(v2 + 72) = -1LL;
      *(_QWORD *)(v2 + 80) = 204800LL;
      goto LABEL_6;
    case 2u:
      *(_QWORD *)(v2 + 80) = 204800LL;
      *(_QWORD *)(v2 + 72) = 51200LL;
      goto LABEL_6;
  }
  if ( v4 != 3 )
  {
    if ( v4 != 4 )
      goto LABEL_6;
    *(_QWORD *)(v2 + 80) = 384000LL;
LABEL_9:
    *(_QWORD *)(v2 + 72) = 0LL;
    goto LABEL_6;
  }
  *(_QWORD *)(v2 + 80) = 204800LL;
  *(_QWORD *)(v2 + 72) = 12800LL;
LABEL_6:
  *(_WORD *)(v2 + 2358) = *(_WORD *)((char *)&a2 + 1);
  *(_DWORD *)(v2 + 88) = v4;
  MiUnlockWorkingSetExclusive(v3, v6, v4, v6);
}
