/*
 * XREFs of ?GetStoragePropertyPre@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAK@Z @ 0x140169EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStoragePropertyPre@SC_DEVICE@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAK@Z @ 0x14032B890 (-GetStoragePropertyPre@SC_DEVICE@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAK@Z.c)
 */

__int64 __fastcall SC_DISK::GetStoragePropertyPre(SC_DISK *this, enum _STORAGE_PROPERTY_ID a2, unsigned int *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  *a3 = 0;
  switch ( a2 )
  {
    case StorageDeviceWriteCacheProperty:
    case StorageAccessAlignmentProperty:
      *a3 = 28;
      break;
    case StorageDeviceSeekPenaltyProperty:
    case StorageDeviceTrimProperty:
      *a3 = 12;
      break;
    case StorageDeviceLBProvisioningProperty:
      *a3 = 40;
      break;
    case StorageDeviceResiliencyProperty:
      *a3 = 32;
      break;
    case StorageAdapterSerialNumberProperty:
      *a3 = 264;
      break;
    case StorageDeviceLocationProperty:
      *a3 = 36;
      break;
    case StorageDeviceZonedDeviceProperty:
      *a3 = 48;
      break;
    default:
      return (unsigned int)SC_DEVICE::GetStoragePropertyPre(this, a2, a3);
  }
  return v3;
}
