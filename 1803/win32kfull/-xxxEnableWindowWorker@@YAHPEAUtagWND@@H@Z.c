/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C005F53C
 * Callers:
 *     xxxEnableWindow @ 0x1C005F4F0 (xxxEnableWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C01BF6EC (xxxDisableImmersiveOwner.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSetFocus @ 0x1C005E8B0 (xxxSetFocus.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z @ 0x1C005F668 (-UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     SetWFNoDwmNotify @ 0x1C01A4F68 (SetWFNoDwmNotify.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, int a2)
{
  unsigned int v2; // ebx
  char v5; // r14
  int v6; // ebp
  __int64 v8; // r8

  v2 = 0;
  v5 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8;
  v6 = v5 == 0;
  if ( v6 != a2 )
    UpdateProcessPriorityWhenEnableStateIsChanging(a1, a2);
  if ( a2 )
  {
    SetOrClrWF(0LL, a1, 3848LL, 0LL);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) &= ~1u;
  }
  else
  {
    xxxSendMessage((ULONG_PTR)a1);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) )
      xxxSetFocus(0LL, 0LL, v8);
    SetWFNoDwmNotify(a1, 3848LL);
  }
  if ( v6 != a2 )
  {
    xxxWindowEvent(0x800Au, (__int64)a1, 0, 0, 0);
    xxxSendMessage((ULONG_PTR)a1);
  }
  LOBYTE(v2) = v5 != 0;
  return v2;
}
