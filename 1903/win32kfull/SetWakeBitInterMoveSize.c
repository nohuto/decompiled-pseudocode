/*
 * XREFs of SetWakeBitInterMoveSize @ 0x1C01D6E20
 * Callers:
 *     IncPaintCountInterMoveSize @ 0x1C023B59C (IncPaintCountInterMoveSize.c)
 * Callees:
 *     <none>
 */

int __fastcall SetWakeBitInterMoveSize(__int64 a1)
{
  __int64 v1; // rax

  *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) |= 0x20u;
  *(_WORD *)(*(_QWORD *)(a1 + 440) + 4LL) |= 0x20u;
  v1 = *(_QWORD *)(a1 + 440);
  if ( (*(_BYTE *)(v1 + 10) & 0x20) != 0 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 728), 6, 0);
  return v1;
}
