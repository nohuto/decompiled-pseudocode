/*
 * XREFs of ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C015A7F8
 * Callers:
 *     RIMActivatePointerDeviceDeadzone @ 0x1C013C3A0 (RIMActivatePointerDeviceDeadzone.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C015BECC (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 */

void __fastcall RIMDeadzone::ActivateTelemetrySession(RIMDeadzone *this, int a2)
{
  __int64 v2; // rbx
  DeadzonePalmTelemetry *v5; // rcx
  unsigned __int64 v6; // rcx

  v2 = *((_QWORD *)this + 7);
  v5 = (DeadzonePalmTelemetry *)v2;
  if ( v2 && a2 && *((_DWORD *)this + 4) == 2 )
  {
    *(_DWORD *)(v2 + 4) = 0;
    memset((void *)(v2 + 2060), 0, 0x2800uLL);
    memset((void *)(v2 + 13), 0, 0x7FFuLL);
    *(_BYTE *)(v2 + 12) = 0;
    v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)v2 = v6;
    *(_DWORD *)(v2 + 8) = v6;
    v5 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
  }
  if ( v5 && !a2 && *((_DWORD *)this + 4) == 2 )
    DeadzonePalmTelemetry::ClearSession(v5);
}
