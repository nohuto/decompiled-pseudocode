/*
 * XREFs of ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D680C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 */

void __fastcall xxxProcessMinimizeHungThreadEvent(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
  {
    SetVisible(a1, 1u);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      xxxMinMaximizeEx(a1, 7u, 1, 0LL, 0LL, 0LL);
  }
}
