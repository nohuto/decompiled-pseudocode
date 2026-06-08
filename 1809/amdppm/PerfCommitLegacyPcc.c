/*
 * XREFs of PerfCommitLegacyPcc @ 0x1C000B180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfCommitLegacyPcc(__int64 (*a1)(void))
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(), __int64 (*)(void)))qword_1C00118E0)(
             qword_1C00118B8,
             PccCommitAcquireCallback,
             a1);
  if ( (int)result < 0 )
  {
    if ( a1 )
      return a1();
  }
  return result;
}
