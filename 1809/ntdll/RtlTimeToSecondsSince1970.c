/*
 * XREFs of RtlTimeToSecondsSince1970 @ 0x18007F2C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExtendedMagicDivide @ 0x18007F300 (RtlExtendedMagicDivide.c)
 */

BOOLEAN __stdcall RtlTimeToSecondsSince1970(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  __int64 v2; // rax
  _DWORD *v3; // r10

  v2 = RtlExtendedMagicDivide(Time->QuadPart, Magic10000000, 23) - SecondsToStartOf1970;
  if ( HIDWORD(v2) )
    return 0;
  *v3 = v2;
  return 1;
}
