/*
 * XREFs of IsWindowGhosted @ 0x1C0071C70
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0034E48 (xxxSetWindowPosAndBand.c)
 *     xxxUpdateInputHangInfo @ 0x1C0048CD0 (xxxUpdateInputHangInfo.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxHandleHealthyThread @ 0x1C00E6A60 (xxxHandleHealthyThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowGhosted(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // cx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(_WORD *)(gpsi + 900LL);
  if ( **(_WORD **)(v3 + 8) != v4
    && (RealGetProp(*(_QWORD *)(a1 + 120), v4, 1LL)
     || RealGetProp(*(_QWORD *)(a1 + 120), *(unsigned __int16 *)(gpsi + 1378LL), 1LL)) )
  {
    return 1;
  }
  return v2;
}
