/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x14016E418
 * Callers:
 *     KeUnmaskInterrupt @ 0x140158AA0 (KeUnmaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14016D2C0 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x14016D548 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14016DB40 (KeConnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_1403FE4C0[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
