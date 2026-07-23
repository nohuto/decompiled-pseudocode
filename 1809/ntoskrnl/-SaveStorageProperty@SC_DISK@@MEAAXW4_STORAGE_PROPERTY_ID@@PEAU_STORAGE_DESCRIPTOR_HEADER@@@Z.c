/*
 * XREFs of ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14016A1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14032B8F0 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C3B20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

void __fastcall SC_DISK::SaveStorageProperty(
        SC_DISK *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  __int64 v5; // rbx
  void *v6; // rcx

  switch ( a2 )
  {
    case StorageDeviceWriteCacheProperty:
      v5 = 280LL;
      break;
    case StorageAccessAlignmentProperty:
      v5 = 264LL;
      break;
    case StorageDeviceSeekPenaltyProperty:
      v5 = 312LL;
      break;
    case StorageDeviceTrimProperty:
      v5 = 328LL;
      break;
    case StorageDeviceLBProvisioningProperty:
      v5 = 320LL;
      break;
    case StorageDeviceResiliencyProperty:
      v5 = 304LL;
      break;
    case StorageAdapterSerialNumberProperty:
      v5 = 272LL;
      break;
    case StorageDeviceLocationProperty:
      v5 = 296LL;
      break;
    case StorageDeviceZonedDeviceProperty:
      v5 = 336LL;
      break;
    default:
      SC_DEVICE::SaveStorageProperty(this, a2, a3);
      return;
  }
  v6 = *(void **)((char *)this + v5);
  if ( v6 )
    SC_ENV::Free(v6);
  *(_QWORD *)((char *)this + v5) = a3;
}
