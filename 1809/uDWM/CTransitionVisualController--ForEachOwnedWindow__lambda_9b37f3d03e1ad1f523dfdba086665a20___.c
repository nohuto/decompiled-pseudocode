/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___ @ 0x18009E540
 * Callers:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800301D8 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___ @ 0x18009E540 (CTransitionVisualController--ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___ @ 0x18009E540 (CTransitionVisualController--ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___.c)
 *     _lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator() @ 0x18009E714 (_lambda_9b37f3d03e1ad1f523dfdba086665a20_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi

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
          v3 = lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator()(a1, *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * i));
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___(
                   v8,
                   a2,
                   0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
