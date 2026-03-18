/*
 * XREFs of ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0235F20
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0102C50 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01C0810 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C02350DC (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C0236264 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceRemoval(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp-29h] BYREF
  struct InteractiveControlDevice *v6; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  struct InteractiveControlDevice **v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  __int64 v12; // [rsp+80h] [rbp+27h]
  _DWORD v13[2]; // [rsp+88h] [rbp+2Fh] BYREF

  v5 = 0;
  v6 = 0LL;
  if ( dword_1C030C400 > 4u )
  {
    v9 = 49LL;
    v8 = "InteractiveControlManager::OnDeviceRemoval entry";
    v10 = (struct InteractiveControlDevice **)v13;
    v12 = *((_QWORD *)a2 + 38);
    v13[0] = *((unsigned __int16 *)a2 + 148);
    v11 = 2LL;
    v13[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D647B, 0LL, 0LL, 5u, &pData);
  }
  result = InteractiveControlManager::FindDevice(this, 0, a2, &v6, 0LL);
  v5 = result;
  if ( (int)result >= 0 )
  {
    result = InteractiveControlManager::RemoveDevice(this, v6);
    v5 = result;
    if ( (int)result >= 0 || dword_1C030C400 <= 2u )
      goto LABEL_9;
  }
  else if ( dword_1C030C400 <= 2u )
  {
    goto LABEL_9;
  }
  LODWORD(v6) = result;
  v8 = "Function failed.";
  v10 = &v6;
  v9 = 17LL;
  v11 = 4LL;
  TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &pData);
  result = v5;
LABEL_9:
  if ( dword_1C030C400 > 4u )
  {
    v9 = 48LL;
    v8 = "InteractiveControlManager::OnDeviceRemoval exit";
    v10 = (struct InteractiveControlDevice **)&v5;
    v11 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D60DF, 0LL, 0LL, 4u, &pData);
    return v5;
  }
  return result;
}
