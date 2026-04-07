/*
 * XREFs of ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x18008D7B8
 * Callers:
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18003BB34 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18003BC78 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18008E1E8 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x18008E228 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
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
