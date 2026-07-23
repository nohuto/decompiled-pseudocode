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

LOGICAL __fastcall sub_1800CDB44(PVOID BaseAddress)
{
  LOGICAL result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 15, 0xFFFFFFFF);
  if ( result == 1 )
  {
    RtlFreeHeap(HeapHandle, 0, *((PVOID *)BaseAddress + 14));
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
