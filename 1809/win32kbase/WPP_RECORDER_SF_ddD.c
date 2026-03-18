/*
 * XREFs of WPP_RECORDER_SF_dDD @ 0x1C011178C
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01296D4 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C012BC0C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dDD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  __int64 v6; // rdi
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v6 = gRimLog;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(v6, 3LL, 22LL, a5, v8, (__int64 *)va);
}
