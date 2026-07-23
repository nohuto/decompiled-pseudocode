/*
 * XREFs of PiDmGetCmObjectListFromCache @ 0x140701DE0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D3204 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406D3510 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 * Callees:
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14059A89C (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmGetObjectList @ 0x140701E30 (PiDmGetObjectList.c)
 */

__int64 __fastcall PiDmGetCmObjectListFromCache(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // eax
  int v7; // r9d
  _QWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-18h]

  v9[0] = a2;
  v9[1] = a3;
  v10 = a1;
  v6 = CmMapCmObjectTypeToPnpObjectType(a1);
  return PiDmGetObjectList(v6, (unsigned int)PiDmCmObjectMatchCallback, (unsigned int)v9, v7, a5, a6);
}
