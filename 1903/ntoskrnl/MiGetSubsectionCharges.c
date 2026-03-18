/*
 * XREFs of MiGetSubsectionCharges @ 0x1402DE9C8
 * Callers:
 *     MiReferenceActiveSubsection @ 0x140072320 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x1400DFCE0 (MiCreatePrototypePtes.c)
 *     MiUpdateLastSubsectionSize @ 0x1400EB07C (MiUpdateLastSubsectionSize.c)
 *     MiChargeSegmentCommit @ 0x14066ED20 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x14069CB90 (MiExtendSection.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x1402EA810 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1402EB2BC (MiReturnCrossPartitionCharges.c)
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
  v5 = *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
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
