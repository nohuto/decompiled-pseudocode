/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C012FB18
 * Callers:
 *     xxxEnableWindow @ 0x1C012FAB0 (xxxEnableWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C01F81E4 (xxxDisableImmersiveOwner.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C012FC38 (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01326E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  char v6; // r14
  int v7; // ebp

  v3 = 0;
  v6 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8;
  if ( (v6 == 0) == a2 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    PriorityBoostCUI::UpdateProcessPriorityWhenEnableStateIsChanging(a1, (struct tagWND *)a2, a3);
  }
  if ( a2 )
  {
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) &= ~8u;
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) &= ~1u;
  }
  else
  {
    xxxSendMessage((ULONG_PTR)a1);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) )
      xxxSetFocus(0LL);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) |= 8u;
  }
  if ( v7 )
  {
    xxxWindowEvent(0x800Au, a1, 0LL, 0, 0);
    xxxSendMessage((ULONG_PTR)a1);
  }
  LOBYTE(v3) = v6 != 0;
  return v3;
}
