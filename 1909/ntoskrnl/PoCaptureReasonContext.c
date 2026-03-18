/*
 * XREFs of PoCaptureReasonContext @ 0x14010535C
 * Callers:
 *     NtSetTimerEx @ 0x140008A80 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x1401583E0 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x1402F7140 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x1406B3A40 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x1406B3BE0 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x14073BE60 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x14075F320 (PoCreateThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A201F4 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PoGetRequester @ 0x140105498 (PoGetRequester.c)
 *     PopCaptureReasonContext @ 0x1401055A8 (PopCaptureReasonContext.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PoCaptureReasonContext(unsigned __int64 a1, char a2, __int64 a3, char a4, __int64 a5, _QWORD *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  _OWORD v14[3]; // [rsp+28h] [rbp-30h] BYREF

  memset(v14, 0, 0x28uLL);
  *a6 = 0LL;
  if ( a1 && a2 && !a4 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 40 > 0x7FFFFFFF0000LL || a1 + 40 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v14[0] = *(_OWORD *)a1;
    v14[1] = *(_OWORD *)(a1 + 16);
    *(_QWORD *)&v14[2] = *(_QWORD *)(a1 + 32);
    a1 = (unsigned __int64)v14;
  }
  LOBYTE(v10) = a2;
  v12 = PopCaptureReasonContext(a1, v10, a5, a6);
  if ( v12 >= 0 )
  {
    LOBYTE(v11) = a2;
    PoGetRequester(v11, a3, *a6);
  }
  return (unsigned int)v12;
}
