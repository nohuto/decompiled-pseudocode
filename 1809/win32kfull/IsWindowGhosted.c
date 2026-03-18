/*
 * XREFs of IsWindowGhosted @ 0x1C001C75C
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxUpdateInputHangInfo @ 0x1C00341E0 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C0071DE8 (xxxSetWindowPosAndBand.c)
 *     xxxHandleHealthyThread @ 0x1C01E3B40 (xxxHandleHealthyThread.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 */

__int64 __fastcall IsWindowGhosted(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // cx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(_WORD *)(gpsi + 900LL);
  if ( **(_WORD **)(v3 + 8) != v4 && (GetProp(a1, v4, 1LL) || GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)) )
    return 1;
  return v2;
}
