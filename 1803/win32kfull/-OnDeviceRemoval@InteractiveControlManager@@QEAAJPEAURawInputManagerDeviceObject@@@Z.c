/*
 * XREFs of ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020CB20
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0056BB0 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C019F620 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C020BD70 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C020CE40 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceRemoval(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        const GUID *a3,
        const GUID *a4)
{
  __int64 result; // rax
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // [rsp+30h] [rbp-29h] BYREF
  struct InteractiveControlDevice *v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  struct InteractiveControlDevice **v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  __int64 v16; // [rsp+80h] [rbp+27h]
  _DWORD v17[2]; // [rsp+88h] [rbp+2Fh] BYREF

  v9 = 0;
  v10 = 0LL;
  if ( dword_1C031C7D0 > 4u )
  {
    v13 = 49LL;
    v12 = "InteractiveControlManager::OnDeviceRemoval entry";
    v14 = (struct InteractiveControlDevice **)v17;
    v16 = *((_QWORD *)a2 + 37);
    v17[0] = *((unsigned __int16 *)a2 + 144);
    v15 = 2LL;
    v17[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3A74, a3, a4, 5u, &pData);
  }
  result = InteractiveControlManager::FindDevice(this, 0, a2, &v10, 0LL);
  v9 = result;
  if ( (int)result >= 0 )
  {
    result = InteractiveControlManager::RemoveDevice(this, v10);
    v9 = result;
    if ( (int)result >= 0 || dword_1C031C7D0 <= 2u )
      goto LABEL_9;
  }
  else if ( dword_1C031C7D0 <= 2u )
  {
    goto LABEL_9;
  }
  LODWORD(v10) = result;
  v12 = "Function failed.";
  v14 = &v10;
  v13 = 17LL;
  v15 = 4LL;
  TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v7, v8, 4u, &pData);
  result = v9;
LABEL_9:
  if ( dword_1C031C7D0 > 4u )
  {
    v13 = 48LL;
    v12 = "InteractiveControlManager::OnDeviceRemoval exit";
    v14 = (struct InteractiveControlDevice **)&v9;
    v15 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, v7, v8, 4u, &pData);
    return v9;
  }
  return result;
}
