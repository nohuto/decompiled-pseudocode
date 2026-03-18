/*
 * XREFs of RtlpSanitizeContextFlags @ 0x140016D1C
 * Callers:
 *     KiContinuePreviousModeUser @ 0x14001B824 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1402B14B0 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x1408815C8 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x140881884 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x140881A38 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x140881CA4 (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x1408C4670 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140016F90 (RtlpValidateContextFlags.c)
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
