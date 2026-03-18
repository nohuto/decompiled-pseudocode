/*
 * XREFs of WPP_RECORDER_SF_ddD @ 0x1C00F0A2C
 * Callers:
 *     RIMGetDeviceObjectPointer @ 0x1C00EF940 (RIMGetDeviceObjectPointer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ddD(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, int a5, int a6, __int64 a7, ...)
{
  int v9; // [rsp+20h] [rbp-58h]
  int v10; // [rsp+60h] [rbp-18h] BYREF
  int v11; // [rsp+68h] [rbp-10h] BYREF
  va_list va; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va, a7);
  v11 = 0;
  v10 = 3;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, int *, __int64, int *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
      31LL,
      &v11,
      4LL,
      &v10,
      4LL,
      va,
      4LL,
      0LL);
  LOWORD(v9) = 31;
  return WppAutoLogTrace(a1, 3LL, 20LL, &WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids, v9, &v11);
}
