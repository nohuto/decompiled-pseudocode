/*
 * XREFs of ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0215688
 * Callers:
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0212808 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C02150F4 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 */

__int64 __fastcall SimpleHapticsController::SetAutoTriggerWaveform(PHIDP_PREPARSED_DATA *this, unsigned __int16 a2)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  NTSTATUS Caps; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  const GUID *v8; // r8
  const GUID *v9; // r9
  UCHAR *v10; // rdi
  NTSTATUS SpecificValueCaps; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v14; // eax
  const GUID *v15; // r8
  const GUID *v16; // r9
  NTSTATUS v17; // eax
  const GUID *v18; // r8
  const GUID *v19; // r9
  int v20; // eax
  const GUID *v21; // r8
  const GUID *v22; // r9
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v26; // [rsp+48h] [rbp-B8h] BYREF
  USHORT ValueCapsLength[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  const char *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  unsigned int *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]

  v26 = a2;
  v24 = 0;
  memset(&Capabilities, 0, sizeof(Capabilities));
  ValueCapsLength[0] = 1;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  if ( (unsigned int)dword_1C031C790 > 4 )
  {
    v32 = 54LL;
    v31 = "SimpleHapticsController::SetAutoTriggerWaveform entry";
    v33 = (unsigned int *)&v26;
    v34 = 2LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E41DE, v3, v4, 4u, &pData);
  }
  Caps = HidP_GetCaps(this[2], &Capabilities);
  v24 = Caps;
  if ( Caps >= 0 )
  {
    v10 = (UCHAR *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091LL);
    if ( v10 )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &ValueCaps, ValueCapsLength, this[2]);
      v24 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
      {
        *v10 = ValueCaps.ReportID;
        v14 = SimpleHapticsController::SendDeviceIOControl(
                (SimpleHapticsController *)this,
                0xB0192u,
                0LL,
                0,
                v10,
                Capabilities.FeatureReportByteLength,
                0LL);
        v24 = v14;
        if ( v14 >= 0 )
        {
          v17 = HidP_SetUsageValue(
                  HidP_Feature,
                  0xEu,
                  ValueCaps.LinkCollection,
                  0x20u,
                  v26,
                  this[2],
                  (PCHAR)v10,
                  Capabilities.FeatureReportByteLength);
          v24 = v17;
          if ( v17 >= 0 )
          {
            v20 = SimpleHapticsController::SendDeviceIOControl(
                    (SimpleHapticsController *)this,
                    0xB0191u,
                    v10,
                    Capabilities.FeatureReportByteLength,
                    0LL,
                    0,
                    0LL);
            v24 = v20;
            if ( v20 < 0 )
            {
              if ( (unsigned int)dword_1C031C790 > 2 )
              {
                v25 = v20;
                v33 = (unsigned int *)&v25;
                v31 = "Function failed.";
                v32 = 17LL;
                v34 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v21, v22, 4u, &pData);
                v20 = v24;
              }
              DbgPrintEx(
                0x4Du,
                0,
                "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
                "SimpleHapticsController::SetAutoTriggerWaveform",
                "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
                343,
                v20,
                "Function failed.");
            }
          }
          else
          {
            if ( (unsigned int)dword_1C031C790 > 2 )
            {
              v25 = v17;
              v33 = (unsigned int *)&v25;
              v31 = "Function failed.";
              v32 = 17LL;
              v34 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v18, v19, 4u, &pData);
              v17 = v24;
            }
            DbgPrintEx(
              0x4Du,
              0,
              "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
              "SimpleHapticsController::SetAutoTriggerWaveform",
              "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
              334,
              v17,
              "Function failed.");
          }
        }
        else
        {
          if ( (unsigned int)dword_1C031C790 > 2 )
          {
            v25 = v14;
            v33 = (unsigned int *)&v25;
            v31 = "Function failed.";
            v32 = 17LL;
            v34 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v15, v16, 4u, &pData);
            v14 = v24;
          }
          DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::SetAutoTriggerWaveform",
            "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            324,
            v14,
            "Function failed.");
        }
      }
      else
      {
        if ( (unsigned int)dword_1C031C790 > 2 )
        {
          v25 = SpecificValueCaps;
          v33 = (unsigned int *)&v25;
          v31 = "Function failed.";
          v32 = 17LL;
          v34 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v12, v13, 4u, &pData);
          SpecificValueCaps = v24;
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::SetAutoTriggerWaveform",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          314,
          SpecificValueCaps,
          "Function failed.");
      }
      Win32FreePool(v10);
    }
    else
    {
      v24 = -1073741670;
    }
  }
  else
  {
    if ( (unsigned int)dword_1C031C790 > 2 )
    {
      v25 = Caps;
      v33 = (unsigned int *)&v25;
      v31 = "Function failed.";
      v32 = 17LL;
      v34 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v6, v7, 4u, &pData);
      Caps = v24;
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SetAutoTriggerWaveform",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      300,
      Caps,
      "Function failed.");
  }
  if ( (unsigned int)dword_1C031C790 > 4 )
  {
    v32 = 53LL;
    v31 = "SimpleHapticsController::SetAutoTriggerWaveform exit";
    v33 = &v24;
    v34 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4216, v8, v9, 4u, &pData);
  }
  return v24;
}
