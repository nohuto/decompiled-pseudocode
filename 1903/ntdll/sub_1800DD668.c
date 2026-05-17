/*
 * XREFs of sub_1800DD668 @ 0x1800DD668
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_18005300C @ 0x18005300C (sub_18005300C.c)
 *     RtlQueryWnfStateData @ 0x18007C570 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180082FE0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     sub_18010D1A8 @ 0x18010D1A8 (sub_18010D1A8.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 */

char *sub_1800DD668()
{
  char *result; // rax
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  char v4; // [rsp+48h] [rbp-31h] BYREF
  __int64 v5; // [rsp+50h] [rbp-29h]
  unsigned int v6; // [rsp+88h] [rbp+Fh]

  result = (char *)ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    ZwQuerySystemInformation();
    v1 = ~(unsigned __int64)(v6 - 1);
    v2 = v1 & (*(unsigned int *)&NtCurrentTeb()->ReservedPad1 + v6 - 1LL);
    if ( v2 )
      v2 += v6;
    v3 = 3 * v6;
    if ( v2 < v3 )
      v2 = (unsigned int)v3;
    result = &v4;
    if ( ((unsigned __int64)&v4 & v1) - v2 >= v5 + (unsigned __int64)(17 * v6) )
    {
      result = (char *)ZwAllocateVirtualMemory();
      if ( (int)result >= 0 )
        return (char *)ZwProtectVirtualMemory();
    }
  }
  return result;
}
