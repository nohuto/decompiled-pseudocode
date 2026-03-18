/*
 * XREFs of ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C020CD0C
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C019F360 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C020BD70 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0211EB8 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnInputReport(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  int v6; // edx
  int Device; // ebx
  const GUID *v8; // r8
  const GUID *v9; // r9
  const GUID *v10; // r8
  const GUID *v11; // r9
  struct InteractiveControlDevice *v13[2]; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  struct InteractiveControlDevice **v18; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+7Ch] [rbp+33h]

  v13[0] = 0LL;
  Device = InteractiveControlManager::FindDevice(this, 0, a2, v13, 0LL);
  if ( Device >= 0 )
  {
    Device = InteractiveControlDevice::QueueAndGenerateInput(v13[0], a3, a4);
    if ( Device < 0 && dword_1C031C7D0 > 2u )
    {
      v17 = 0;
      v20 = 0;
      v15 = "Function failed.";
      v18 = v13;
      v19 = 4;
      v16 = 17;
      LODWORD(v13[0]) = Device;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v10, v11, 4u, &pData);
    }
  }
  else if ( dword_1C031C7D0 > 2u )
  {
    v17 &= v6;
    v20 &= v6;
    v15 = "Function failed.";
    v18 = v13;
    v19 = v6 + 4;
    v16 = 17;
    LODWORD(v13[0]) = Device;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v8, v9, v6 + 4, &pData);
  }
  return (unsigned int)Device;
}
