/*
 * XREFs of ?MoveToMonitor@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800FE280
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1800FE880 (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall CFallbackWindow::MoveToMonitor(CFallbackWindow *this, struct IImmersiveMonitor *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a2);
  CFallbackWindow::_SizeWindow((CFallbackWindow *)((char *)this - 72), a2);
  return 0LL;
}
