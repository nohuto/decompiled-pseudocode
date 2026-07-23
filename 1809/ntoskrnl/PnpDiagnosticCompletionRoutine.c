/*
 * XREFs of PnpDiagnosticCompletionRoutine @ 0x14028B4D0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoFindDeviceThatFailedIrp @ 0x14016C298 (IoFindDeviceThatFailedIrp.c)
 */

__int64 __fastcall PnpDiagnosticCompletionRoutine(__int64 a1, IRP *a2, __int64 a3)
{
  int Status; // eax
  __int64 DeviceThatFailedIrp; // rax

  Status = a2->IoStatus.Status;
  *(_DWORD *)(a3 + 32) = Status;
  if ( Status < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
    if ( DeviceThatFailedIrp )
      *(_QWORD *)a3 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  IoFreeIrp(a2);
  KeSetEvent((PRKEVENT)(a3 + 8), 0, 0);
  return 3221225494LL;
}
