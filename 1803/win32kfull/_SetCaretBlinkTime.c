/*
 * XREFs of _SetCaretBlinkTime @ 0x1C006A750
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C006470C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00648A4 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C006A910 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL, v2, v3) )
    return 0LL;
  *(_DWORD *)(gpsi + 4984LL) = a1;
  v5 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v5 + 344) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v5 + 296), *(struct tagQ **)(gptiCurrent + 424LL));
    CreateCaretTimer(*(struct tagWND **)(v5 + 296), (struct tagQ *)v5);
  }
  return 1LL;
}
