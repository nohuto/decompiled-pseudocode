/*
 * XREFs of RtlpSanitizeContextFlags @ 0x1400A1E00
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1400A240C (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x14029A0B0 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x140620A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140620C00 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x140846188 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x140846444 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x1408465F8 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x140846864 (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x140887F40 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1400A2070 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContextFlags(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int *v2; // r10
  char v3; // r11

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result >= 0 && (*v2 & 0x100000) == 0 )
    result = 3221225485LL;
  if ( (_DWORD)result == -1073741811 )
  {
    if ( v3 )
    {
      *v2 = *v2 & 0xD800001F | 0x100000;
      return 0LL;
    }
  }
  return result;
}
