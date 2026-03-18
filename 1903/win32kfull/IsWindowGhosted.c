/*
 * XREFs of IsWindowGhosted @ 0x1C00959E0
 * Callers:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxUpdateInputHangInfo @ 0x1C009DEC0 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C00CB2A0 (xxxSetWindowPosAndBand.c)
 *     xxxHandleHealthyThread @ 0x1C0150440 (xxxHandleHealthyThread.c)
 * Callees:
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

__int64 __fastcall IsWindowGhosted(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // cx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 136);
  v4 = *(_WORD *)(gpsi + 900LL);
  if ( **(_WORD **)(v3 + 8) != v4 && (GetProp(a1, v4, 1LL) || GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)) )
    return 1;
  return v2;
}
