/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C00394C0
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0038EB8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0083CC4 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     IsEqualInputSource @ 0x1C00395D0 (IsEqualInputSource.c)
 *     PostPendingMouseMove @ 0x1C00425B0 (PostPendingMouseMove.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(struct tagQ *a1, _DWORD *a2)
{
  int v4; // eax

  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 99) & 0x20) == 0 )
      goto LABEL_3;
    if ( !(unsigned __int8)IsEqualInputSource((char *)a1 + 428, a2) )
    {
      v4 = a2[1];
      if ( (*((_DWORD *)a1 + 108) & 0xFFFFFFFB) != 0 && (v4 & 0xFFFFFFFB) != 0 )
      {
        if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) & 1) == 0 )
          PostPendingMouseMove(a1);
        goto LABEL_3;
      }
      if ( (v4 & 0xFFFFFFFB) != 0 )
      {
LABEL_3:
        *((_DWORD *)a1 + 107) = *a2;
        *((_DWORD *)a1 + 108) = a2[1];
      }
    }
  }
}
