/*
 * XREFs of ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x18005F108
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18005F158 (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessUpdatePlaybackState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE *a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  int updated; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  if ( *((_QWORD *)this + 42) )
  {
    v3 = *((unsigned int *)a3 + 2);
    if ( (unsigned int)v3 > 2 )
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x188u);
    }
    else
    {
      v4 = *(_QWORD *)((char *)a3 + 12);
      LOBYTE(a3) = *((_DWORD *)a3 + 5) != 0;
      updated = CKeyframeAnimation::UpdatePlaybackState(this, v3, a3, v4);
      v7 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x18Fu);
      else
        return 0;
    }
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x181u);
  }
  return v7;
}
