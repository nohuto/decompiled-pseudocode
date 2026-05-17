/*
 * XREFs of RtlCreateRegistryKey @ 0x1800EE240
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 */

__int64 __fastcall RtlCreateRegistryKey(int a1, _WORD *a2)
{
  __int64 result; // rax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpGetRegistryHandle(a1, a2, 1, &Handle);
  if ( (int)result >= 0 )
  {
    if ( (a1 & 0x40000000) == 0 )
      NtClose(Handle);
    return 0LL;
  }
  return result;
}
