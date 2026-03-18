/*
 * XREFs of RtlpSanitizeContextFlags @ 0x14001710C
 * Callers:
 *     KiContinuePreviousModeUser @ 0x14001BC14 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1402B1210 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1405E5AE0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x140880CC8 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x140880F84 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x140881138 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1408813A4 (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x1408C3F40 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140017380 (RtlpValidateContextFlags.c)
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
