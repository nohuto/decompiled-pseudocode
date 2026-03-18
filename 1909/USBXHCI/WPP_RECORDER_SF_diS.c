/*
 * XREFs of WPP_RECORDER_SF_diS @ 0x1C0002BF8
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C000F620 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_diS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  int v16; // [rsp+20h] [rbp-58h]

  v8 = (__int64)a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a8[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a8;
    if ( !a8 )
      v14 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      (char *)&Context.Logger + 4,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      v14,
      v13,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9) );
  }
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 4LL, 4LL, (char *)&Context.Logger + 4, v16, &a6);
}
