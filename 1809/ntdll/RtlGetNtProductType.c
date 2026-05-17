/*
 * XREFs of RtlGetNtProductType @ 0x180062D30
 * Callers:
 *     RtlGetVersion @ 0x180028110 (RtlGetVersion.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x1800626BC (RtlpQueryPhysicalMemoryPolicy.c)
 *     SwitchedRtlGetVersion @ 0x180062B5C (SwitchedRtlGetVersion.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EDCE0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x18010C8E4 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008AEB0 (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char v2; // bl
  _DWORD *SharedData; // rcx
  int v4; // eax

  v2 = 0;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v4 = *((_DWORD *)NtCurrentPeb()->SharedData + 4);
    goto LABEL_4;
  }
  if ( MEMORY[0x7FFE0268] )
  {
    v4 = MEMORY[0x7FFE0264];
LABEL_4:
    *a1 = v4;
    return 1;
  }
  if ( (int)RtlpGetNtProductTypeFromRegistry(a1) < 0 )
  {
    *a1 = 1;
    return v2;
  }
  return 1;
}
