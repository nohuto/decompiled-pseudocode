/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00017A0
 * Callers:
 *     KeyboardClassRead @ 0x1C00012F0 (KeyboardClassRead.c)
 *     KeyboardClassPowerComplete @ 0x1C0001490 (KeyboardClassPowerComplete.c)
 *     KeyboardClassSetLedsComplete @ 0x1C00016E0 (KeyboardClassSetLedsComplete.c)
 *     KeyboardClassPower @ 0x1C0001880 (KeyboardClassPower.c)
 *     KeyboardClassCreate @ 0x1C0001D40 (KeyboardClassCreate.c)
 *     KeyboardClassCancelPendingIrpLeds @ 0x1C0004BE8 (KeyboardClassCancelPendingIrpLeds.c)
 *     KeyboardClassReadCopyData @ 0x1C0005198 (KeyboardClassReadCopyData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002E90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // r8
  int v11; // eax
  char *v13; // rcx
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a3 - 1;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (v10 >> 5) + 1);
  if ( _bittest(&v11, v10 & 0x1F) )
  {
    v13 = (char *)WPP_GLOBAL_Control + 80 * v9;
    if ( (unsigned __int8)v13[41] >= a2 )
      ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v13 + 3),
        43LL,
        &WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids,
        a4,
        (__int64 *)va,
        8LL,
        va1,
        8LL,
        0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(
           a1,
           a2,
           a3,
           &WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
