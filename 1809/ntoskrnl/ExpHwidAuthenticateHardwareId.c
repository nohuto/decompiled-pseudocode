/*
 * XREFs of ExpHwidAuthenticateHardwareId @ 0x140587410
 * Callers:
 *     ExpHwidProcessInterface @ 0x140586E18 (ExpHwidProcessInterface.c)
 *     sub_140586FE0 @ 0x140586FE0 (sub_140586FE0.c)
 * Callees:
 *     ExpHwidGetDevicePropertyDataFixed @ 0x140587700 (ExpHwidGetDevicePropertyDataFixed.c)
 *     ExpHwidGetDevicePropertyData @ 0x140587784 (ExpHwidGetDevicePropertyData.c)
 *     sub_140587B80 @ 0x140587B80 (sub_140587B80.c)
 */

__int64 __fastcall ExpHwidAuthenticateHardwareId(PDEVICE_OBJECT Pdo, __int64 a2)
{
  char v4; // bl
  bool v5; // bp
  bool v6; // dl
  char v7; // di
  char v8; // cl
  int DevicePropertyData; // eax
  int v10; // eax
  __int64 result; // rax
  char v12; // [rsp+78h] [rbp+10h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  if ( (int)ExpHwidGetDevicePropertyDataFixed(Pdo, 0LL, &DEVPKEY_Device_IsPresent, 17LL, 1, &v12) < 0 )
  {
    v4 = 4;
    v5 = 0;
  }
  else
  {
    v5 = v12 == -1;
  }
  if ( (int)ExpHwidGetDevicePropertyData(Pdo, (int)a2 + 40) < 0 )
  {
    v4 |= 8u;
    v6 = 1;
  }
  else
  {
    v6 = *(_WORD *)(a2 + 40) == 8 && **(_QWORD **)(a2 + 48) == *(_QWORD *)L"SWD";
  }
  v7 = (2 * v5) | 4;
  if ( !v6 )
    v7 = 2 * v5;
  v8 = v7;
  if ( !v4 && v5 && !v6 && *(_DWORD *)(a2 + 36) >= 2u )
  {
    DevicePropertyData = ExpHwidGetDevicePropertyData(Pdo, (int)a2 + 72);
    if ( DevicePropertyData == -1073741772 )
      DevicePropertyData = 0;
    v4 = DevicePropertyData >= 0 ? 0 : 2;
    if ( (int)ExpHwidGetDevicePropertyDataFixed(Pdo, 0LL, &DEVPKEY_Device_ReportedDeviceIdsHash, 7LL, 4, &v14) < 0 )
    {
      v4 |= 1u;
      v8 = v7;
    }
    else
    {
      v13 = 0;
      v10 = sub_140587B80(&v13, a2 + 56);
      if ( v10 >= 0 )
        v10 = sub_140587B80(&v13, a2 + 72);
      v8 = v7;
      if ( v10 >= 0 && v13 == v14 )
        v8 = v7 | 1;
    }
  }
  *(_BYTE *)(a2 + 33) |= v4;
  result = 0LL;
  *(_BYTE *)(a2 + 32) = v8;
  return result;
}
