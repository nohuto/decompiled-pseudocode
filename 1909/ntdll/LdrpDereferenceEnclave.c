/*
 * XREFs of LdrpDereferenceEnclave @ 0x1800CDC04
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpObtainLockedEnclave @ 0x18001B2F8 (LdrpObtainLockedEnclave.c)
 *     LdrDeleteEnclave @ 0x1800CD530 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CD5C0 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800CD6C0 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800CD760 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800CDB84 (LdrpDeleteEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CE080 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpDereferenceEnclave(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 60), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(a1 + 112));
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
