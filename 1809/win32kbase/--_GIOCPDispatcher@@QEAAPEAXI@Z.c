/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C0091EE4
 * Callers:
 *     IOCPDispatcher_Destroy @ 0x1C0091DF0 (IOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0091E18 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C008ABF0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 */

HANDLE *__fastcall IOCPDispatcher::`scalar deleting destructor'(HANDLE *this)
{
  *this = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(this, 0);
  Win32FreePool((__int64)this);
  return this;
}
