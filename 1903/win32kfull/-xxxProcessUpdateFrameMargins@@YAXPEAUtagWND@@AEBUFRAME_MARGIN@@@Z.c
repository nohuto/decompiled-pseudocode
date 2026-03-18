/*
 * XREFs of ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C01300FC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C008BDD4 (SetWindowCompositionInfo.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall xxxProcessUpdateFrameMargins(struct tagWND *a1, const struct FRAME_MARGIN *a2)
{
  __int64 v4; // r8
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v5, 0, 0x28uLL);
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v5, v4) )
  {
    v5[4] = *(_QWORD *)a2;
    SetWindowCompositionInfo((__int64)a1, (__int64)v5);
  }
}
