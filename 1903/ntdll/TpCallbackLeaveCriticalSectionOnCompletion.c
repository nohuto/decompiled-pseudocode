/*
 * XREFs of TpCallbackLeaveCriticalSectionOnCompletion @ 0x180089400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackLeaveCriticalSectionOnCompletion(
        PTP_CALLBACK_INSTANCE Instance,
        PRTL_CRITICAL_SECTION CriticalSection)
{
  __int64 v2; // r8

  if ( Instance && CriticalSection && !*((_QWORD *)Instance + 24) )
  {
    *((_DWORD *)Instance + 36) |= 1u;
    *((_QWORD *)Instance + 24) = CriticalSection;
  }
  else
  {
    sub_18010EFC8(Instance, CriticalSection, v2);
  }
}
