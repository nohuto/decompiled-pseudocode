/*
 * XREFs of RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C01116B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceDeadzoneOrigin(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rcx
  unsigned int v10; // [rsp+28h] [rbp-10h]

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x26u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v7 = -1073741811;
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x27u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
  }
  else if ( a2 < 5 && (_mm_lfence(), v6 = a2, v7 = 0, (v8 = *(_QWORD *)(a1 + 8 * v6 + 416)) != 0) )
  {
    if ( *(_DWORD *)(v8 + 16) )
      *(_QWORD *)(v8 + 44) = a3;
    else
      v7 = -1073741823;
  }
  else
  {
    v7 = -1073741811;
  }
  v10 = v7;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x28u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids, v10);
  return v7;
}
