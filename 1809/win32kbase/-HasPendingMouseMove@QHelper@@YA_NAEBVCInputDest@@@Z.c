/*
 * XREFs of ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1C006F7B4
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C006F730 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

char __fastcall QHelper::HasPendingMouseMove(QHelper *this, const struct CInputDest *a2)
{
  __int64 Queue; // rax
  char v3; // cl

  Queue = CInputDest::GetQueue(this, 0);
  v3 = 0;
  if ( Queue )
    return (*(_DWORD *)(Queue + 388) & 0x20) != 0;
  return v3;
}
