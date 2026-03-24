/*
 * XREFs of RtlInitializeExtendedContext @ 0x1400A1D9C
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1400A240C (KiContinuePreviousModeUser.c)
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 *     KiRaiseException @ 0x14029A1B0 (KiRaiseException.c)
 *     NtCreateUserProcess @ 0x14060A950 (NtCreateUserProcess.c)
 *     PspInitializeThunkContext @ 0x1406207DC (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x140620A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140620C00 (PspGetContextThreadInternal.c)
 *     NtCreateThreadEx @ 0x140622100 (NtCreateThreadEx.c)
 *     PspWow64GetContextThread @ 0x1406A82B8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1406A89BC (PspWow64SetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14088EDD0 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14088F700 (PspSetContextState.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x1400A1F20 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x1400A2070 (RtlpValidateContextFlags.c)
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
