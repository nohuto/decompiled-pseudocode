/*
 * XREFs of ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C02147DC
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02143C8 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C02150F4 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C0215CE4 (-UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z.c)
 */

__int64 __fastcall SimpleHapticsController::InitializeSupportedWaveformList(PHIDP_PREPARSED_DATA *this)
{
  CHAR *v2; // r13
  unsigned int v3; // esi
  int v4; // r14d
  NTSTATUS Caps; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rdi
  NTSTATUS SpecificValueCaps; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  const GUID *v10; // rdx
  __int64 v11; // rax
  USAGE *p_LinkUsagePage; // rcx
  UCHAR *p_ReportID; // rcx
  __int16 v14; // ax
  __int64 v15; // rax
  UCHAR *v16; // rax
  int v17; // eax
  const GUID *v18; // r8
  const GUID *v19; // r9
  USHORT v20; // cx
  unsigned int v21; // r14d
  USAGE UsageMin; // r9
  USHORT LinkCollection; // r8
  __int64 v24; // r8
  unsigned int j; // esi
  USHORT ValueCapsLength[2]; // [rsp+48h] [rbp-69h] BYREF
  unsigned int i; // [rsp+4Ch] [rbp-65h] BYREF
  ULONG UsageValue; // [rsp+50h] [rbp-61h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+58h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-19h] BYREF
  const char *v32; // [rsp+B8h] [rbp+7h]
  __int64 v33; // [rsp+C0h] [rbp+Fh]
  unsigned int *p_i; // [rsp+C8h] [rbp+17h]
  __int64 v35; // [rsp+D0h] [rbp+1Fh]

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
      if ( (unsigned int)dword_1C031C790 > 2 )
      {
        i = SpecificValueCaps;
        p_i = &i;
        v35 = 4LL;
        v32 = "Function failed.";
        v33 = 17LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v8, v9, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::InitializeSupportedWaveformList",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        539,
        Caps,
        "Function failed.");
      goto LABEL_51;
    }
    v10 = (const GUID *)ValueCapsLength[0];
    v11 = 0LL;
    if ( !ValueCapsLength[0] )
      goto LABEL_46;
    p_LinkUsagePage = &ValueCaps->LinkUsagePage;
    while ( *p_LinkUsagePage != 14 )
    {
      v11 = (unsigned int)(v11 + 1);
      p_LinkUsagePage += 36;
      if ( (unsigned int)v11 >= ValueCapsLength[0] )
        goto LABEL_15;
    }
    *((_BYTE *)this + 92) = ValueCaps[v11].ReportID;
LABEL_15:
    if ( !(_DWORD)v10 )
      goto LABEL_46;
    v8 = v10;
    p_ReportID = &ValueCaps->ReportID;
    do
    {
      if ( *((_WORD *)p_ReportID + 4) == 14 && *p_ReportID == *((_BYTE *)this + 92) )
      {
        v14 = *((_WORD *)p_ReportID + 3);
        if ( v14 == 16 )
        {
          ++v3;
        }
        else if ( v14 == 17 )
        {
          ++v4;
        }
      }
      p_ReportID += 72;
      v8 = (const GUID *)((char *)v8 - 1);
    }
    while ( v8 );
    if ( v3 && v3 == v4 )
    {
      *((_DWORD *)this + 22) = v3;
      v15 = Win32AllocPool(8LL * v3, 1667787091LL);
      this[10] = (PHIDP_PREPARSED_DATA)v15;
      if ( !v15
        || (v16 = (UCHAR *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091LL), (v2 = (CHAR *)v16) == 0LL) )
      {
        Caps = -1073741670;
LABEL_51:
        Win32FreePool(ValueCaps);
        return (unsigned int)Caps;
      }
      *v16 = ValueCaps->ReportID;
      v17 = SimpleHapticsController::SendDeviceIOControl(
              (SimpleHapticsController *)this,
              0xB0192u,
              0LL,
              0,
              v16,
              Capabilities.FeatureReportByteLength,
              0LL);
      Caps = v17;
      if ( v17 >= 0 )
      {
        v20 = ValueCapsLength[0];
        v21 = 0;
        for ( i = 0; v21 < v20; ++v21 )
        {
          if ( ValueCaps[v21].LinkUsagePage == 14 && ValueCaps[v21].LinkUsage == 17 )
          {
            UsageMin = ValueCaps[v21].Range.UsageMin;
            LinkCollection = ValueCaps[v21].LinkCollection;
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
              v24 = i;
              *((_WORD *)this[10] + 4 * i) = ValueCaps[v21].Range.UsageMin;
              *((_DWORD *)this[10] + 2 * v24 + 1) = UsageValue;
              i = v24 + 1;
            }
            v20 = ValueCapsLength[0];
          }
        }
        for ( j = 0; j < v20; ++j )
        {
          if ( ValueCaps[j].LinkUsagePage == 14 && ValueCaps[j].LinkUsage == 16 )
          {
            SimpleHapticsController::UpdateWaveformInfoList(
              (SimpleHapticsController *)this,
              ValueCaps[j].Range.UsageMin,
              ValueCaps[j].PhysicalMin);
            v20 = ValueCapsLength[0];
          }
        }
      }
      else
      {
        if ( (unsigned int)dword_1C031C790 > 2 )
        {
          i = v17;
          p_i = &i;
          v35 = 4LL;
          v32 = "Function failed.";
          v33 = 17LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v18, v19, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::InitializeSupportedWaveformList",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          600,
          Caps,
          "Function failed.");
      }
    }
    else
    {
LABEL_46:
      if ( (unsigned int)dword_1C031C790 > 2 )
      {
        v32 = "Either there is no waveform or waveform list is not equal to duration list.";
        p_i = &i;
        v35 = 4LL;
        v33 = 76LL;
        i = -1073741216;
        TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v8, v9, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::InitializeSupportedWaveformList",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        576,
        -1073741216,
        "Either there is no waveform or waveform list is not equal to duration list.");
    }
    if ( v2 )
      Win32FreePool(v2);
    goto LABEL_51;
  }
  return (unsigned int)Caps;
}
