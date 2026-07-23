/*
 * XREFs of sub_140918A0C @ 0x140918A0C
 * Callers:
 *     ExpHwidProcessInterface @ 0x140626354 (ExpHwidProcessInterface.c)
 * Callees:
 *     ExpHwidGetDevicePropertyData @ 0x140626D68 (ExpHwidGetDevicePropertyData.c)
 *     sub_14062720C @ 0x14062720C (sub_14062720C.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140943DB0 (PnpGetDeviceInstancePropertyData.c)
 */

__int64 __fastcall sub_140918A0C(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  int v4; // edx
  int DevicePropertyData; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rcx
  char v9; // al
  int v11; // [rsp+20h] [rbp-28h]
  char v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  sub_14062720C(a2, a2);
  DevicePropertyData = ExpHwidGetDevicePropertyData(0LL, v3, &DEVPKEY_Device_InstanceId, 18, a2);
  if ( DevicePropertyData >= 0 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v13 = 0;
    v14 = 0;
    DevicePropertyData = PnpGetDeviceInstancePropertyData(
                           v8,
                           v4,
                           v6,
                           v7,
                           v11,
                           (__int64)&v12,
                           (__int64)&v13,
                           (__int64)&v14);
    if ( DevicePropertyData < 0 || (v9 = 1, v13 != 1) || v14 != 17 || v12 != -1 )
      v9 = 3;
    *(_BYTE *)(a2 + 34) = v9;
    *(_DWORD *)(a2 + 36) = 0;
    *(_WORD *)(a2 + 32) = 4096;
  }
  return (unsigned int)DevicePropertyData;
}
