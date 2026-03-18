/*
 * XREFs of PopRecordFirmwareResetReason @ 0x140A22E50
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

char __fastcall PopRecordFirmwareResetReason(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 240);
  LOBYTE(v2) = *(_BYTE *)(v1 + 3392);
  LOBYTE(PopFirmwareResetReason) = v2;
  if ( *(_BYTE *)(v1 + 3392) )
  {
    v2 = *(_QWORD *)(v1 + 3400);
    *((_QWORD *)&PopFirmwareResetReason + 1) = v2;
    xmmword_14046BD40 = *(_OWORD *)(v1 + 3408);
    xmmword_14046BD50 = *(_OWORD *)(v1 + 3424);
  }
  return v2;
}
