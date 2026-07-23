/*
 * XREFs of LdrIsEnclaveAddress @ 0x1800CEE1C
 * Callers:
 *     RtlGuardCheckImageBase @ 0x180078ED4 (RtlGuardCheckImageBase.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800142E8 (LdrpObtainLockedEnclave.c)
 *     ZwQueryVirtualMemory @ 0x1800A0760 (ZwQueryVirtualMemory.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 */

char __fastcall LdrIsEnclaveAddress(PVOID BaseAddress)
{
  __int64 *v2; // rax
  bool v3; // bl
  __int64 *v4; // rdi
  __int64 v5; // rax
  _BYTE MemoryInformation[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 0);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    v5 = v2[13];
    if ( v5
      && BaseAddress == *(PVOID *)(v5 + 184)
      && ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           MemoryRegionInformationEx,
           MemoryInformation,
           0x20uLL,
           0LL) >= 0 )
    {
      v3 = (MemoryInformation[12] & 0x40) != 0;
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v4 + 2));
    LdrpDereferenceEnclave(v4);
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
