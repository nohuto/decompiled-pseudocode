/*
 * XREFs of _SetCaretBlinkTime @ 0x1C00887F0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C00889B0 (CheckWinstaAttributeAccess.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00EA244 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00EA3E4 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v2; // r8
  __int64 v4; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL, v2) )
    return 0LL;
  *(_DWORD *)(gpsi + 4984LL) = a1;
  v4 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v4 + 352) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v4 + 304), *(struct tagQ **)(gptiCurrent + 424LL));
    CreateCaretTimer(*(struct tagWND **)(v4 + 304), (struct tagQ *)v4);
  }
  return 1LL;
}
