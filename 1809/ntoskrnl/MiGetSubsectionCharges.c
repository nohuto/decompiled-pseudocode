/*
 * XREFs of MiGetSubsectionCharges @ 0x1402C4C84
 * Callers:
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     MiUpdateLastSubsectionSize @ 0x140134568 (MiUpdateLastSubsectionSize.c)
 *     MiExtendSection @ 0x14061D4C8 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x14061F0D0 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetCrossPartitionCharges @ 0x1402D1C6C (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D26AC (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  BOOL v4; // ebp
  ULONG_PTR *v5; // rdi
  __int64 result; // rax
  unsigned int v7; // esi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges(v5, 0LL, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit((__int64)v5, a2, 0) )
    {
      v7 = -1073741523;
LABEL_9:
      MiReturnCrossPartitionCharges(v5, 0LL, v4, a2);
      return v7;
    }
    if ( !(unsigned int)MiChargeResident(v5, a2, 0LL) )
    {
      if ( v3 )
        MiReturnCommit((__int64)v5, a2);
      v7 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
