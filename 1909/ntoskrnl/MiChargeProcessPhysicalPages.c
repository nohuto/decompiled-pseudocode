/*
 * XREFs of MiChargeProcessPhysicalPages @ 0x140897C40
 * Callers:
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140899374 (MiCreateLargePageVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiChargeProcessPhysicalPages(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v4; // rax
  unsigned __int64 i; // rdx
  signed __int64 v6; // rtt

  if ( *(_QWORD *)(a1 + 1656) )
  {
    v4 = *(_QWORD *)(a1 + 1648);
    for ( i = v4 + a2; i <= *(_QWORD *)(a1 + 1656); i = a2 + v4 )
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1648), i, v4);
      if ( v6 == v4 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1648), a2);
    return 1LL;
  }
}
