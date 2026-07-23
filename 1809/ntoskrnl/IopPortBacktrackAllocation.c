/*
 * XREFs of IopPortBacktrackAllocation @ 0x140829EB0
 * Callers:
 *     <none>
 * Callees:
 *     IopPortGetNextAlias @ 0x140739644 (IopPortGetNextAlias.c)
 *     RtlDeleteRange @ 0x140739E80 (RtlDeleteRange.c)
 */

NTSTATUS __fastcall IopPortBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  __int64 v2; // rdi
  char NextAlias; // al
  void *v6; // r9
  __int64 v7; // r10
  struct _RTL_RANGE_LIST *v8; // rcx
  ULONGLONG Start; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  for ( Start = *a2; ; RtlDeleteRange(v8, Start, *(_QWORD *)(v7 + 16) + Start - 1, v6) )
  {
    NextAlias = IopPortGetNextAlias(*(_DWORD *)(a2[5] + 36), v2, &Start);
    v8 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
    if ( !NextAlias )
      break;
    v2 = Start;
  }
  return RtlDeleteRange(v8, *a2, a2[1], v6);
}
