/*
 * XREFs of RtlpCheckHeapSignature @ 0x180019C74
 * Callers:
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 *     RtlValidateHeap @ 0x1800705A0 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x1801046F0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104AA4 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180104EEC (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x180105030 (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x1801050F0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1801053E8 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010558C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801056D8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105C34 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180105E00 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180105F94 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180106118 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1801061A4 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x1801062C8 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCheckHeapSignature(_DWORD *a1, const char *a2)
{
  if ( a1[38] == -285217025 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", a1);
  if ( a2 )
    DbgPrint(", passed to %s", a2);
  DbgPrint("\n");
  RtlpBreakPointHeap();
  return 0;
}
