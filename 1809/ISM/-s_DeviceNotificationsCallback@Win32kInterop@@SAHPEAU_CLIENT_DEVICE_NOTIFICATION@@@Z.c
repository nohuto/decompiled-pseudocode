/*
 * XREFs of ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180083740
 * Callers:
 *     <none>
 * Callees:
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800818C8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180081A1C (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x1800827F0 (-ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z.c)
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x180082A10 (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x180082C08 (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x180082DC4 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x1800834A4 (-ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Win32kInterop::s_DeviceNotificationsCallback(struct _CLIENT_DEVICE_NOTIFICATION *a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  const struct _PnpNotification *i; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  Win32kInterop *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  Win32kInterop *v16; // rcx
  _BYTE v18[48]; // [rsp+28h] [rbp-38h] BYREF

  v2 = *((_DWORD *)a1 + 1);
  if ( !v2 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v18, L"DNI_PNP_NOTIFICATION", 0LL);
    Win32kInterop::ProcessPnpNotification(v16, (struct _CLIENT_DEVICE_NOTIFICATION *)((char *)a1 + 8));
    goto LABEL_19;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v18, L"DNI_INPUT_MESSAGE", 0LL);
    Win32kInterop::ProcessInputMessage(v15, *(_DWORD *)a1, (__int64)a1 + 8);
    goto LABEL_19;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v18, L"DNI_MOUSE_INTERCEPT_MESSAGE", 0LL);
    Win32kInterop::ProcessInterceptMessage(v14, *(_DWORD *)a1, (__int64)a1 + 8);
    goto LABEL_19;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v18, L"DNI_RAW_MOUSE_INPUT_MESSAGE", 0LL);
    Win32kInterop::ProcessRawInputMessage(v13, *(_DWORD *)a1, (__int64)a1 + 8);
    goto LABEL_19;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v18, L"DNI_CURSOR_POS", 0LL);
    v11 = *((_QWORD *)a1 + 3);
    v12 = Win32kInterop::s_pInterop;
    if ( !v11 )
    {
LABEL_13:
      Win32kInterop::ProcessCursorPosMessage((__int64)v12, v10, (unsigned int *)a1 + 2);
      goto LABEL_19;
    }
    if ( v11 > *((_QWORD *)Win32kInterop::s_pInterop + 249) )
    {
      *((_QWORD *)Win32kInterop::s_pInterop + 249) = v11;
      goto LABEL_13;
    }
LABEL_19:
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v18);
    return 1LL;
  }
  if ( v6 == 1 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v18, L"DNI_PNP_NOTIFICATION_BULK", 0LL);
    v7 = *((unsigned int *)a1 + 2);
    v8 = v7 / 0xC;
    for ( i = (const struct _PnpNotification *)*((_QWORD *)a1 + 2); v8; --v8 )
    {
      Win32kInterop::ProcessPnpNotification((Win32kInterop *)v7, i);
      i = (const struct _PnpNotification *)((char *)i + 12);
    }
    goto LABEL_19;
  }
  return 1LL;
}
