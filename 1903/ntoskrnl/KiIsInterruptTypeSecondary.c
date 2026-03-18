/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x14017CBEC
 * Callers:
 *     KeUnmaskInterrupt @ 0x140168E80 (KeUnmaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14017BB10 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x14017BD20 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14017C2CC (KeConnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_1404244C0[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
