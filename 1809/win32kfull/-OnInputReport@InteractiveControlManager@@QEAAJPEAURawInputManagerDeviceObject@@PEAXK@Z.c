/*
 * XREFs of ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C0236124
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01C0510 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C02350DC (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023B658 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnInputReport(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  int v6; // edx
  int Device; // ebx
  struct InteractiveControlDevice *v9[2]; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  struct InteractiveControlDevice **v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]

  v9[0] = 0LL;
  Device = InteractiveControlManager::FindDevice(this, 0, a2, v9, 0LL);
  if ( Device >= 0 )
  {
    Device = InteractiveControlDevice::QueueAndGenerateInput(v9[0], a3, a4);
    if ( Device < 0 && dword_1C030C400 > 2u )
    {
      v13 = 0;
      v16 = 0;
      v11 = "Function failed.";
      v14 = v9;
      v15 = 4;
      v12 = 17;
      LODWORD(v9[0]) = Device;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &pData);
    }
  }
  else if ( dword_1C030C400 > 2u )
  {
    v13 &= v6;
    v16 &= v6;
    v11 = "Function failed.";
    v14 = v9;
    v15 = v6 + 4;
    v12 = 17;
    LODWORD(v9[0]) = Device;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, v6 + 4, &pData);
  }
  return (unsigned int)Device;
}
