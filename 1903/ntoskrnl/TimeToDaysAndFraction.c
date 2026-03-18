/*
 * XREFs of TimeToDaysAndFraction @ 0x140144FEC
 * Callers:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x140144E20 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 *     RtlTimeToElapsedTimeFields @ 0x1408CE890 (RtlTimeToElapsedTimeFields.c)
 * Callees:
 *     RtlExtendedMagicDivide @ 0x14014503C (RtlExtendedMagicDivide.c)
 */

LARGE_INTEGER __fastcall TimeToDaysAndFraction(LARGE_INTEGER *a1, __int64 a2, _DWORD *a3)
{
  LARGE_INTEGER v4; // rax
  LARGE_INTEGER result; // rax
  ULONG *v6; // r11
  int v7; // r10d

  v4 = RtlExtendedMagicDivide(*a1, Magic10000, 13);
  result = RtlExtendedMagicDivide(v4, Magic86400000, 26);
  *v6 = result.LowPart;
  *a3 = v7 - 86400000 * result.LowPart;
  return result;
}
