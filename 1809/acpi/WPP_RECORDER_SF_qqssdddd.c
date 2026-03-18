/*
 * XREFs of WPP_RECORDER_SF_qqssdddd @ 0x1C0012C64
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C0012060 (ACPIThermalDeviceControl.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0012970 (ACPIThermalCompletePendingIrps.c)
 *     ACPIThermalCancelRequest @ 0x1C005DAB0 (ACPIThermalCancelRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqssdddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // [rsp+28h] [rbp-89h]

  v9 = a9;
  v10 = a8;
  v11 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(a9 + v16) );
    }
    if ( a8 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_BYTE *)(a8 + v17) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_909b6258fcb130ce0aafc52c77f12fe6_Traceguids,
      a4,
      &a6,
      8LL,
      &a7);
  }
  if ( v9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(v9 + v14) );
  }
  if ( v10 )
  {
    do
      ++v11;
    while ( *(_BYTE *)(v10 + v11) );
  }
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, 16LL, &WPP_909b6258fcb130ce0aafc52c77f12fe6_Traceguids, v18, &a6, 8LL, &a7);
}
