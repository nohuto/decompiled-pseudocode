/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x1C000CAA4
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C000D2B4 (XilCommonBuffer_AcquireBufferEx.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0013B50 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     TR_AcquireDoubleBuffer @ 0x1C0027C9C (TR_AcquireDoubleBuffer.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C003FCC8 (Crashdump_CommonBufferAcquire.c)
 *     XilCoreCommand_AllocateResources @ 0x1C0047350 (XilCoreCommand_AllocateResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0048368 (XilCoreDeviceSlot_AllocateResources.c)
 * Callees:
 *     CommonBuffer_QueueWorkItem @ 0x1C000CD78 (CommonBuffer_QueueWorkItem.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C00476A8 (XilCoreCommonBuffer_AcquireBuffer.c)
 */

__int64 __fastcall CommonBuffer_AcquireBuffer(PVOID Context, int a2, int a3, int a4)
{
  __int64 v5; // rdi
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = XilCoreCommonBuffer_AcquireBuffer((int)Context + 88, a2, a3, a4, (__int64)&v7);
  if ( v7 == 1 )
    CommonBuffer_QueueWorkItem(Context);
  return v5;
}
