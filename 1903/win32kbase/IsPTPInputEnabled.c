/*
 * XREFs of IsPTPInputEnabled @ 0x1C0109F4C
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0154F2C (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C015CE68 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

__int64 IsPTPInputEnabled()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gPTPEnabled )
    return (*(_BYTE *)(&qword_1C0213A18 + 1) & 8) != 0;
  return v0;
}
