/*
 * XREFs of ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C012D828
 * Callers:
 *     RIMActivatePointerDeviceDeadzone @ 0x1C0111300 (RIMActivatePointerDeviceDeadzone.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C012EEE4 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 */

void __fastcall RIMDeadzone::ActivateTelemetrySession(RIMDeadzone *this, int a2)
{
  _DWORD *v2; // rdi
  DeadzonePalmTelemetry *v5; // rcx
  unsigned __int64 v6; // rcx

  v2 = (_DWORD *)*((_QWORD *)this + 7);
  v5 = (DeadzonePalmTelemetry *)v2;
  if ( v2 && a2 && *((_DWORD *)this + 4) == 2 )
  {
    v2[1] = 0;
    memset(v2 + 515, 0, 0x2800uLL);
    memset(v2 + 3, 0, 0x800uLL);
    *((_BYTE *)v2 + 12) = 0;
    v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *v2 = v6;
    v2[2] = v6;
    v5 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
  }
  if ( v5 && !a2 && *((_DWORD *)this + 4) == 2 )
    DeadzonePalmTelemetry::ClearSession(v5);
}
