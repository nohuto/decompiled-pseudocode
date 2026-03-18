/*
 * XREFs of PopDispatchStateCallout @ 0x1406A39E4
 * Callers:
 *     PoPowerOffMonitor @ 0x14015DED4 (PoPowerOffMonitor.c)
 *     PopPrepareSleep @ 0x14015E7E0 (PopPrepareSleep.c)
 *     PoBlockConsoleSwitch @ 0x1406A3A78 (PoBlockConsoleSwitch.c)
 *     PopReleaseAdaptiveLock @ 0x1406EEAE4 (PopReleaseAdaptiveLock.c)
 *     PoUnblockConsoleSwitch @ 0x140724A04 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140724A28 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140724A48 (PoStartPowerStateTasks.c)
 *     PopSuspendApps @ 0x140726208 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14072625C (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407262BC (PopResumeApps.c)
 *     PopResumeServices @ 0x140726340 (PopResumeServices.c)
 *     PopBlockSessionSwitch @ 0x140729830 (PopBlockSessionSwitch.c)
 *     PoEndPartitionReplace @ 0x1408A87A4 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x1408A88D0 (PoStartPartitionReplace.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1406A2EE4 (PopInvokeWin32Callout.c)
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
