/*
 * XREFs of ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00C9518
 * Callers:
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00C9308 (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01EE124 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 *     xxxTouchTargetWindow @ 0x1C01F0D9C (xxxTouchTargetWindow.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00C9620 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 */

__int64 __fastcall WindowHasCompositionTarget(struct tagWND *a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // edx
  bool v7; // zf
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = CWindowProp::GetProp<CHwndTargetProp>(a1, &v8);
  v4 = 0;
  if ( v3 )
  {
    v6 = 0;
    if ( a2 )
      v7 = *(_QWORD *)(v8 + 16) == 0LL;
    else
      v7 = *(_QWORD *)(v8 + 24) == 0LL;
    LOBYTE(v6) = !v7;
    if ( v6 )
      return 1;
  }
  return v4;
}
