/*
 * XREFs of VerifierMmFreeContiguousMemorySpecifyCache @ 0x140945770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViTargetFreeContiguousMemory @ 0x140935F64 (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemorySpecifyCache(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_14040E790 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))pXdvMmFreeContiguousMemorySpecifyCache)(a1, a2, a3);
}
