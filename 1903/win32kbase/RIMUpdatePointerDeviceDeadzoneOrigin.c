/*
 * XREFs of RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C013C7D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceDeadzoneOrigin(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rcx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 39, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v7 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v7;
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 40, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
  }
  else if ( v4 < 5 && (_mm_lfence(), v6 = v4, v7 = 0, (v8 = *(_QWORD *)(a1 + 8 * v6 + 416)) != 0) )
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, a2, 1, 41, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids, v7);
  }
  return v7;
}
