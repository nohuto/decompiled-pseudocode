/*
 * XREFs of MiPrepareToHotPatchImagePatchCallback @ 0x140858A9C
 * Callers:
 *     RtlEnumerateHotPatchPatches @ 0x14089AE68 (RtlEnumerateHotPatchPatches.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     RtlDetermineHotPatchExtent @ 0x14089ADBC (RtlDetermineHotPatchExtent.c)
 */

char __fastcall MiPrepareToHotPatchImagePatchCallback(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r11
  ULONG StartingIndex; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 8) == a4 )
  {
    v4 = *a2;
    goto LABEL_5;
  }
  if ( (a3 & 0xFC000) == 0x5C000 )
  {
    v4 = a2[1];
LABEL_5:
    RtlDetermineHotPatchExtent(a3, v4, &StartingIndex, &v8);
    RtlClearBits(*(PRTL_BITMAP *)(*(_QWORD *)v5 + 48LL), StartingIndex, v8 - StartingIndex + 1);
  }
  return 0;
}
