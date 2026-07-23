/*
 * XREFs of IoAdjustStackSizeForRedirection @ 0x140282F50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 */

__int64 __fastcall IoAdjustStackSizeForRedirection(PDEVICE_OBJECT DeviceObject, __int64 a2, _BYTE *a3)
{
  int v4; // ebp
  KIRQL v7; // al
  CCHAR StackSize; // di
  KIRQL v9; // r15
  char v10; // bl
  char v11; // bl
  PDEVICE_OBJECT AttachedDevice; // r8

  v4 = 0;
  v7 = KeAcquireQueuedSpinLock(0xAuLL);
  StackSize = DeviceObject->StackSize;
  v9 = v7;
  v10 = *(_BYTE *)(a2 + 76);
  if ( StackSize < v10 )
  {
    v11 = v10 - StackSize;
    AttachedDevice = IoGetAttachedDevice(DeviceObject);
    if ( (unsigned __int16)v11 + (unsigned int)(unsigned __int16)AttachedDevice->StackSize < 0x7D )
    {
      if ( AttachedDevice != DeviceObject )
      {
        do
        {
          AttachedDevice->StackSize += v11;
          AttachedDevice = AttachedDevice->DeviceObjectExtension->AttachedTo;
        }
        while ( AttachedDevice != DeviceObject );
        StackSize = DeviceObject->StackSize;
      }
      DeviceObject->StackSize = v11 + StackSize;
    }
    else
    {
      v4 = -1073741811;
    }
  }
  else
  {
    v11 = 0;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v9);
  if ( v4 >= 0 && a3 )
    *a3 = v11;
  return (unsigned int)v4;
}
