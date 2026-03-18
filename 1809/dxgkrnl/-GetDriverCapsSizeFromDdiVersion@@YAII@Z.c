/*
 * XREFs of ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C014EA24
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EE390 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDriverCapsSizeFromDdiVersion(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = (unsigned int)a1;
  if ( (unsigned int)a1 >= 0x9002 )
    return 584LL;
  if ( (unsigned int)a1 >= 0x5011 )
    return 576LL;
  if ( (unsigned int)a1 >= 0x4000 )
    return 552LL;
  if ( (unsigned int)a1 >= 0x3000 )
    return 544LL;
  if ( (unsigned int)a1 >= 0x2001 )
    return 528LL;
  if ( (unsigned int)a1 < 0x2000 && (unsigned int)a1 >= 0x104E )
    return 336LL;
  v3 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v3 + 24) = v1;
  WdLogEvent5_WdError(v3);
  return 0LL;
}
