/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00CECE8
 * Callers:
 *     xxxEnableWindow @ 0x1C00CEC80 (xxxEnableWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C01E2174 (xxxDisableImmersiveOwner.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z @ 0x1C00CEE18 (-UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z.c)
 *     SetWFNoDwmNotify @ 0x1C01C70F8 (SetWFNoDwmNotify.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, int a2)
{
  unsigned int v2; // ebx
  char v5; // r14
  int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = 0;
  v5 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8;
  v6 = v5 == 0;
  if ( v6 != a2 )
    UpdateProcessPriorityWhenEnableStateIsChanging(a1, a2);
  if ( a2 )
  {
    SetOrClrWF(0, (__int64)a1, 0xF08u, 0);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) &= ~1u;
  }
  else
  {
    xxxSendMessage((ULONG_PTR)a1);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
      xxxSetFocus(0LL, v8, v9, v10);
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
