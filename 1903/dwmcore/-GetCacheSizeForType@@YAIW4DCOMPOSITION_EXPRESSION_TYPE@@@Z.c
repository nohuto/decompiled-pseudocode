/*
 * XREFs of ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C70F8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800C6DBC (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1520 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCacheSizeForType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  if ( a1 <= 52 )
  {
    if ( a1 == 52 )
      return 20LL;
    v1 = a1 - 11;
    if ( !v1 )
      return 16LL;
    v2 = v1 - 6;
    if ( !v2 )
      return 12LL;
    v3 = v2 - 1;
    if ( !v3 )
      return 12LL;
    v5 = v3 - 17;
    if ( !v5 )
      return 16LL;
    if ( v5 == 7 )
      return 12LL;
    return 0LL;
  }
  v6 = a1 - 69;
  if ( !v6 )
    return 24LL;
  v7 = v6 - 1;
  if ( !v7 )
    return 24LL;
  v8 = v7 - 1;
  if ( !v8 )
    return 24LL;
  v9 = v8 - 33;
  if ( !v9 )
    return 32LL;
  if ( v9 != 161 )
    return 0LL;
  return 72LL;
}
