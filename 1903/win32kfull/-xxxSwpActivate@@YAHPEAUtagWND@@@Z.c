/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C01183FC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01184B0 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  if ( !a1 )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    xxxSendMessage((ULONG_PTR)a1);
    return 0LL;
  }
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) == a1 || !xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  v3 = *(_QWORD *)(v2 + 128);
  if ( v3 )
  {
    SetOrClrWF(1, v3, 0x101u, 1);
    v2 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  v4 = *(_QWORD *)(v2 + 136);
  if ( v4 )
    SetOrClrWF(1, v4, 0x101u, 1);
  return 1LL;
}
