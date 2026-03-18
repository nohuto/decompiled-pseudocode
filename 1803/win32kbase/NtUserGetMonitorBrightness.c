/*
 * XREFs of NtUserGetMonitorBrightness @ 0x1C00B64F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     DrvGetMonitorBrightness @ 0x1C00D50C0 (DrvGetMonitorBrightness.c)
 */

__int64 __fastcall NtUserGetMonitorBrightness(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v6; // r14d
  __int64 *v7; // rbx
  ULONG64 v8; // rcx
  __int64 v9; // rbx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int MonitorBrightness; // ebx
  __int64 v15; // r8
  unsigned int v17; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v18[7]; // [rsp+24h] [rbp-44h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]

  v6 = a2;
  v7 = (__int64 *)a1;
  v17 = 0;
  v18[0] = 0;
  UserSessionSwitchEnterCrit(a1, a2, (__int64)a3);
  v8 = (ULONG64)(v7 + 1);
  if ( v7 + 1 < v7 || v8 > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v9 = *v7;
  v19 = v9;
  if ( a3 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
    ProbeForWrite(a3, 4uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  if ( a4 )
  {
    v11 = PsGetCurrentProcessWow64Process(v8);
    ProbeForWrite(a4, 4uLL, v11 != 0 ? 1 : 4);
  }
  MonitorBrightness = DrvGetMonitorBrightness(v9, v6, &v17, v18);
  if ( a3 )
  {
    v13 = v17;
    *a3 = v17;
  }
  if ( a4 )
    *a4 = v18[0];
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v13, v12, v15);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return MonitorBrightness;
}
