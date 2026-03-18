/*
 * XREFs of EditionInitializeWppLogging @ 0x1C0139550
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     WppInitKm @ 0x1C036B4CC (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C036B580 (WppLoadTracingSupport.c)
 */

__int64 __fastcall EditionInitializeWppLogging(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  char v6; // al
  _BYTE *v7; // rax
  PDEVICE_OBJECT v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+28h] [rbp-38h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kFullTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(a1, a2);
  v10 = 8LL;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v10);
  memset(v11, 0, sizeof(v11));
  v4 = 16LL;
  v11[0] = 48LL;
  HIDWORD(v11[3]) = 16;
  HIDWORD(v11[1]) = 200;
  LOBYTE(v11[4]) = 0;
  v11[2] = 0LL;
  v5 = &v11[4];
  LOBYTE(v11[3]) = 0;
  do
  {
    if ( v4 == -2147483630 )
      break;
    v6 = v5["win32kfull" - (char *)&v11[4]];
    if ( !v6 )
      break;
    *v5++ = v6;
    --v4;
  }
  while ( v4 );
  v7 = v5 - 1;
  if ( v4 )
    v7 = v5;
  v8 = WPP_GLOBAL_Control;
  *v7 = 0;
  LODWORD(v11[1]) = 512;
  result = imp_WppRecorderLogCreate(v8, v11, &gFullLog);
  if ( (int)result < 0 )
    gFullLog = 0LL;
  return result;
}
