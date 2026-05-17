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

__int64 __fastcall LdrpDereferenceEnclave(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(a1 + 104));
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
