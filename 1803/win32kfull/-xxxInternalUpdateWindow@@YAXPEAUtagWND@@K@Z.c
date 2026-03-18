/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00383F0
 * Callers:
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     xxxUpdateWindow @ 0x1C0038670 (xxxUpdateWindow.c)
 *     xxxPrintWindow @ 0x1C01B1C10 (xxxPrintWindow.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BC110 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C01C83A4 (xxxUpdateThreadsWindows.c)
 *     xxxbFullscreenSwitch @ 0x1C01D27FC (xxxbFullscreenSwitch.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxDragObject @ 0x1C0206058 (xxxDragObject.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0038440 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 */

void __fastcall xxxInternalUpdateWindow(struct tagWND *a1, unsigned int a2)
{
  _QWORD *i; // r8
  __int64 v3; // rax

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x20) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 8); i; i = (_QWORD *)i[8] )
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
