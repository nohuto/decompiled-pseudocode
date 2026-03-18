/*
 * XREFs of ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0257720
 * Callers:
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C02545C0 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0257148 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 */

__int64 __fastcall SimpleHapticsController::SetAutoTriggerWaveform(PHIDP_PREPARSED_DATA *this, unsigned __int16 a2)
{
  NTSTATUS Caps; // eax
  UCHAR *v4; // rdi
  NTSTATUS SpecificValueCaps; // eax
  int v6; // eax
  NTSTATUS v7; // eax
  int v8; // eax
  unsigned int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v12; // [rsp+48h] [rbp-B8h] BYREF
  USHORT ValueCapsLength[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  const char *v17; // [rsp+110h] [rbp+10h]
  __int64 v18; // [rsp+118h] [rbp+18h]
  unsigned int *v19; // [rsp+120h] [rbp+20h]
  __int64 v20; // [rsp+128h] [rbp+28h]

  v12 = a2;
  memset(&Capabilities, 0, sizeof(Capabilities));
  ValueCapsLength[0] = 1;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  if ( (unsigned int)dword_1C031F2D0 > 4 )
  {
    v18 = 54LL;
    v17 = "SimpleHapticsController::SetAutoTriggerWaveform entry";
    v19 = (unsigned int *)&v12;
    v20 = 2LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8EB5, 0LL, 0LL, 4u, &pData);
  }
  Caps = HidP_GetCaps(this[2], &Capabilities);
  v10 = Caps;
  if ( Caps >= 0 )
  {
    v4 = (UCHAR *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091LL);
    if ( v4 )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &ValueCaps, ValueCapsLength, this[2]);
      v10 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
      {
        *v4 = ValueCaps.ReportID;
        v6 = SimpleHapticsController::SendDeviceIOControl(
               (SimpleHapticsController *)this,
               0xB0192u,
               0LL,
               0,
               v4,
               Capabilities.FeatureReportByteLength,
               0LL);
        v10 = v6;
        if ( v6 >= 0 )
        {
          v7 = HidP_SetUsageValue(
                 HidP_Feature,
                 0xEu,
                 ValueCaps.LinkCollection,
                 0x20u,
                 v12,
                 this[2],
                 (PCHAR)v4,
                 Capabilities.FeatureReportByteLength);
          v10 = v7;
          if ( v7 >= 0 )
          {
            v8 = SimpleHapticsController::SendDeviceIOControl(
                   (SimpleHapticsController *)this,
                   0xB0191u,
                   v4,
                   Capabilities.FeatureReportByteLength,
                   0LL,
                   0,
                   0LL);
            v10 = v8;
            if ( v8 < 0 )
            {
              if ( (unsigned int)dword_1C031F2D0 > 2 )
              {
                v11 = v8;
                v19 = (unsigned int *)&v11;
                v17 = "Function failed.";
                v18 = 17LL;
                v20 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8D9E, 0LL, 0LL, 4u, &pData);
                v8 = v10;
              }
              DbgPrintEx(
                0x4Du,
                0,
                "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
                "SimpleHapticsController::SetAutoTriggerWaveform",
                "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
                358,
                v8,
                "Function failed.");
            }
          }
          else
          {
            if ( (unsigned int)dword_1C031F2D0 > 2 )
            {
              v11 = v7;
              v19 = (unsigned int *)&v11;
              v17 = "Function failed.";
              v18 = 17LL;
              v20 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8D9E, 0LL, 0LL, 4u, &pData);
              v7 = v10;
            }
            DbgPrintEx(
              0x4Du,
              0,
              "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
              "SimpleHapticsController::SetAutoTriggerWaveform",
              "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
              349,
              v7,
              "Function failed.");
          }
        }
        else
        {
          if ( (unsigned int)dword_1C031F2D0 > 2 )
          {
            v11 = v6;
            v19 = (unsigned int *)&v11;
            v17 = "Function failed.";
            v18 = 17LL;
            v20 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8D9E, 0LL, 0LL, 4u, &pData);
            v6 = v10;
          }
          DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::SetAutoTriggerWaveform",
            "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            339,
            v6,
            "Function failed.");
        }
      }
      else
      {
        if ( (unsigned int)dword_1C031F2D0 > 2 )
        {
          v11 = SpecificValueCaps;
          v19 = (unsigned int *)&v11;
          v17 = "Function failed.";
          v18 = 17LL;
          v20 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8D9E, 0LL, 0LL, 4u, &pData);
          SpecificValueCaps = v10;
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::SetAutoTriggerWaveform",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          329,
          SpecificValueCaps,
          "Function failed.");
      }
      Win32FreePool(v4);
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    if ( (unsigned int)dword_1C031F2D0 > 2 )
    {
      v11 = Caps;
      v19 = (unsigned int *)&v11;
      v17 = "Function failed.";
      v18 = 17LL;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8D9E, 0LL, 0LL, 4u, &pData);
      Caps = v10;
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SetAutoTriggerWaveform",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      315,
      Caps,
      "Function failed.");
  }
  if ( (unsigned int)dword_1C031F2D0 > 4 )
  {
    v18 = 53LL;
    v17 = "SimpleHapticsController::SetAutoTriggerWaveform exit";
    v19 = &v10;
    v20 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8E46, 0LL, 0LL, 4u, &pData);
  }
  return v10;
}
