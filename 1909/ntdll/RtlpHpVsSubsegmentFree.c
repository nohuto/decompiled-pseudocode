/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x1800514A8
 * Callers:
 *     RtlpHpVsContextFree @ 0x180038C70 (RtlpHpVsContextFree.c)
 *     RtlpHpHeapDestroy @ 0x18004FBB4 (RtlpHpHeapDestroy.c)
 *     RtlpHpVsContextFreeInternal @ 0x18010C14C (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2, unsigned int a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
           a1 ^ *(_QWORD *)(a1 + 128),
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           a3);
}
