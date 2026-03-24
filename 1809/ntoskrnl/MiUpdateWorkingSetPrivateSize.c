/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x140126BA0
 * Callers:
 *     MiDemoteCombinedPte @ 0x14006C200 (MiDemoteCombinedPte.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1402C7BF0 (MiBuildForkPte.c)
 * Callees:
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiUpdateWorkingSetPrivateSize(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  LONG *SharedVm; // rax
  LONG *v9; // rax

  if ( !a4 )
  {
    SharedVm = MiGetSharedVm(a1);
    ExAcquireSpinLockExclusiveAtDpcLevel(SharedVm + 10);
  }
  *(_QWORD *)(a1 + 144) += a3;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    *(_QWORD *)(a1 + 128) += a3;
  if ( !a4 )
  {
    v9 = MiGetSharedVm(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v9 + 10);
  }
}
