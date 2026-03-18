/*
 * XREFs of ??1DXGADAPTERREFERENCE@@QEAA@XZ @ 0x1C001A340
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     NtDxgkGetProcessList @ 0x1C01D7CC0 (NtDxgkGetProcessList.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(DXGADAPTER **this)
{
  DXGADAPTER *v1; // rcx

  v1 = *this;
  if ( v1 )
    DXGADAPTER::ReleaseReference(v1);
}
