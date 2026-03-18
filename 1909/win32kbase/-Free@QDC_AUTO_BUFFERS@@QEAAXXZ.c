/*
 * XREFs of ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C009E374
 * Callers:
 *     DrvIsExternalMonitorActive @ 0x1C00051F0 (DrvIsExternalMonitorActive.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C009E108 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C009E2C0 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void __fastcall QDC_AUTO_BUFFERS::Free(QDC_AUTO_BUFFERS *this)
{
  QDC_AUTO_BUFFERS *v2; // rcx

  v2 = (QDC_AUTO_BUFFERS *)*((_QWORD *)this + 51);
  if ( v2 )
  {
    if ( v2 != this )
    {
      Win32FreePool((__int64)v2);
      *((_QWORD *)this + 51) = 0LL;
    }
  }
}
