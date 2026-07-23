/*
 * XREFs of LdrpDeleteEnclave @ 0x1800CF2BC
 * Callers:
 *     LdrDeleteEnclave @ 0x1800CECB0 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     NtTerminateEnclave @ 0x1800A39D0 (NtTerminateEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CF038 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 */

NTSTATUS __fastcall LdrpDeleteEnclave(PVOID *BaseAddress)
{
  NTSTATUS result; // eax
  PVOID v3; // rdx
  PVOID *v4; // rax

  result = NtTerminateEnclave(BaseAddress[8], 4u);
  if ( result >= 0 )
  {
    BaseAddress[13] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)BaseAddress, -1073741823);
    BaseAddress[8] = 0LL;
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v3 = *BaseAddress;
    if ( *((PVOID **)*BaseAddress + 1) != BaseAddress || (v4 = (PVOID *)BaseAddress[1], *v4 != BaseAddress) )
      __fastfail(3u);
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    LdrpDereferenceEnclave(BaseAddress);
    return 0;
  }
  return result;
}
