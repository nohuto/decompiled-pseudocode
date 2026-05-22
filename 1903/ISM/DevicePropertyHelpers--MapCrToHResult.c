/*
 * XREFs of DevicePropertyHelpers::MapCrToHResult @ 0x18009D94C
 * Callers:
 *     ?GetDriverProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z @ 0x18009CCE0 (-GetDriverProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z.c)
 *     ?GetInterfaceProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z @ 0x18009D038 (-GetInterfaceProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEA.c)
 *     ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x18009D384 (-Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DevicePropertyHelpers::MapCrToHResult(CONFIGRET a1)
{
  unsigned int v1; // ebx
  signed int v2; // eax

  v1 = 0;
  if ( a1 )
  {
    v2 = CM_MapCrToWin32Err(a1, 0x507u);
    if ( v2 > 0 )
      return (unsigned __int16)v2 | 0x80070000;
    else
      return (unsigned int)v2;
  }
  return v1;
}
