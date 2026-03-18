/*
 * XREFs of RtlInitializeExtendedContext @ 0x140016CB8
 * Callers:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x14001B824 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1402B14B0 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     PspInitializeThunkContext @ 0x1405E79CC (PspInitializeThunkContext.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     NtCreateThreadEx @ 0x14060CA00 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x1406C980C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406C9B9C (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CD184 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x1408CDAC4 (PspSetContextState.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140016E3C (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x140016F90 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // r9
  char v7; // [rsp+48h] [rbp+20h] BYREF

  result = RtlpValidateContextFlags(a2, &v7);
  v6 = 0LL;
  if ( (int)result >= 0 )
  {
    if ( (v7 & 2) != 0 )
      v6 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlInitializeExtendedContext2(a1, v4, v5, v6);
  }
  return result;
}
