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

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  NTSTATUS result; // eax
  ULONG v3; // r10d
  ULONG *v4; // r11
  ULONG64 v5; // r8
  char v6; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpValidateContextFlags(ContextFlags, &v6);
  v5 = 0LL;
  if ( result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v5 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlGetExtendedContextLength2(v3, v4, v5);
  }
  return result;
}
