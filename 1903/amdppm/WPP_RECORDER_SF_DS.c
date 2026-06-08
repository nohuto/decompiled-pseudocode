/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x1C0003B44
 * Callers:
 *     Display_TSS @ 0x1C0005424 (Display_TSS.c)
 *     Display_xSD @ 0x1C00056E0 (Display_xSD.c)
 *     Display_CSD @ 0x1C0005C94 (Display_CSD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Ds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        const char *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  const char *v13; // rcx
  int v15; // [rsp+20h] [rbp-38h]

  v7 = (__int64)a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = "NULL";
    if ( a7 )
      v13 = a7;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      a4,
      &a6,
      4LL,
      v13,
      v12,
      0LL);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( *(_BYTE *)(v7 + v8) );
  }
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids, v15, &a6);
}
