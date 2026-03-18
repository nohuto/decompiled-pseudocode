/*
 * XREFs of NtGdiEngCreateDeviceSurface @ 0x1C01358B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C013592C (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02856D4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

HSURF __fastcall NtGdiEngCreateDeviceSurface(DHSURF dhsurf, SIZEL a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  struct _EPROCESS *CurrentProcess; // rax

  v5 = a3;
  if ( gUMPDSecurityLevel == 2
    || gUMPDSecurityLevel
    && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(dhsurf, gUMPDSecurityLevel, a3, a4),
        (unsigned int)bIsProcessLocalSystem(CurrentProcess))
    || (unsigned int)ValidUmpdSizl(a2, 0) )
  {
    if ( (unsigned int)(v5 - 1) <= 7 )
      return EngCreateDeviceSurface(dhsurf, a2, v5 | 0x8000u);
  }
  else if ( gfUMPDDebug )
  {
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateDeviceSurface:Invalid sizl.\n", 3809);
  }
  return 0LL;
}
