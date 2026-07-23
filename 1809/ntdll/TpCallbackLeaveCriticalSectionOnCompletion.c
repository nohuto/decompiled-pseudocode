/*
 * XREFs of TpCallbackLeaveCriticalSectionOnCompletion @ 0x1800892F0
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
    *((_QWORD *)Instance + 24) = CriticalSection;
    *((_DWORD *)Instance + 36) |= 1u;
  }
  else
  {
    TppRaiseInvalidParameter(Instance, CriticalSection, v2);
  }
}
