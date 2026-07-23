/*
 * XREFs of LdrpDereferenceEnclave @ 0x1800CF33C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpObtainLockedEnclave @ 0x1800142E8 (LdrpObtainLockedEnclave.c)
 *     LdrDeleteEnclave @ 0x1800CECB0 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CED30 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800CEE1C (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800CEEC0 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800CF2BC (LdrpDeleteEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CF7B0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

LOGICAL __fastcall LdrpDereferenceEnclave(PVOID BaseAddress)
{
  LOGICAL result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 14, 0xFFFFFFFF);
  if ( result == 1 )
  {
    RtlFreeHeap(LdrpHeap, 0, *((PVOID *)BaseAddress + 13));
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
