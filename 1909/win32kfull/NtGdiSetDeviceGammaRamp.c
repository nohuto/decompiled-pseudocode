/*
 * XREFs of NtGdiSetDeviceGammaRamp @ 0x1C02AF620
 * Callers:
 *     <none>
 * Callees:
 *     GreSetDeviceGammaRamp @ 0x1C0127F88 (GreSetDeviceGammaRamp.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285014 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiSetDeviceGammaRamp(HDC a1, void *a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  unsigned int v7; // esi
  struct _EPROCESS *CurrentProcess; // rax

  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(MmUserProbeAddress, 0LL, a3, a4);
    LOBYTE(v6) = (unsigned int)bIsProcessLocalSystem(CurrentProcess) == 0;
    return (unsigned int)GreSetDeviceGammaRamp(a1, a2, v6, 0);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v7;
}
