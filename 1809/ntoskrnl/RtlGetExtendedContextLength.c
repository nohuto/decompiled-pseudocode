/*
 * XREFs of RtlGetExtendedContextLength @ 0x1400A1C84
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1400A234C (KiContinuePreviousModeUser.c)
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 *     KiRaiseException @ 0x14029A3A0 (KiRaiseException.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 *     PspInitializeThunkContext @ 0x1406217DC (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140621C00 (PspGetContextThreadInternal.c)
 *     NtCreateThreadEx @ 0x140623100 (NtCreateThreadEx.c)
 *     PspWow64GetContextThread @ 0x1406A9558 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1406A9C5C (PspWow64SetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140890030 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x140890960 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1400A1D7C (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x1400A1FB0 (RtlpValidateContextFlags.c)
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
