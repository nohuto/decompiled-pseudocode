/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00BCB94
 * Callers:
 *     UserAddBaseWindowHandle @ 0x1C00BC290 (UserAddBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C00BC61C (UserFindBaseWindowHandle.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C00E0B30 (RIMCompleteSecondaryRimReads.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C00E1508 (RIMDoMobileKeyboardInvalidation.c)
 *     RIMOnPowerNotification @ 0x1C00E3AD0 (RIMOnPowerNotification.c)
 *     rimDereferenceDev @ 0x1C00F879C (rimDereferenceDev.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00F9D88 (RIMDiscoverDevicesOfInputType.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C00FAE34 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00FB238 (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C00FB99C (RIMWaitForPriorPnpWorkToComplete.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00FE008 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C00FE6E0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C00FF81C (rimSignalReadComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, (__int64 *)va);
}
