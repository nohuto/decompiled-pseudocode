/*
 * XREFs of ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024E424
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00E6D30 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01D4420 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C024D5E0 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C024E780 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceRemoval(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2)
{
  __int64 result; // rax
  int v5; // edx
  unsigned int v6; // [rsp+38h] [rbp-19h] BYREF
  struct InteractiveControlDevice *v7; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  const char *v9; // [rsp+68h] [rbp+17h]
  int v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+74h] [rbp+23h]
  struct InteractiveControlDevice **v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  __int64 v15; // [rsp+88h] [rbp+37h]
  _DWORD v16[2]; // [rsp+90h] [rbp+3Fh] BYREF

  v7 = 0LL;
  if ( dword_1C031F308 > 4u )
  {
    v11 = 0;
    v14 = 0;
    v16[1] = 0;
    v9 = "InteractiveControlManager::OnDeviceRemoval entry";
    v12 = (struct InteractiveControlDevice **)v16;
    v15 = *((_QWORD *)a2 + 38);
    v16[0] = *((unsigned __int16 *)a2 + 148);
    v10 = 49;
    v13 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E8716, 0LL, 0LL, 5u, &pData);
  }
  result = InteractiveControlManager::FindDevice(this, 0, a2, &v7, 0LL);
  v6 = result;
  if ( (int)result >= 0 )
  {
    result = InteractiveControlManager::RemoveDevice(this, v7);
    v6 = result;
    if ( (int)result >= 0 || dword_1C031F308 <= 2u )
      goto LABEL_10;
    v11 = 0;
    v14 = 0;
    LODWORD(v7) = result;
    v12 = &v7;
    v9 = "Function failed.";
    v10 = 17;
    v13 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E83ED, 0LL, 0LL, 4u, &pData);
  }
  else
  {
    if ( dword_1C031F308 <= 2u )
      goto LABEL_10;
    v11 &= v5;
    v14 &= v5;
    LODWORD(v7) = result;
    v12 = &v7;
    v9 = "Function failed.";
    v10 = 17;
    v13 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E83ED, 0LL, 0LL, 4u, &pData);
  }
  result = v6;
LABEL_10:
  if ( dword_1C031F308 > 4u )
  {
    v11 = 0;
    v14 = 0;
    v9 = "InteractiveControlManager::OnDeviceRemoval exit";
    v12 = (struct InteractiveControlDevice **)&v6;
    v10 = 48;
    v13 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E837A, 0LL, 0LL, 4u, &pData);
    return v6;
  }
  return result;
}
