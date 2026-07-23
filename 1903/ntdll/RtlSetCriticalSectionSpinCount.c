/*
 * XREFs of RtlSetCriticalSectionSpinCount @ 0x180071CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlSetCriticalSectionSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  int v2; // eax
  ULONG v3; // r8d
  ULONG result; // eax

  v2 = CriticalSection->SpinCount;
  v3 = v2 ^ (SpinCount ^ v2) & 0xFFFFFF;
  if ( NtCurrentPeb()->NumberOfProcessors == 1 )
    v3 &= 0xFF000000;
  result = v2 & 0xFFFFFF;
  CriticalSection->SpinCount = v3;
  return result;
}
