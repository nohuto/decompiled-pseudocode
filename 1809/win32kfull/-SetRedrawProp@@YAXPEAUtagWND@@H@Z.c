/*
 * XREFs of ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C00B6650
 * Callers:
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00B689C (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C00B6874 (UserGetGlobalAtomTableOfWindow.c)
 */

void __fastcall SetRedrawProp(struct tagWND *a1, int a2)
{
  __int64 v2; // rdi
  __int64 GlobalAtomTableOfWindow; // rax
  unsigned __int16 AtomFromAtomTable; // ax

  v2 = a2;
  GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow();
  if ( GlobalAtomTableOfWindow )
  {
    AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"SysSetRedraw");
    InternalSetProp((__int64)a1, AtomFromAtomTable, v2, 0);
  }
}
