/*
 * XREFs of NtUserEndMenu @ 0x1C0119900
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     GetMenuStateWindow @ 0x1C0222600 (GetMenuStateWindow.c)
 */

__int64 NtUserEndMenu()
{
  __int64 v0; // rcx
  __int64 MenuStateWindow; // rax
  __int64 v3; // rdx

  EnterCrit(0LL, 1LL);
  v0 = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 600LL) )
  {
    MenuStateWindow = GetMenuStateWindow(*(_QWORD *)(gptiCurrent + 600LL));
    if ( MenuStateWindow )
      PostMessage(MenuStateWindow, 499LL, 0LL);
    else
      *(_DWORD *)(v3 + 8) &= ~4u;
  }
  UserSessionSwitchLeaveCrit(v0);
  return 1LL;
}
