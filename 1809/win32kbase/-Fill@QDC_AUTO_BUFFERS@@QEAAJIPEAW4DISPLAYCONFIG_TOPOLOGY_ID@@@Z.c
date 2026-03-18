/*
 * XREFs of ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0049E78
 * Callers:
 *     DrvIsExternalMonitorActive @ 0x1C00046EC (DrvIsExternalMonitorActive.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C00498F8 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0049F04 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 */

__int64 __fastcall QDC_AUTO_BUFFERS::Fill(QDC_AUTO_BUFFERS *this, unsigned int a2, enum DISPLAYCONFIG_TOPOLOGY_ID *a3)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned int v8; // ecx

  v6 = 0;
  do
  {
    result = QDC_AUTO_BUFFERS::TryFillOnce(this, a2, a3);
    if ( (_DWORD)result != -1073741789 && (_DWORD)result != -2147483643 )
      break;
    v8 = v6++;
  }
  while ( v8 < 0xA );
  return result;
}
