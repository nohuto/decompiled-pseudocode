/*
 * XREFs of ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180089C04
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18007D678 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180089790 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800CEA6C (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z.c)
 * Callees:
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180089C68 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9E60 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2, bool a3)
{
  __int64 v6; // rax

  if ( CPtrArrayBase::Remove((CVisual *)((char *)this + 72), (unsigned __int64)a2) )
  {
    if ( (*((_BYTE *)a2 + 95) & 4) != 0 )
      CVisual::DirtyForInvisibleChild(this, a2, a3);
    v6 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = 0LL;
    (*(void (__fastcall **)(struct CVisual *))(v6 + 16))(a2);
  }
}
