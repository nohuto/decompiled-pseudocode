/*
 * XREFs of IsPTPInputEnabled @ 0x1C01075DC
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0152D34 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C015AC70 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

__int64 IsPTPInputEnabled()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gPTPEnabled )
    return (*(_BYTE *)(&qword_1C0210A18 + 1) & 8) != 0;
  return v0;
}
