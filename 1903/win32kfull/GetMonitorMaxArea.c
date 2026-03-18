/*
 * XREFs of GetMonitorMaxArea @ 0x1C0091014
 * Callers:
 *     CkptUpdate @ 0x1C0090D58 (CkptUpdate.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0093308 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01D31F4 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D3B88 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     _HungWindowFromGhostWindow @ 0x1C00910A8 (_HungWindowFromGhostWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0095B2C (GetMonitorRectForWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 */

_OWORD *__fastcall GetMonitorMaxArea(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int128 *MonitorWorkRectForWindow; // rax
  __int128 v10; // xmm0
  _OWORD *result; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = HungWindowFromGhostWindow(a2);
  v7 = a2;
  if ( v6 )
    v7 = v6;
  v8 = *(_QWORD *)(v7 + 40);
  if ( (*(_BYTE *)(v8 + 30) & 1) != 0 && (*(_BYTE *)(v8 + 16) & 8) != 0 && !*(_WORD *)(gpDispInfo + 160LL) )
    MonitorWorkRectForWindow = (__int128 *)GetMonitorWorkRectForWindow(v12, a3, a2);
  else
    MonitorWorkRectForWindow = (__int128 *)GetMonitorRectForWindow(v12, a3, a2);
  v10 = *MonitorWorkRectForWindow;
  result = a1;
  *a1 = v10;
  return result;
}
