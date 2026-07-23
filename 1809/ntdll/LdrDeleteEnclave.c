/*
 * XREFs of LdrDeleteEnclave @ 0x1800CECB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800142E8 (LdrpObtainLockedEnclave.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 *     LdrpDeleteEnclave @ 0x1800CF2BC (LdrpDeleteEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800D1F1C (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 */

NTSTATUS __cdecl LdrDeleteEnclave(PVOID BaseAddress)
{
  __int64 *v1; // rax
  __int64 *v2; // rdi
  int v3; // ebx
  PVOID BaseAddressa; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF

  BaseAddressa = BaseAddress;
  v1 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  v2 = v1;
  if ( !v1
    || (v3 = LdrpDeleteEnclave(v1),
        RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v2 + 2)),
        LdrpDereferenceEnclave(v2),
        v3 >= 0) )
  {
    RegionSize = 0LL;
    v3 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v2 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v3);
  return v3;
}
