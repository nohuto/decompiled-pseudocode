/*
 * XREFs of RtlApplyRXactNoFlush @ 0x18007E9B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAbortRXact @ 0x18007E9E0 (RtlAbortRXact.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 */

__int64 __fastcall RtlApplyRXactNoFlush(__int64 a1)
{
  __int64 result; // rax

  result = sub_18007EA24();
  if ( (int)result >= 0 )
    return RtlAbortRXact(a1);
  return result;
}
