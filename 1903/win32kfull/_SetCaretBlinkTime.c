/*
 * XREFs of _SetCaretBlinkTime @ 0x1C0088F80
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0089140 (CheckWinstaAttributeAccess.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C008C6A0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C008C6E4 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v3; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  *(_DWORD *)(gpsi + 4984LL) = a1;
  v3 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v3 + 352) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v3 + 304), *(struct tagQ **)(gptiCurrent + 424LL));
    CreateCaretTimer(*(struct tagWND **)(v3 + 304), (struct tagQ *)v3);
  }
  return 1LL;
}
