/*
 * XREFs of MiGetSubsectionCharges @ 0x1402C4994
 * Callers:
 *     MiReferenceActiveSubsection @ 0x140077950 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x140095B30 (MiCreatePrototypePtes.c)
 *     MiUpdateLastSubsectionSize @ 0x140134478 (MiUpdateLastSubsectionSize.c)
 *     MiExtendSection @ 0x14061C4C8 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x14061E0D0 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiGetCrossPartitionCharges @ 0x1402D197C (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D23BC (MiReturnCrossPartitionCharges.c)
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
  v5 = *(ULONG_PTR **)(qword_14043A748 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
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
