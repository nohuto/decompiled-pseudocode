/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00A4B50
 * Callers:
 *     IOCPDispatcher_Destroy @ 0x1C00A4A60 (IOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C00A4A88 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C009C320 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 */

IOCPDispatcher *__fastcall IOCPDispatcher::`scalar deleting destructor'(IOCPDispatcher *this)
{
  *(_QWORD *)this = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(this, 0);
  Win32FreePool((__int64)this);
  return this;
}
