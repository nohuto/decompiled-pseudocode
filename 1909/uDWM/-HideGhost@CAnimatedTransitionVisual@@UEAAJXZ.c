/*
 * XREFs of ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18003A3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::HideGhost(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  int v4; // eax
  void *v5; // [rsp+28h] [rbp-10h]

  v1 = 0;
  if ( *((_BYTE *)this + 970) )
  {
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
    {
      v4 = VisualCollection::Remove((VisualCollection *)(v3 + 32), (CAnimatedTransitionVisual *)((char *)this + 8));
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2BCu, v5);
    }
  }
  return v1;
}
