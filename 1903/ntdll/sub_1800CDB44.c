/*
 * XREFs of sub_1800CDB44 @ 0x1800CDB44
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     LdrDeleteEnclave @ 0x1800CD470 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CD500 (LdrInitializeEnclave.c)
 *     sub_1800CD600 @ 0x1800CD600 (sub_1800CD600.c)
 *     LdrLoadEnclaveModule @ 0x1800CD6A0 (LdrLoadEnclaveModule.c)
 *     sub_1800CDAC4 @ 0x1800CDAC4 (sub_1800CDAC4.c)
 *     LdrCallEnclave_0 @ 0x1800CDFC0 (LdrCallEnclave_0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_1800CDB44(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 60), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    RtlFreeHeap(qword_180165420, 0, *(_QWORD *)(a1 + 112));
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
