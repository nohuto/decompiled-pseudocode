/*
 * XREFs of WPP_RECORDER_SF__HEX_ @ 0x1C0050C3C
 * Callers:
 *     UsbhIoctlTraceOutput @ 0x1C0050580 (UsbhIoctlTraceOutput.c)
 *     UsbhExceptionTrace @ 0x1C0055D60 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF__HEX_(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v9; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]

  v9 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v9),
      43LL,
      a5,
      a4,
      a6 + 8,
      2LL,
      *(_QWORD *)a6,
      *(__int16 *)(a6 + 8),
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v12, a6 + 8);
}
