/*
 * XREFs of EditionMouseMoveShellResilience @ 0x1C00FEB80
 * Callers:
 *     <none>
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002458 (IsAdaptiveQueueDetachExempted.c)
 */

void __fastcall EditionMouseMoveShellResilience(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 664);
  if ( v2
    && (*(_DWORD *)(v1 + 1200) & 0x40000) != 0
    && (*(_DWORD *)(v2 + 196) & 0x100000) != 0
    && *(_QWORD *)(v1 + 1368) )
  {
    if ( !*(_DWORD *)(v2 + 328) )
      *(_DWORD *)(v2 + 328) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !IsAdaptiveQueueDetachExempted(v1) )
      KeSetEvent(*(PRKEVENT *)(v1 + 1368), 1, 0);
  }
}
