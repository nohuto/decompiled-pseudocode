/*
 * XREFs of ?IsHardwareContext@DXGCONTEXT@@QEBA_NXZ @ 0x1C0012E40
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAD90 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGCONTEXT::IsHardwareContext(DXGCONTEXT *this)
{
  return (*((_DWORD *)this + 99) & 0x10) != 0;
}
