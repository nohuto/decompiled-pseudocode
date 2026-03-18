/*
 * XREFs of EdgyUnregisterListener @ 0x1C01BF244
 * Callers:
 *     NtUserRegisterEdgy @ 0x1C01F3D60 (NtUserRegisterEdgy.c)
 * Callees:
 *     ?_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1C01BE2A4 (-_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z.c)
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1C01BEFF0 (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 */

__int64 __fastcall EdgyUnregisterListener(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v4; // rcx
  struct tagEDGY_DATA *Listener; // rax
  Edgy *v6; // rcx
  struct tagEDGY_LISTENER *v7; // r8

  v1 = 0;
  if ( !a1 )
    return 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 240LL);
  if ( v4 )
  {
    Listener = (struct tagEDGY_DATA *)Edgy::_FindListener(v4, *(_QWORD *)a1, *(_DWORD *)(a1 + 16));
    if ( Listener )
    {
      Edgy::_RemoveListenerCore(v6, Listener, v7);
      return 1;
    }
  }
  return v1;
}
