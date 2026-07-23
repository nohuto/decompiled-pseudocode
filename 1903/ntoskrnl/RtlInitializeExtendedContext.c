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

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  NTSTATUS result; // eax
  ULONG v5; // r10d
  PCONTEXT_EX *v6; // r11
  ULONG64 v7; // r9
  char v8; // [rsp+48h] [rbp+20h] BYREF

  result = RtlpValidateContextFlags(ContextFlags, &v8);
  v7 = 0LL;
  if ( result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v7 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlInitializeExtendedContext2(Context, v5, v6, v7);
  }
  return result;
}
