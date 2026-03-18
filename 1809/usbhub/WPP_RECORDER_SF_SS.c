/*
 * XREFs of WPP_RECORDER_SF_SS @ 0x1C005C960
 * Callers:
 *     UsbhGetUxdDeviceKey @ 0x1C005C0CC (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C005C328 (UsbhGetUxdPortKey.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005D84C (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SS(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  __int64 v7; // rsi
  const wchar_t *v8; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-58h]

  v7 = -1LL;
  v8 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a7[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a7;
    if ( !a7 )
      v14 = L"NULL";
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      v17,
      v16,
      v14,
      v13,
      0LL);
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  v19 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v19 = a6 == 0LL;
  }
  if ( v19 )
    v8 = L"NULL";
  LOWORD(v21) = a4;
  return WppAutoLogTrace(a1, a2, 1LL, a5, v21, v8);
}
