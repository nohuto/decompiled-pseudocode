/*
 * XREFs of ?VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221220
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00EE12C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusNotifyProcessFreeze(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2)
{
  struct DXGFASTMUTEX **Current; // rbx
  __int64 v3; // rdx
  const GUID *v4; // r8
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  Current = (struct DXGFASTMUTEX **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, Current[13], 0);
  DXGPROCESS::NotifyProcessFreeze((DXGPROCESS *)Current, v3, v4);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return 0;
}
