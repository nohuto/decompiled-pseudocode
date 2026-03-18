/*
 * XREFs of MiRemoveSystemCacheReferences @ 0x1402ABFDC
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400AD910 (MmMapViewInSystemCache.c)
 * Callees:
 *     MiCheckControlArea @ 0x1400764A0 (MiCheckControlArea.c)
 *     MiRemoveViewsFromSection @ 0x140079370 (MiRemoveViewsFromSection.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4BB4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveSystemCacheReferences(__int64 *BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r14
  KIRQL v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 result; // rax

  v2 = *BugCheckParameter2;
  v5 = *(_QWORD *)(qword_14043A748 + 8LL * (*(_WORD *)(*BugCheckParameter2 + 60) & 0x3FF));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v7 = MiRemoveViewsFromSection((ULONG_PTR)BugCheckParameter2, a2, 4u);
  --*(_QWORD *)(v2 + 40);
  --*(_DWORD *)(v2 + 88);
  v8 = v7;
  result = MiCheckControlArea(v2, v6);
  if ( v8 )
    return MiReturnCrossPartitionSectionCharges(v5, 1LL, v8);
  return result;
}
