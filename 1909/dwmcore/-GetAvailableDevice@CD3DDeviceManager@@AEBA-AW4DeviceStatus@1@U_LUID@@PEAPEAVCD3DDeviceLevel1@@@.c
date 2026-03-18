/*
 * XREFs of ?GetAvailableDevice@CD3DDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180057724
 * Callers:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800550C8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::GetAvailableDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  unsigned int v5; // r11d
  __int64 v6; // r10
  __int64 v7; // rcx

  v3 = 0;
  *a3 = 0LL;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 208);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 128);
    while ( a2 != *(_QWORD *)(v6 + 24LL * v4 + 8) )
    {
      if ( ++v4 >= v5 )
        return v3;
    }
    v7 = *(_QWORD *)(v6 + 24LL * v4);
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 504));
    if ( *(int *)(v7 + 880) < 0 )
    {
      v3 = 2;
      CMILPoolResource::Release((CMILPoolResource *)(v7 + 496));
    }
    else
    {
      *a3 = v7;
      return 1;
    }
  }
  return v3;
}
