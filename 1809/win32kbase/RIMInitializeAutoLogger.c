/*
 * XREFs of RIMInitializeAutoLogger @ 0x1C0006394
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0006AE8 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00F4450 (WPP_RECORDER_SF_qd.c)
 *     WppInitKm @ 0x1C02000A4 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C0200144 (WppLoadTracingSupport.c)
 */

__int64 __fastcall RIMInitializeAutoLogger(__int64 a1, __int64 a2)
{
  PDRIVER_OBJECT v2; // rbx
  __int64 result; // rax
  int v5; // edx
  __int64 v6; // [rsp+40h] [rbp-48h] BYREF
  int v7; // [rsp+48h] [rbp-40h]
  int v8; // [rsp+4Ch] [rbp-3Ch]
  __int64 v9; // [rsp+50h] [rbp-38h]
  char v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  char pszDest[16]; // [rsp+60h] [rbp-28h] BYREF

  v2 = gpWin32kDriverObject;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kbaseTraceGuid;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(v2, a2);
  v6 = 48LL;
  v11 = 16;
  pszDest[0] = 0;
  v9 = 0LL;
  v10 = 0;
  v7 = 4096;
  v8 = 819;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%ws", L"Rim");
  result = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v6, &gRimLog);
  if ( (int)result < 0 )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_qd(gBaseLog, v5, 3, 10, (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids, gBaseLog, result);
    result = gBaseLog;
    gRimLog = gBaseLog;
  }
  return result;
}
