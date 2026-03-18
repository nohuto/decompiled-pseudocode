/*
 * XREFs of TtmpPushTerminalDisplayStateOntoDevice @ 0x1408BB75C
 * Callers:
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1408BB24C (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 * Callees:
 *     TtmpCallSetBuiltinPanelState @ 0x1408BADA8 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1408BAE30 (TtmpCallSetDisplayState.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408BBB4C (TtmpUpdatePrimaryDisplayWnf.c)
 */

_UNKNOWN **__fastcall TtmpPushTerminalDisplayStateOntoDevice(__int64 a1, __int64 a2, unsigned int a3)
{
  _UNKNOWN **result; // rax
  unsigned int v7; // esi

  if ( *(_QWORD *)(a2 + 56) )
  {
    if ( *(_QWORD *)(a2 + 24) != 0xFFFFFFFFLL && a3 <= 1 )
      TtmpCallSetBuiltinPanelState((int *)a1, a2, 0);
    result = TtmpCallSetDisplayState(a1, a2, a3);
    if ( *(_QWORD *)(a2 + 24) == 0xFFFFFFFFLL )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
    }
    else
    {
      v7 = 2;
      if ( a3 == 2 )
      {
        TtmpCallSetBuiltinPanelState((int *)a1, a2, 2);
      }
      else if ( a3 == 3 )
      {
        TtmpCallSetBuiltinPanelState((int *)a1, a2, 1);
        v7 = 1;
      }
      else
      {
        v7 = 0;
      }
      return (_UNKNOWN **)TtmpUpdatePrimaryDisplayWnf(a1, a2, v7);
    }
  }
  return result;
}
