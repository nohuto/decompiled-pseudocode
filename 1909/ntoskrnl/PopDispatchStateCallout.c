/*
 * XREFs of PopDispatchStateCallout @ 0x1406EF1E8
 * Callers:
 *     PoPowerOffMonitor @ 0x14015E574 (PoPowerOffMonitor.c)
 *     PopPrepareSleep @ 0x14015EE80 (PopPrepareSleep.c)
 *     PoBlockConsoleSwitch @ 0x1406EF198 (PoBlockConsoleSwitch.c)
 *     PopReleaseAdaptiveLock @ 0x1406F05CC (PopReleaseAdaptiveLock.c)
 *     PoUnblockConsoleSwitch @ 0x1407268A4 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1407268C8 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x1407268E8 (PoStartPowerStateTasks.c)
 *     PopSuspendApps @ 0x1407280A8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407280FC (PopSuspendServices.c)
 *     PopResumeApps @ 0x14072815C (PopResumeApps.c)
 *     PopResumeServices @ 0x1407281E0 (PopResumeServices.c)
 *     PopBlockSessionSwitch @ 0x14072ABA0 (PopBlockSessionSwitch.c)
 *     PoEndPartitionReplace @ 0x1408A8004 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x1408A8134 (PoStartPartitionReplace.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x14067098C (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // [rsp+30h] [rbp-30h] BYREF
  int *v8; // [rsp+38h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+44h] [rbp-1Ch]
  _DWORD v11[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140572410 & 0x8000) != 0 )
  {
    v6 = a1[1];
    v10 = 0;
    v11[0] = v6;
    v11[1] = a1[2];
    v11[2] = a1[3];
    v11[3] = a1[4];
    v8 = v11;
    v9 = 16;
    EtwTraceKernelEvent((__int64)&v8, 1u, 0x80008000, 0x1228u, 0x401802u);
  }
  v4 = PopInvokeWin32Callout(4, (__int64)a1, 2 - (unsigned int)(a2 != 0), (int *)(a2 & -(__int64)(a2 != 0)));
  if ( (xmmword_140572410 & 0x8000) != 0 )
  {
    v10 = 0;
    v8 = (int *)&v7;
    v7 = v4;
    v9 = 4;
    EtwTraceKernelEvent((__int64)&v8, 1u, 0x80008000, 0x1229u, 0x401802u);
  }
  return v4;
}
