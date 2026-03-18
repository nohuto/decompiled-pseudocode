/*
 * XREFs of ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0132510
 * Callers:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C013233C (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C0085FC8 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0132570 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 */

__int64 __fastcall _DetachWindowCompositionTarget(struct tagWND *a1, int a2)
{
  unsigned int v3; // edi
  int v4; // edx
  CWindowProp *v5; // rbx
  CWindowProp *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( CWindowProp::GetProp<CHwndTargetProp>((__int64)a1, (__int64 *)&v7) )
  {
    v4 = a2;
    v5 = v7;
    v3 = CHwndTargetProp::ClearSystemVisual(v7, v4);
    if ( !*((_QWORD *)v5 + 2) && !*((_QWORD *)v5 + 3) )
      CWindowProp::RemoveAndDeleteProp(v5);
  }
  return v3;
}
