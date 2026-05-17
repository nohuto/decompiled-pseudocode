/*
 * XREFs of sub_1800EE8B4 @ 0x1800EE8B4
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_1800EE8B4(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 8LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3);
  }
  return result;
}
