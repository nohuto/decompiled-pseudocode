/*
 * XREFs of RtlGetExtendedContextLength @ 0x140017050
 * Callers:
 *     KiDispatchException @ 0x1400161A0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x14001BC14 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1402B1210 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1405E5AE0 (PspSetContextThreadInternal.c)
 *     PspInitializeThunkContext @ 0x1405E819C (PspInitializeThunkContext.c)
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 *     NtCreateThreadEx @ 0x14060E510 (NtCreateThreadEx.c)
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x1406C8224 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406C85B4 (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CCA64 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x1408CD3A4 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x140017148 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x140017380 (RtlpValidateContextFlags.c)
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
