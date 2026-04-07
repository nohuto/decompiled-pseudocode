/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___ @ 0x18004B284
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18004B104 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___ @ 0x18004B284 (CTransitionVisualController--ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___ @ 0x18004B284 (CTransitionVisualController--ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___.c)
 *     _lambda_aa6b274e5719162e24170e1c78bdbbc5_::operator() @ 0x18004B348 (_lambda_aa6b274e5719162e24170e1c78bdbbc5_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 612) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 400);
    if ( !v6 || (*(_BYTE *)(v6 + 240) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 584); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 560) + 8 * i);
        if ( (*(_DWORD *)(v8 + 612) & 0xFFF) == 0xFFF )
        {
          v3 = lambda_aa6b274e5719162e24170e1c78bdbbc5_::operator()(a2, *(_QWORD *)(*(_QWORD *)(a1 + 560) + 8 * i));
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___(
                   v8,
                   a2,
                   0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
