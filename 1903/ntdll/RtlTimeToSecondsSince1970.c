/*
 * XREFs of RtlTimeToSecondsSince1970 @ 0x18007A290
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007A2D0 @ 0x18007A2D0 (sub_18007A2D0.c)
 */

BOOLEAN __stdcall RtlTimeToSecondsSince1970(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  __int64 v2; // rax
  _DWORD *v3; // r10

  v2 = sub_18007A2D0(Time->QuadPart, 0xD6BF94D5E57A42BDuLL, 23) - 0x2B6109100LL;
  if ( HIDWORD(v2) )
    return 0;
  *v3 = v2;
  return 1;
}
