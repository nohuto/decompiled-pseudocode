/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00D8C48
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00D86B8 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
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
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) == a1 || !xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  v3 = *(_QWORD *)(v2 + 120);
  if ( v3 )
  {
    SetOrClrWF(1, v3, 0x101u, 1);
    v2 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v4 = *(_QWORD *)(v2 + 128);
  if ( v4 )
    SetOrClrWF(1, v4, 0x101u, 1);
  return 1LL;
}
