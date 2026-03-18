/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C01223E0
 * Callers:
 *     RIMQueryDev @ 0x1C0088FEC (RIMQueryDev.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rbx
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  v5 = gRimLog;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5e106e1955d43df0565e3144618cade0_Traceguids,
      19LL,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 19;
  return WppAutoLogTrace(v5, 2LL, 19LL, &WPP_5e106e1955d43df0565e3144618cade0_Traceguids, v7, (__int64 *)va);
}
