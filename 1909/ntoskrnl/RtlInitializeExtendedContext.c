/*
 * XREFs of RtlInitializeExtendedContext @ 0x1400170A8
 * Callers:
 *     KiDispatchException @ 0x1400161A0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x14001BC14 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1402B1210 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1405E5AE0 (PspSetContextThreadInternal.c)
 *     PspInitializeThunkContext @ 0x1405E819C (PspInitializeThunkContext.c)
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 *     NtCreateThreadEx @ 0x14060E510 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x1406C8224 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406C85B4 (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CCA64 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x1408CD3A4 (PspSetContextState.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x14001722C (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x140017380 (RtlpValidateContextFlags.c)
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
