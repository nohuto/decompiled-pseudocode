/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C006B6AC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
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
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) == a1 || !(unsigned int)xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  v3 = *(_QWORD *)(v2 + 120);
  if ( v3 )
  {
    SetOrClrWF(1LL, v3, 257LL, 1LL);
    v2 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  v4 = *(_QWORD *)(v2 + 128);
  if ( v4 )
    SetOrClrWF(1LL, v4, 257LL, 1LL);
  return 1LL;
}
