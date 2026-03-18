/*
 * XREFs of IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C006D2E8
 * Callers:
 *     IntelPptFilter_FilterCommand @ 0x1C006D100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C006D220 (IntelPptFilter_FilterCommandCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     IntelPptFilter_CheckAndIncreaseEndpointCount @ 0x1C006D020 (IntelPptFilter_CheckAndIncreaseEndpointCount.c)
 *     IntelPptFilter_DecreaseEndpointCount @ 0x1C006D090 (IntelPptFilter_DecreaseEndpointCount.c)
 */

__int64 __fastcall IntelPptFilter_FilterEndpointConfigureCommand(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // r10
  unsigned int v6; // edi
  unsigned __int8 v7; // cl
  unsigned int i; // r9d
  int v9; // r9d
  unsigned int v10; // ecx
  unsigned __int8 j; // dl
  int v12; // ebx
  bool v13; // sf

  v3 = *(_DWORD **)(a2 + 72);
  v6 = 1;
  v7 = 0;
  for ( i = *v3 & 0xFFFFFFFC; i; i &= i - 1 )
    ++v7;
  v9 = v7;
  v10 = v3[1] & 0xFFFFFFFC;
  for ( j = 0; v10; v10 &= v10 - 1 )
    ++j;
  v12 = j - v9;
  v13 = v12 < 0;
  if ( v12 <= 0 )
    goto LABEL_14;
  if ( a3 )
  {
    v13 = v12 < 0;
LABEL_14:
    if ( v13 && a3 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0x10u,
          0x10u,
          (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids,
          v9 - j);
      IntelPptFilter_DecreaseEndpointCount(a1, -v12);
    }
    return 4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      0x10u,
      0xEu,
      (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids,
      j - v9);
  if ( IntelPptFilter_CheckAndIncreaseEndpointCount(a1, v12) )
    return 4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      3u,
      0x10u,
      0xFu,
      (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids);
  *(_BYTE *)(a2 + 60) = 7;
  return v6;
}
