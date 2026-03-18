/*
 * XREFs of EditionMouseMoveShellResilience @ 0x1C011C330
 * Callers:
 *     <none>
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00D7CEC (IsAdaptiveQueueDetachExempted.c)
 */

void __fastcall EditionMouseMoveShellResilience(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 672);
  if ( v4
    && (*(_DWORD *)(v3 + 1208) & 0x40000) != 0
    && (*(_DWORD *)(v4 + 196) & 0x100000) != 0
    && *(_QWORD *)(v3 + 1360) )
  {
    if ( !*(_DWORD *)(v4 + 328) )
      *(_DWORD *)(v4 + 328) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !IsAdaptiveQueueDetachExempted(v3, v4, a3) )
      KeSetEvent(*(PRKEVENT *)(v3 + 1360), 1, 0);
  }
}
