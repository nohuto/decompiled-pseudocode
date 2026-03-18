/*
 * XREFs of ?VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F0F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00F472C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusNotifyProcessFreeze(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGFASTMUTEX **Current; // rbx
  __int64 v2; // rdx
  const GUID *v3; // r8
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  Current = (struct DXGFASTMUTEX **)DXGPROCESS::GetCurrent();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, Current[14], 0);
  DXGPROCESS::NotifyProcessFreeze((DXGPROCESS *)Current, v2, v3);
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  return 0;
}
