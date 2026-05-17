/*
 * XREFs of RtlGetNtProductType @ 0x18002DCD0
 * Callers:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x180009A9C (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlGetVersion @ 0x18002D230 (RtlGetVersion.c)
 *     SwitchedRtlGetVersion @ 0x18007332C (SwitchedRtlGetVersion.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EAED0 (RtlRestoreBootStatusDefaults.c)
 *     RtlInitializeHeapManager @ 0x1800EEF74 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x180088558 (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char v2; // bl
  int v3; // eax

  v2 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1) )
  {
    v3 = *((_DWORD *)NtCurrentPeb()->SharedData + 4);
    goto LABEL_4;
  }
  if ( MEMORY[0x7FFE0268] )
  {
    v3 = MEMORY[0x7FFE0264];
LABEL_4:
    *a1 = v3;
    return 1;
  }
  if ( (int)RtlpGetNtProductTypeFromRegistry(a1) < 0 )
  {
    *a1 = 1;
    return v2;
  }
  return 1;
}
