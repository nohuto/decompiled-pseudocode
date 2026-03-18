/*
 * XREFs of EnableDisableDeviceTreeRegionSpace @ 0x1C0017EA8
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0017EA8 (EnableDisableDeviceTreeRegionSpace.c)
 *     RegisterOperationRegionHandler @ 0x1C009EB20 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00ADD24 (UnRegisterOperationRegionHandler.c)
 * Callees:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0017EA8 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIExtListTestElement @ 0x1C001A4B4 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C001A96C (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001ACB0 (ACPIExtListEnumNext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005A6D0 (EnableDisableDeviceRegionSpace.c)
 *     WPP_RECORDER_SF_sdqD @ 0x1C005AB50 (WPP_RECORDER_SF_sdqD.c)
 */

__int64 __fastcall EnableDisableDeviceTreeRegionSpace(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  unsigned int v4; // edi
  int v7; // r9d
  __int64 i; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // r8d
  _QWORD v13[6]; // [rsp+50h] [rbp-48h] BYREF
  int v14; // [rsp+80h] [rbp-18h]

  v3 = a3;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 320) == 3 )
  {
    if ( (unsigned int)a2 >= 0x1F )
      v7 = 0x80000000;
    else
      v7 = 1 << a2;
    if ( (v7 & *(_DWORD *)(a1 + 620)) != 0 && (int)EnableDisableDeviceRegionSpace(a1, a2, a3) < 0 )
      WPP_RECORDER_SF_sdqD(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)"disable", v12, 14);
    v13[1] = 0LL;
    v13[0] = a1 + 752;
    v13[5] = 768LL;
    v13[2] = &AcpiDeviceTreeLock;
    v14 = 1;
    for ( i = ACPIExtListStartEnum(v13); ; i = ACPIExtListEnumNext(v13) )
    {
      LOBYTE(v9) = 1;
      v10 = i;
      if ( !(unsigned __int8)ACPIExtListTestElement(v13, v9) )
        break;
      LOBYTE(v11) = v3;
      EnableDisableDeviceTreeRegionSpace(v10, v4, v11);
    }
  }
  return 0LL;
}
