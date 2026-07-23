/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x14016E518
 * Callers:
 *     KeUnmaskInterrupt @ 0x140158BA0 (KeUnmaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14016D3C0 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x14016D648 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14016DC40 (KeConnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_1403FF4C0[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
