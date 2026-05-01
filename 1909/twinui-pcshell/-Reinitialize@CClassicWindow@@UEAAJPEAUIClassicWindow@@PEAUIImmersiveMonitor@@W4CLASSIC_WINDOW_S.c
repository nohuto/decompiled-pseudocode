/*
 * XREFs of ?Reinitialize@CClassicWindow@@UEAAJPEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@@Z @ 0x1801496F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall CClassicWindow::Reinitialize(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 64), a2);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)(a1 + 24), a3);
  result = 0LL;
  *(_DWORD *)(a1 + 72) = a4;
  return result;
}
