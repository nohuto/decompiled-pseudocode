/*
 * XREFs of ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18006A560
 * Callers:
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18006A4F0 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18020CA10 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18020D8A0 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18020EC80 (-DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18005D6A4 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 */

void __fastcall CResource::DetachFromChannel(CResource *this, CAnimationLoggingManager **a2)
{
  CAnimationLoggingManager **v3; // rcx

  v3 = (CAnimationLoggingManager **)*((_QWORD *)this + 6);
  if ( a2 == v3 )
  {
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
      CAnimationLoggingManager::RemoveResourceDebugInfo(v3[7], this);
    *((_QWORD *)this + 6) = 0LL;
  }
}
