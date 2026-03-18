/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0011F14
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C000D094 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_CreateWdfDevice @ 0x1C00587E0 (Controller_CreateWdfDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  const wchar_t *v13; // rcx
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-48h]

  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 10LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, char *, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      (char *)&Context.Logger + 4,
      a4,
      v13,
      v12,
      0LL);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v6 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, a2, 4LL, (char *)&Context.Logger + 4, v16, v6);
}
