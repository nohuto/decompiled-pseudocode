/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x1800A2A30
 * Callers:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18002E760 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x1800A2A30 (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x1800A2A30 (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 *     _lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator() @ 0x1800A2B54 (_lambda_95d8fb2efa1b08d320c8654ffeeb34da_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___(
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
          v3 = lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator()(a1, *(_QWORD *)(*(_QWORD *)(a1 + 560) + 8 * i));
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___(
                   v8,
                   a2,
                   0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
