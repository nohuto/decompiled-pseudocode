/*
 * XREFs of IopInsertLegacyBusDeviceNode @ 0x14075948C
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSemaphore @ 0x1400C5E00 (KeReleaseSemaphore.c)
 */

void __fastcall IopInsertLegacyBusDeviceNode(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  _QWORD *v8; // rcx
  _QWORD *i; // rdx
  unsigned int v10; // eax

  if ( a2 <= 0x11 && a2 != 15 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
    v7 = 1;
    if ( a2 != 2 )
      v7 = a2;
    v8 = (_QWORD *)((char *)&IopLegacyBusInformationTable + 16 * v7);
    for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
    {
      v10 = *((_DWORD *)i - 43);
      if ( v10 == a3 )
        goto LABEL_11;
      if ( v10 > a3 )
        break;
    }
    *(_QWORD *)(a1 + 632) = i[1];
    *(_QWORD *)(a1 + 624) = i;
    *(_QWORD *)i[1] = a1 + 624;
    i[1] = a1 + 624;
LABEL_11:
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
