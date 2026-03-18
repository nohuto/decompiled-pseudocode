/*
 * XREFs of VerifierMmFreeContiguousMemorySpecifyCache @ 0x140944770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ViTargetFreeContiguousMemory @ 0x140934F64 (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemorySpecifyCache(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_14040D770 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))pXdvMmFreeContiguousMemorySpecifyCache)(a1, a2, a3);
}
