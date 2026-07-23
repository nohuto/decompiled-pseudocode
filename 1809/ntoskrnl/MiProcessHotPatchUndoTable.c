/*
 * XREFs of MiProcessHotPatchUndoTable @ 0x1405832E8
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408585A8 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     RtlDetermineHotPatchUndoExtent @ 0x14089AE24 (RtlDetermineHotPatchUndoExtent.c)
 */

void __fastcall MiProcessHotPatchUndoTable(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  int v5; // [rsp+48h] [rbp+10h] BYREF
  ULONG StartingIndex; // [rsp+50h] [rbp+18h] BYREF

  for ( i = 0; i < *(_DWORD *)(a2 + 32); ++i )
  {
    if ( (unsigned __int8)RtlDetermineHotPatchUndoExtent(
                            *(_QWORD *)(a2 + 40),
                            0,
                            i,
                            (unsigned int)&StartingIndex,
                            (__int64)&v5) )
      RtlClearBits(*(PRTL_BITMAP *)(a1 + 48), StartingIndex, v5 - StartingIndex + 1);
  }
}
