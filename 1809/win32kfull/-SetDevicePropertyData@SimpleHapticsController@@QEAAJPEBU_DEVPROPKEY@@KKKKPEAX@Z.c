/*
 * XREFs of ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1C023F5F0
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023AF18 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SimpleHapticsController::SetDevicePropertyData(
        SimpleHapticsController *this,
        const struct _DEVPROPKEY *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        PVOID Data)
{
  __int64 v8; // rcx
  NTSTATUS result; // eax
  int v10; // [rsp+48h] [rbp-21h] BYREF
  NTSTATUS v11; // [rsp+4Ch] [rbp-1Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-11h] BYREF
  const char *v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+84h] [rbp+1Bh]
  int *v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+94h] [rbp+2Bh]

  v10 = 0;
  if ( (unsigned int)dword_1C030C3C8 > 4 )
  {
    v15 = 0;
    v18 = 0;
    v13 = "SimpleHapticsController::SendDeviceIOControl entry";
    v16 = &v10;
    v14 = 51;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6BAB, 0LL, 0LL, 4u, &pData);
  }
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
  {
    result = IoSetDevicePropertyData(
               *(PDEVICE_OBJECT *)(v8 + 8),
               &DEVPKEY_InteractiveControl_DeviceType,
               0,
               0,
               7u,
               4u,
               Data);
    v10 = result;
    if ( result < 0 )
    {
      if ( (unsigned int)dword_1C030C3C8 > 2 )
      {
        v15 = 0;
        v18 = 0;
        v11 = result;
        v16 = &v11;
        v13 = "Function failed.";
        v14 = 17;
        v17 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
        result = v10;
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::SetDevicePropertyData",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        467,
        result,
        "Function failed.");
      result = v10;
    }
  }
  else
  {
    result = -1073741436;
    v10 = -1073741436;
  }
  if ( (unsigned int)dword_1C030C3C8 > 4 )
  {
    v15 = 0;
    v18 = 0;
    v13 = "SimpleHapticsController::SendDeviceIOControl exit";
    v16 = &v10;
    v14 = 50;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6BAB, 0LL, 0LL, 4u, &pData);
    return v10;
  }
  return result;
}
