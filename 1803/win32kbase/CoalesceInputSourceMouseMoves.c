/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C003AB80
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037C94 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0039794 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     PostPendingMouseMove @ 0x1C003B110 (PostPendingMouseMove.c)
 *     IsEqualInputSource @ 0x1C00670A0 (IsEqualInputSource.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(struct tagQ *a1, _DWORD *a2)
{
  int v4; // eax

  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 97) & 0x20) == 0 )
      goto LABEL_3;
    if ( !(unsigned __int8)IsEqualInputSource((char *)a1 + 420) )
    {
      v4 = a2[1];
      if ( (*((_DWORD *)a1 + 106) & 0xFFFFFFFB) != 0 && (v4 & 0xFFFFFFFB) != 0 )
      {
        if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) & 1) == 0 )
          PostPendingMouseMove(a1);
        goto LABEL_3;
      }
      if ( (v4 & 0xFFFFFFFB) != 0 )
      {
LABEL_3:
        *((_DWORD *)a1 + 105) = *a2;
        *((_DWORD *)a1 + 106) = a2[1];
      }
    }
  }
}
