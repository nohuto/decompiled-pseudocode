/*
 * XREFs of ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C0100404
 * Callers:
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0100340 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetRedrawProp(struct tagWND *a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int16 AtomFromAtomTable; // ax

  v3 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 664LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 136);
  if ( v4 )
  {
    AtomFromAtomTable = UserFindAtomFromAtomTable(v4, L"SysSetRedraw");
    RealInternalSetProp((char *)a1 + 120, AtomFromAtomTable, v3, 0LL);
  }
}
