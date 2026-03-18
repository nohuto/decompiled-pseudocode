/*
 * XREFs of ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A8C28
 * Callers:
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x18006DA6C (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18006DAE4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x1800A5EA0 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800A9030 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18005B468 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A8CC8 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2, bool a3)
{
  __int64 v6; // rax

  if ( CPtrArrayBase::Remove((CVisual *)((char *)this + 72), (__int64)a2) )
  {
    if ( (*((_BYTE *)a2 + 95) & 8) != 0 )
      CVisual::DirtyForInvisibleChild(this, a2, a3);
    v6 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = 0LL;
    (*(void (__fastcall **)(struct CVisual *))(v6 + 16))(a2);
  }
}
