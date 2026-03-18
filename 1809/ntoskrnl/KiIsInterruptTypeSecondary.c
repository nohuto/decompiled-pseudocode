/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x14016E3F8
 * Callers:
 *     KeUnmaskInterrupt @ 0x140158A80 (KeUnmaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14016D2A0 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x14016D528 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14016DB20 (KeConnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_1403FE4C0[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
