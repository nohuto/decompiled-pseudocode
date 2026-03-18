/*
 * XREFs of MiVadCommitCrossPartition @ 0x140057778
 * Callers:
 *     MiRemoveVadCharges @ 0x140607890 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1406083A0 (MiDecommitRegion.c)
 * Callees:
 *     MiIsVadLarge @ 0x1400577A0 (MiIsVadLarge.c)
 *     MiLocateLockedVadEvent @ 0x1400E8428 (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiVadCommitCrossPartition(__int64 a1)
{
  __int64 v1; // rcx
  int v3; // edx

  if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0
    && (unsigned int)MiIsVadLarge()
    && *(_QWORD *)(MiLocateLockedVadEvent(v1, 16LL) + 24) )
  {
    return (unsigned int)(v3 - 15);
  }
  else
  {
    return 0LL;
  }
}
