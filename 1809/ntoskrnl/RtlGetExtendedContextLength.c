/*
 * XREFs of RtlGetExtendedContextLength @ 0x1400A1D44
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1400A240C (KiContinuePreviousModeUser.c)
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 *     KiRaiseException @ 0x14029A1B0 (KiRaiseException.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     NtCreateUserProcess @ 0x14060A950 (NtCreateUserProcess.c)
 *     PspGetSetContextInternal @ 0x14061F940 (PspGetSetContextInternal.c)
 *     PspInitializeThunkContext @ 0x1406207DC (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x140620A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140620C00 (PspGetContextThreadInternal.c)
 *     NtCreateThreadEx @ 0x140622100 (NtCreateThreadEx.c)
 *     PspWow64GetContextThread @ 0x1406A82B8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1406A89BC (PspWow64SetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14088EDD0 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14088F700 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1400A1E3C (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x1400A2070 (RtlpValidateContextFlags.c)
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
