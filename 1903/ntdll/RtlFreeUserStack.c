/*
 * XREFs of RtlFreeUserStack @ 0x18007E900
 * Callers:
 *     RtlCreateUserStack @ 0x180074900 (RtlCreateUserStack.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlFreeUserStack(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = 0LL;
  return ZwFreeVirtualMemory(-1LL, &v2, &v3, 0x8000LL);
}
