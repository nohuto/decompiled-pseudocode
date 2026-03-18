/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009A3E0
 * Callers:
 *     xxxUpdateWindow @ 0x1C009A3C0 (xxxUpdateWindow.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     xxxPrintWindow @ 0x1C01E996C (xxxPrintWindow.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4BD0 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C0202528 (xxxUpdateThreadsWindows.c)
 *     xxxbFullscreenSwitch @ 0x1C020D4C8 (xxxbFullscreenSwitch.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxDragObject @ 0x1C0247A14 (xxxDragObject.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009A430 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 */

void __fastcall xxxInternalUpdateWindow(struct tagWND *a1, unsigned int a2)
{
  _QWORD *i; // r8
  __int64 v3; // rax

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x20) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 11); i; i = (_QWORD *)i[11] )
    {
      if ( i[2] == *((_QWORD *)a1 + 2) )
      {
        v3 = i[5];
        if ( *(_QWORD *)(v3 + 136) || (*(_BYTE *)(v3 + 17) & 0x10) != 0 )
          return;
      }
    }
  }
  xxxUpdateWindow2(a1, a2);
}
