/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18005F158
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18005F050 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x18005F108 (-ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIM.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801A3998 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::UpdatePlaybackState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( *(_QWORD *)(a1 + 336) )
  {
    if ( a2 <= 2 )
    {
      *(_DWORD *)(a1 + 508) = a2;
      if ( !*(_DWORD *)(a1 + 504) && a2 )
      {
        if ( a3 )
          a4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL);
        *(_QWORD *)(a1 + 440) = a4;
        *(_QWORD *)(a1 + 448) = a4;
      }
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 224LL) + 416LL) |= 2u;
    }
    else
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x2C9u);
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147467259, 0x2C2u);
  }
  return v4;
}
