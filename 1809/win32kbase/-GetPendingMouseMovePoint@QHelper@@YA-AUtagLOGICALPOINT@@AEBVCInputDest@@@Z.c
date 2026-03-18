/*
 * XREFs of ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C00706FC
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C006F730 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

__int64 __fastcall QHelper::GetPendingMouseMovePoint(__int64 a1, CInputDest *a2)
{
  __int64 Queue; // rdi
  int v4; // eax

  Queue = CInputDest::GetQueue(a2, 0);
  if ( Queue && (unsigned int)UserIsCurrentThreadDesktopComposed() )
  {
    v4 = *(_DWORD *)(Queue + 192);
    *(_QWORD *)a1 = *(_QWORD *)(Queue + 184);
    *(_DWORD *)(a1 + 8) = v4;
  }
  else
  {
    *(_QWORD *)a1 = *((_QWORD *)gpsi + 620);
    *(_DWORD *)(a1 + 8) = 18;
  }
  return a1;
}
