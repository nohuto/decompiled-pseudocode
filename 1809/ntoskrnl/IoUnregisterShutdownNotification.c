/*
 * XREFs of IoUnregisterShutdownNotification @ 0x14056F370
 * Callers:
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmUnlockPagableImageSection @ 0x140097E40 (MmUnlockPagableImageSection.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmLockPagableSectionByHandle @ 0x140620240 (MmLockPagableSectionByHandle.c)
 */

void __stdcall IoUnregisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  KIRQL v2; // al
  PVOID *v3; // rbx
  KIRQL v4; // bp
  PVOID *v5; // rsi
  PVOID *i; // rbx
  PVOID *v7; // rsi
  PVOID *v8; // rdx
  PVOID **v9; // rax
  PVOID *v10; // rax
  PVOID **v11; // rdx

  MmLockPagableSectionByHandle(ExPageLockHandle);
  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = (PVOID *)IopNotifyShutdownQueueHead;
  v4 = v2;
  while ( v3 != &IopNotifyShutdownQueueHead )
  {
    v5 = v3;
    if ( v3[2] == DeviceObject )
    {
      v8 = (PVOID *)*v3;
      if ( *((PVOID **)*v3 + 1) != v3 || (v9 = (PVOID **)v3[1], *v9 != v3) )
LABEL_13:
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      v3 = (PVOID *)v3[1];
      ObfDereferenceObject(DeviceObject);
      ExFreePoolWithTag(v5, 0);
    }
    v3 = (PVOID *)*v3;
  }
  for ( i = (PVOID *)IopNotifyLastChanceShutdownQueueHead; i != &IopNotifyLastChanceShutdownQueueHead; i = (PVOID *)*i )
  {
    v7 = i;
    if ( i[2] == DeviceObject )
    {
      v10 = (PVOID *)*i;
      if ( *((PVOID **)*i + 1) != i )
        goto LABEL_13;
      v11 = (PVOID **)i[1];
      if ( *v11 != i )
        goto LABEL_13;
      *v11 = v10;
      v10[1] = v11;
      i = (PVOID *)i[1];
      ObfDereferenceObject(DeviceObject);
      ExFreePoolWithTag(v7, 0);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  MmUnlockPagableImageSection(ExPageLockHandle);
  DeviceObject->Flags &= ~0x800u;
}
