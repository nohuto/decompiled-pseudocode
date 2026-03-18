/*
 * XREFs of ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C0167D3C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021DD60 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDriverCapsSizeFromDdiVersion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (unsigned int)a1;
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
  v5 = WdLogNewEntry5_WdError(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = v3;
  WdLogEvent5_WdError(v5);
  return 0LL;
}
