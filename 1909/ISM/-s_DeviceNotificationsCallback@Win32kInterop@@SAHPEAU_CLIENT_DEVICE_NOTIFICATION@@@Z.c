/*
 * XREFs of ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800BFAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180014C54 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800BA720 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x1800BCEC0 (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x1800BDA00 (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 *     ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x1800BE190 (-ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@.c)
 *     ?IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z @ 0x1800BFD54 (-IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Win32kInterop::s_DeviceNotificationsCallback(struct _CLIENT_DEVICE_NOTIFICATION *a1)
{
  int v2; // ecx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE v9[48]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *((_DWORD *)a1 + 1) - 1;
  if ( !v2 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v9, L"DNI_MOUSE_INTERCEPT_MESSAGE", 0LL);
    Win32kInterop::ProcessInterceptMessage(v7, *(_DWORD *)a1, (__int64)a1 + 8);
    goto LABEL_9;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v9, L"DNI_RAW_MOUSE_INPUT_MESSAGE", 0LL);
    Win32kInterop::ProcessRawInputMessage(v6, *(_DWORD *)a1, (__int64)a1 + 8);
LABEL_9:
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v9);
    return 1LL;
  }
  if ( v3 == 1 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v9, L"DNI_CURSOR_POS", 0LL);
    if ( CursorNotificationProcessor::IsTimestampNewest(
           (Win32kInterop *)((char *)Win32kInterop::s_pInterop + 288),
           *((_QWORD *)a1 + 3)) )
    {
      Win32kInterop::ProcessCursorPosMessage(v5, v4, (unsigned int *)a1 + 2);
    }
    goto LABEL_9;
  }
  return 1LL;
}
