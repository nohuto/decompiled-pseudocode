/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_4ad19751f65124ce209d5138e63b7715___ @ 0x180049540
 * Callers:
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180049364 (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_4ad19751f65124ce209d5138e63b7715___ @ 0x180049540 (CTransitionVisualController--ForEachOwnedWindow__lambda_4ad19751f65124ce209d5138e63b7715___.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000C108 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_4ad19751f65124ce209d5138e63b7715___ @ 0x180049540 (CTransitionVisualController--ForEachOwnedWindow__lambda_4ad19751f65124ce209d5138e63b7715___.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_4ad19751f65124ce209d5138e63b7715___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // ebx
  __int64 v6; // rax
  __int64 i; // rsi
  __int64 v8; // rbp

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 604) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 392);
    if ( !v6 || (*(_BYTE *)(v6 + 240) & 0x30) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 576); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * i);
        if ( (*(_DWORD *)(v8 + 604) & 0xFFF) == 0xFFF )
        {
          v3 = 0;
          if ( *(_QWORD *)(v8 + 392) && CTransitionVisualController::ShouldCloneWindow(*(HWND *)(v8 + 40)) )
            v3 = CVisual::RenderRecursive(*(CVisual **)(v8 + 392));
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_4ad19751f65124ce209d5138e63b7715___(
                   v8,
                   a2,
                   0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
