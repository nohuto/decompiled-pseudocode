/*
 * XREFs of ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C0016E5C
 * Callers:
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0016B88 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     UserGetGlobalAtomTableOfWindow @ 0x1C0016E34 (UserGetGlobalAtomTableOfWindow.c)
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 */

void __fastcall SetRedrawProp(struct tagWND *a1, int a2)
{
  __int64 v2; // rdi
  __int64 GlobalAtomTableOfWindow; // rax
  unsigned __int16 AtomFromAtomTable; // ax

  v2 = a2;
  GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow((__int64)a1);
  if ( GlobalAtomTableOfWindow )
  {
    AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"SysSetRedraw");
    InternalSetProp(a1, AtomFromAtomTable, v2, 0LL);
  }
}
