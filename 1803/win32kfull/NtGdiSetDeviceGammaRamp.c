/*
 * XREFs of NtGdiSetDeviceGammaRamp @ 0x1C00BA6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C00BA764 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     GreSetDeviceGammaRamp @ 0x1C00BBD80 (GreSetDeviceGammaRamp.c)
 */

__int64 __fastcall NtGdiSetDeviceGammaRamp(HDC a1, void *a2)
{
  int v4; // ebx
  unsigned int v5; // esi
  struct _EPROCESS *CurrentProcess; // rax

  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(MmUserProbeAddress, 0LL);
    LOBYTE(v4) = (unsigned int)bIsProcessLocalSystem(CurrentProcess) == 0;
    return (unsigned int)GreSetDeviceGammaRamp(a1, a2, v4, 0);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v5;
}
