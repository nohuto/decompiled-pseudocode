/*
 * XREFs of ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C0016B30
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C001A5F4 (SetWindowCompositionInfo.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall xxxProcessUpdateFrameMargins(struct tagWND *a1, const struct FRAME_MARGIN *a2)
{
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, 0x28uLL);
  if ( (unsigned int)GetWindowCompositionInfo(a1, v4) )
  {
    v4[4] = *(_QWORD *)a2;
    SetWindowCompositionInfo(a1, v4);
  }
}
