/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_22fca495aa2a21adbf46ac02ecb94f06___ @ 0x18009E484
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_22fca495aa2a21adbf46ac02ecb94f06___ @ 0x18009E484 (CTransitionVisualController--ForEachOwnedWindow__lambda_22fca495aa2a21adbf46ac02ecb94f06___.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18009F940 (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_22fca495aa2a21adbf46ac02ecb94f06___ @ 0x18009E484 (CTransitionVisualController--ForEachOwnedWindow__lambda_22fca495aa2a21adbf46ac02ecb94f06___.c)
 *     _lambda_22fca495aa2a21adbf46ac02ecb94f06_::operator() @ 0x18009E6A8 (_lambda_22fca495aa2a21adbf46ac02ecb94f06_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_22fca495aa2a21adbf46ac02ecb94f06___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi
  int v9; // eax

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
          v9 = lambda_22fca495aa2a21adbf46ac02ecb94f06_::operator()(a2, *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * i));
          v3 = v9;
          if ( v9 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_22fca495aa2a21adbf46ac02ecb94f06___(
                   v8,
                   a2,
                   0LL,
                   (unsigned int)v9);
        }
      }
    }
  }
  return (unsigned int)v3;
}
