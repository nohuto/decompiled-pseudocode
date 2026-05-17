/*
 * XREFs of sub_1800FB38C @ 0x1800FB38C
 * Callers:
 *     sub_1800FAE20 @ 0x1800FAE20 (sub_1800FAE20.c)
 *     sub_1800FB034 @ 0x1800FB034 (sub_1800FB034.c)
 *     sub_1800FB114 @ 0x1800FB114 (sub_1800FB114.c)
 *     sub_1800FB1F0 @ 0x1800FB1F0 (sub_1800FB1F0.c)
 *     sub_1800FB3AC @ 0x1800FB3AC (sub_1800FB3AC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_1800FB38C(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  if ( !byte_180165408 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
