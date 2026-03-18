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
