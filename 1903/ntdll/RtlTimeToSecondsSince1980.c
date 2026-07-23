/*
 * XREFs of RtlTimeToSecondsSince1980 @ 0x18007A160
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007A2D0 @ 0x18007A2D0 (sub_18007A2D0.c)
 */

BOOLEAN __cdecl RtlTimeToSecondsSince1980(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  __int64 v2; // rax
  _DWORD *v3; // r10

  v2 = sub_18007A2D0(Time->QuadPart, 0xD6BF94D5E57A42BDuLL, 23) - 0x2C8DF3700LL;
  if ( HIDWORD(v2) )
    return 0;
  *v3 = v2;
  return 1;
}
