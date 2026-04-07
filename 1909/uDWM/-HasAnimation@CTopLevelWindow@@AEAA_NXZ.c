/*
 * XREFs of ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x18008D458
 * Callers:
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18003B344 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18003B488 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18008DE88 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x18008DEC8 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CTopLevelWindow::HasAnimation(CTopLevelWindow *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 61) || (*((_BYTE *)this + 240) & 0x40) != 0 )
    return 1;
  return result;
}
