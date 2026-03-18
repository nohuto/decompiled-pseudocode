/*
 * XREFs of NtUserSetMonitorBrightness @ 0x1C00B99C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     DrvSetMonitorBrightness2 @ 0x1C00D5B80 (DrvSetMonitorBrightness2.c)
 */

__int64 __fastcall NtUserSetMonitorBrightness(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned int v6; // edi
  struct _LUID *v7; // rbx
  struct _LUID v8; // rcx
  ULONG64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+60h] [rbp-58h]
  __int128 v16; // [rsp+68h] [rbp-50h] BYREF
  __int64 v17; // [rsp+78h] [rbp-40h]

  v6 = a2;
  v7 = (struct _LUID *)a1;
  UserSessionSwitchEnterCrit(a1, a2, a3);
  if ( &v7[1] < v7 || (unsigned __int64)&v7[1] > MmUserProbeAddress )
    v7 = (struct _LUID *)MmUserProbeAddress;
  v8 = *v7;
  if ( a6 )
  {
    v9 = a6;
    if ( a6 + 24 < a6 || a6 + 24 > MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    v15 = *(_QWORD *)(v9 + 16);
    v16 = *(_OWORD *)v9;
    v17 = v15;
  }
  v10 = DrvSetMonitorBrightness2(
          v8,
          v6,
          a5,
          (struct BRIGHTNESS_SENSOR_DATA *)((unsigned __int64)&v16 & -(__int64)(a6 != 0)));
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v12, v11, v13);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v10;
}
