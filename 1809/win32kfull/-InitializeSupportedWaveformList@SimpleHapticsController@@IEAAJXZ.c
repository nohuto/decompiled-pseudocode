/*
 * XREFs of ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C023E160
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C023DCF0 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023EB08 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C023F7E4 (-UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z.c)
 */

__int64 __fastcall SimpleHapticsController::InitializeSupportedWaveformList(PHIDP_PREPARSED_DATA *this)
{
  CHAR *v2; // r13
  unsigned int v3; // esi
  int v4; // r14d
  NTSTATUS Caps; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rdi
  NTSTATUS SpecificValueCaps; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  USAGE *p_LinkUsagePage; // rcx
  __int64 v11; // r8
  UCHAR *p_ReportID; // rcx
  __int16 v13; // ax
  __int64 v14; // rax
  UCHAR *v15; // rax
  int v16; // eax
  USHORT v17; // cx
  unsigned int v18; // r14d
  USAGE UsageMin; // r9
  USHORT LinkCollection; // r8
  __int64 v21; // r8
  unsigned int j; // esi
  USHORT ValueCapsLength[2]; // [rsp+48h] [rbp-69h] BYREF
  unsigned int i; // [rsp+4Ch] [rbp-65h] BYREF
  ULONG UsageValue; // [rsp+50h] [rbp-61h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+58h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-19h] BYREF
  const char *v29; // [rsp+B8h] [rbp+7h]
  __int64 v30; // [rsp+C0h] [rbp+Fh]
  unsigned int *p_i; // [rsp+C8h] [rbp+17h]
  __int64 v32; // [rsp+D0h] [rbp+1Fh]

  memset(&Capabilities, 0, sizeof(Capabilities));
  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  Caps = HidP_GetCaps(this[2], &Capabilities);
  ValueCapsLength[0] = Capabilities.NumberFeatureValueCaps;
  if ( Caps >= 0 && Capabilities.NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * Capabilities.NumberFeatureValueCaps, 1667787091LL);
    if ( !ValueCaps )
      return (unsigned int)-1073741670;
    SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xAu, 0, 0, ValueCaps, ValueCapsLength, this[2]);
    Caps = SpecificValueCaps;
    if ( SpecificValueCaps < 0 )
    {
      if ( (unsigned int)dword_1C030C3C8 > 2 )
      {
        i = SpecificValueCaps;
        p_i = &i;
        v32 = 4LL;
        v29 = "Function failed.";
        v30 = 17LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::InitializeSupportedWaveformList",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        554,
        Caps,
        "Function failed.");
      goto LABEL_51;
    }
    v8 = ValueCapsLength[0];
    v9 = 0LL;
    if ( !ValueCapsLength[0] )
      goto LABEL_46;
    p_LinkUsagePage = &ValueCaps->LinkUsagePage;
    while ( *p_LinkUsagePage != 14 )
    {
      v9 = (unsigned int)(v9 + 1);
      p_LinkUsagePage += 36;
      if ( (unsigned int)v9 >= ValueCapsLength[0] )
        goto LABEL_15;
    }
    *((_BYTE *)this + 92) = ValueCaps[v9].ReportID;
LABEL_15:
    if ( !(_DWORD)v8 )
      goto LABEL_46;
    v11 = v8;
    p_ReportID = &ValueCaps->ReportID;
    do
    {
      if ( *((_WORD *)p_ReportID + 4) == 14 && *p_ReportID == *((_BYTE *)this + 92) )
      {
        v13 = *((_WORD *)p_ReportID + 3);
        if ( v13 == 16 )
        {
          ++v3;
        }
        else if ( v13 == 17 )
        {
          ++v4;
        }
      }
      p_ReportID += 72;
      --v11;
    }
    while ( v11 );
    if ( v3 && v3 == v4 )
    {
      *((_DWORD *)this + 22) = v3;
      v14 = Win32AllocPool(8LL * v3, 1667787091LL);
      this[10] = (PHIDP_PREPARSED_DATA)v14;
      if ( !v14
        || (v15 = (UCHAR *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091LL), (v2 = (CHAR *)v15) == 0LL) )
      {
        Caps = -1073741670;
LABEL_51:
        Win32FreePool(ValueCaps);
        return (unsigned int)Caps;
      }
      *v15 = ValueCaps->ReportID;
      v16 = SimpleHapticsController::SendDeviceIOControl(
              (SimpleHapticsController *)this,
              0xB0192u,
              0LL,
              0,
              v15,
              Capabilities.FeatureReportByteLength,
              0LL);
      Caps = v16;
      if ( v16 >= 0 )
      {
        v17 = ValueCapsLength[0];
        v18 = 0;
        for ( i = 0; v18 < v17; ++v18 )
        {
          if ( ValueCaps[v18].LinkUsagePage == 14 && ValueCaps[v18].LinkUsage == 17 )
          {
            UsageMin = ValueCaps[v18].Range.UsageMin;
            LinkCollection = ValueCaps[v18].LinkCollection;
            UsageValue = 0;
            Caps = HidP_GetUsageValue(
                     HidP_Feature,
                     0xAu,
                     LinkCollection,
                     UsageMin,
                     &UsageValue,
                     this[2],
                     v2,
                     Capabilities.FeatureReportByteLength);
            if ( Caps >= 0 )
            {
              v21 = i;
              *((_WORD *)this[10] + 4 * i) = ValueCaps[v18].Range.UsageMin;
              *((_DWORD *)this[10] + 2 * v21 + 1) = UsageValue;
              i = v21 + 1;
            }
            v17 = ValueCapsLength[0];
          }
        }
        for ( j = 0; j < v17; ++j )
        {
          if ( ValueCaps[j].LinkUsagePage == 14 && ValueCaps[j].LinkUsage == 16 )
          {
            SimpleHapticsController::UpdateWaveformInfoList(
              (SimpleHapticsController *)this,
              ValueCaps[j].Range.UsageMin,
              ValueCaps[j].PhysicalMin);
            v17 = ValueCapsLength[0];
          }
        }
      }
      else
      {
        if ( (unsigned int)dword_1C030C3C8 > 2 )
        {
          i = v16;
          p_i = &i;
          v32 = 4LL;
          v29 = "Function failed.";
          v30 = 17LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::InitializeSupportedWaveformList",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          615,
          Caps,
          "Function failed.");
      }
    }
    else
    {
LABEL_46:
      if ( (unsigned int)dword_1C030C3C8 > 2 )
      {
        v29 = "Either there is no waveform or waveform list is not equal to duration list.";
        p_i = &i;
        v32 = 4LL;
        v30 = 76LL;
        i = -1073741216;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::InitializeSupportedWaveformList",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        591,
        -1073741216,
        "Either there is no waveform or waveform list is not equal to duration list.");
    }
    if ( v2 )
      Win32FreePool(v2);
    goto LABEL_51;
  }
  return (unsigned int)Caps;
}
