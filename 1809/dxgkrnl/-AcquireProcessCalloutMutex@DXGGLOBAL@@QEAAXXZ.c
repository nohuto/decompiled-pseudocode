/*
 * XREFs of ?AcquireProcessCalloutMutex@DXGGLOBAL@@QEAAXXZ @ 0x1C00362B4
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ED780 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::AcquireProcessCalloutMutex(DXGGLOBAL *this)
{
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 208));
}
