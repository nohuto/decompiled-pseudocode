/*
 * XREFs of ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18007C7CC
 * Callers:
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x18007BF9C (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18007C014 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x18008E228 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 */

__int64 __fastcall CLivePreview::_HideExistingVisuals(CLivePreview *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v6; // rcx
  int started; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 82) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 38) + 40 * v3) + 400LL);
      if ( v6 )
      {
        started = CTopLevelWindow::StartLivePreviewAnimation(v6, (a2 ^ 1u) + 1);
        v2 = started;
        if ( started < 0 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 82) )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x486u);
  }
  return v2;
}
