/*
 * XREFs of sub_1800CDAC4 @ 0x1800CDAC4
 * Callers:
 *     LdrDeleteEnclave @ 0x1800CD470 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwTerminateEnclave @ 0x18009FDD0 (ZwTerminateEnclave.c)
 *     sub_1800CD828 @ 0x1800CD828 (sub_1800CD828.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 */

NTSTATUS __fastcall sub_1800CDAC4(PVOID *BaseAddress)
{
  NTSTATUS result; // eax
  PVOID v3; // rdx
  PVOID *v4; // rax

  result = ZwTerminateEnclave(BaseAddress[9], 4u);
  if ( result >= 0 )
  {
    BaseAddress[14] = 0LL;
    sub_1800CD828((__int64)BaseAddress, -1073741823);
    BaseAddress[9] = 0LL;
    RtlEnterCriticalSection(&stru_180165AE0);
    v3 = *BaseAddress;
    if ( *((PVOID **)*BaseAddress + 1) != BaseAddress || (v4 = (PVOID *)BaseAddress[1], *v4 != BaseAddress) )
      __fastfail(3u);
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    RtlLeaveCriticalSection(&stru_180165AE0);
    sub_1800CDB44(BaseAddress);
    return 0;
  }
  return result;
}
