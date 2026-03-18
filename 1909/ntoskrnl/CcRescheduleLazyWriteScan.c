/*
 * XREFs of CcRescheduleLazyWriteScan @ 0x1400E294C
 * Callers:
 *     CcLazyWriteScan @ 0x14007F194 (CcLazyWriteScan.c)
 *     CcCoalescingCallBackHelper @ 0x14027C750 (CcCoalescingCallBackHelper.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 */

BOOLEAN __fastcall CcRescheduleLazyWriteScan(__int64 a1, __int64 *a2)
{
  __int64 Dpc; // r8
  __int64 v3; // rcx
  LARGE_INTEGER v4; // rdx
  BOOLEAN result; // al

  Dpc = a1 + 464;
  if ( !*(_BYTE *)(a1 + 900) )
  {
    if ( *(_BYTE *)(a1 + 592) )
    {
      if ( a2 && (v3 = *a2, *a2 != 0x7FFFFFFFFFFFFFFFLL) && v3 )
      {
        v4.QuadPart = 160000000LL;
        if ( v3 * KeMaximumIncrement <= 160000000 )
          v4.QuadPart = v3 * KeMaximumIncrement;
        if ( v4.QuadPart < 10000000 )
          v4 = CcIdleDelay;
        if ( v4.QuadPart > 0 )
          v4.QuadPart = -v4.QuadPart;
      }
      else
      {
        v4 = CcIdleDelay;
      }
      return KeSetCoalescableTimer((PKTIMER)(Dpc + 64), v4, 0, 0x3E8u, (PKDPC)Dpc);
    }
    else
    {
      return CcScheduleLazyWriteScan(a1, 0LL, 0LL);
    }
  }
  return result;
}
