/*
 * XREFs of CpcCommitPerformance @ 0x1C000A140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcCommitPerformance(__int64 (*a1)(void), __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 (__fastcall *)(__int64, __int64 (*)(void)), __int64 (*)(void)))(qword_1C0013940 + 112))(
             *(_QWORD *)(qword_1C0013940 + 56),
             a2,
             CpcAcquirePerformanceCallback,
             a1);
  if ( (int)result < 0 )
    return a1();
  return result;
}
