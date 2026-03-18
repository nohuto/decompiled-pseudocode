/*
 * XREFs of IoGetLowerDeviceObjectWithTag @ 0x140139CDC
 * Callers:
 *     IoGetLowerDeviceObject @ 0x140139CC0 (IoGetLowerDeviceObject.c)
 *     IoBuildPoDeviceNotifyList @ 0x14059BEEC (IoBuildPoDeviceNotifyList.c)
 *     IopCheckDeviceFlags @ 0x14059C4EC (IopCheckDeviceFlags.c)
 *     IopSynchronousCall @ 0x140690E2C (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x14087610C (PiControlGetDeviceStack.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 */

void *__fastcall IoGetLowerDeviceObjectWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // di
  void *v7; // rbx
  int v8; // r8d

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD *)(a1 + 312);
  v6 = v4;
  v7 = 0LL;
  v8 = *(_DWORD *)(v5 + 32);
  if ( (v8 & 0xF) == 0 || (v8 & 0xE) == 0 && *(_QWORD *)(v5 + 48) )
  {
    if ( *(_QWORD *)(v5 + 48) )
    {
      v7 = *(void **)(v5 + 48);
      ObfReferenceObjectWithTag(v7, a2);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
  return v7;
}
