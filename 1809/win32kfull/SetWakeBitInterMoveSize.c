/*
 * XREFs of SetWakeBitInterMoveSize @ 0x1C01C3B20
 * Callers:
 *     IncPaintCountInterMoveSize @ 0x1C0223000 (IncPaintCountInterMoveSize.c)
 * Callees:
 *     <none>
 */

int __fastcall SetWakeBitInterMoveSize(__int64 a1)
{
  __int64 v1; // rax

  *(_WORD *)(*(_QWORD *)(a1 + 448) + 6LL) |= 0x20u;
  *(_WORD *)(*(_QWORD *)(a1 + 448) + 4LL) |= 0x20u;
  v1 = *(_QWORD *)(a1 + 448);
  if ( (*(_BYTE *)(v1 + 10) & 0x20) != 0 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 736), 6, 0);
  return v1;
}
