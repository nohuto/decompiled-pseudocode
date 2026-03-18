/*
 * XREFs of ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C0124A24
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01246E4 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C012542C (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C0297414 (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllTrackedWorkloads(DXGDEVICE *this)
{
  DXGTRACKEDWORKLOAD **v1; // rbx
  DXGTRACKEDWORKLOAD *v2; // rcx

  v1 = (DXGTRACKEDWORKLOAD **)((char *)this + 424);
  while ( 1 )
  {
    v2 = *v1;
    if ( *v1 == (DXGTRACKEDWORKLOAD *)v1 )
      break;
    if ( v2 )
      DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(v2);
  }
}
