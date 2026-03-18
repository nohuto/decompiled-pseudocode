/*
 * XREFs of RtlGetExtendedContextLength @ 0x140016C60
 * Callers:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x14001B824 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1402B14B0 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     PspInitializeThunkContext @ 0x1405E79CC (PspInitializeThunkContext.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     NtCreateThreadEx @ 0x14060CA00 (NtCreateThreadEx.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x1406C980C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406C9B9C (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CD184 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x1408CDAC4 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x140016D58 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x140016F90 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // r8
  char v5; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpValidateContextFlags(a1, &v5);
  v4 = 0LL;
  if ( (int)result >= 0 )
  {
    if ( (v5 & 2) != 0 )
      v4 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlGetExtendedContextLength2(v2, v3, v4);
  }
  return result;
}
