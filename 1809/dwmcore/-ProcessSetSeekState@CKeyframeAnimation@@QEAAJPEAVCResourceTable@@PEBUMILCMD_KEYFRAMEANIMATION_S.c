/*
 * XREFs of ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x18006FCB4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetSeekState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = 0;
  if ( *((_QWORD *)this + 42) )
  {
    if ( *((_DWORD *)a3 + 6) )
      v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 480LL);
    else
      v5 = *((_QWORD *)a3 + 1);
    *((_QWORD *)this + 57) = v5;
    v6 = *((_QWORD *)a3 + 2);
    *((_BYTE *)this + 524) |= 2u;
    *((_QWORD *)this + 58) = v6;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 224LL) + 416LL) |= 2u;
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x1AEu);
  }
  return v3;
}
