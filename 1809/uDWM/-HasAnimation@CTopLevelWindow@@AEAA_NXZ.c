/*
 * XREFs of ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x18008769C
 * Callers:
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180039D18 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180039D38 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18008804C (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180088088 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CTopLevelWindow::HasAnimation(CTopLevelWindow *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 61) || *((char *)this + 240) < 0 )
    return 1;
  return result;
}
