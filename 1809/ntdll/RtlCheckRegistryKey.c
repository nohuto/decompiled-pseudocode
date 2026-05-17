/*
 * XREFs of RtlCheckRegistryKey @ 0x1800534F0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x180052D30 (RtlCheckPortableOperatingSystem.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 */

__int64 __fastcall RtlCheckRegistryKey(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  if ( (int)result >= 0 )
  {
    if ( (v2 & 0x40000000) == 0 )
      NtClose(Handle);
    return 0LL;
  }
  return result;
}
