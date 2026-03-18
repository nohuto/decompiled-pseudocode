/*
 * XREFs of ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C023DCF0
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023AF18 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     AllocateUnicodeString @ 0x1C0124434 (AllocateUnicodeString.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C023E160 (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C023E640 (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C023E824 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 */

__int64 __fastcall SimpleHapticsController::Initialize(SimpleHapticsController *this, struct _UNICODE_STRING *a2)
{
  int v4; // eax
  int v5; // eax
  NTSTATUS Caps; // eax
  __int64 OutputReportByteLength; // rcx
  __int64 v8; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *PreparsedDataa; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *PreparsedDatab; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *PreparsedDatac; // [rsp+30h] [rbp-D0h]
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS SpecificValueCaps; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  const char *v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  int *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  NTSTATUS *p_SpecificValueCaps; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+E0h] [rbp-20h] BYREF

  SpecificValueCaps = 0;
  memset(&Capabilities, 0, sizeof(Capabilities));
  if ( (unsigned int)dword_1C030C3C8 > 4 )
  {
    v20 = 42LL;
    v19 = "SimpleHapticsController::Initialize entry";
    TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B3A, 0LL, 0LL, 3u, &pData);
  }
  if ( !a2 )
  {
    SpecificValueCaps = -1073741811;
    goto LABEL_22;
  }
  if ( !(unsigned int)AllocateUnicodeString((struct _UNICODE_STRING *)this, &a2->Length) )
    goto LABEL_21;
  v4 = SimpleHapticsController::OpenHapticsDevice(this);
  SpecificValueCaps = v4;
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_1C030C3C8 > 2 )
    {
      v16 = v4;
      v21 = &v16;
      v19 = "Function failed.";
      v20 = 17LL;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
      v4 = SpecificValueCaps;
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::Initialize",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      57,
      v4,
      "Function failed.");
    goto LABEL_22;
  }
  v5 = SimpleHapticsController::IntializePreparssedData(this);
  SpecificValueCaps = v5;
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_1C030C3C8 > 2 )
    {
      v16 = v5;
      v21 = &v16;
      v19 = "Function failed.";
      v20 = 17LL;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
      v5 = SpecificValueCaps;
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::Initialize",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      59,
      v5,
      "Function failed.");
    goto LABEL_22;
  }
  Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 2), &Capabilities);
  SpecificValueCaps = Caps;
  if ( Caps < 0 )
  {
    if ( (unsigned int)dword_1C030C3C8 > 2 )
    {
      v16 = Caps;
      v21 = &v16;
      v19 = "Function failed.";
      v20 = 17LL;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
      Caps = SpecificValueCaps;
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::Initialize",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      61,
      Caps,
      "Function failed.");
    goto LABEL_22;
  }
  if ( Capabilities.OutputReportByteLength )
  {
    OutputReportByteLength = Capabilities.OutputReportByteLength;
    *((_WORD *)this + 36) = Capabilities.OutputReportByteLength;
    v8 = Win32AllocPoolZInit(OutputReportByteLength, 1667787091LL);
    *((_QWORD *)this + 8) = v8;
    if ( !v8 )
    {
LABEL_21:
      SpecificValueCaps = -1073741670;
      goto LABEL_22;
    }
  }
  else
  {
    *((_WORD *)this + 36) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
  ValueCapsLength[0] = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x21u, &ValueCaps, ValueCapsLength, PreparsedData);
  if ( SpecificValueCaps >= 0 )
  {
    PreparsedDataa = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Output,
                          0xEu,
                          0,
                          0x24u,
                          &ValueCaps,
                          ValueCapsLength,
                          PreparsedDataa);
    if ( SpecificValueCaps >= 0 )
      *((_DWORD *)this + 19) |= 4u;
    PreparsedDatab = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Output,
                          0xEu,
                          0,
                          0x25u,
                          &ValueCaps,
                          ValueCapsLength,
                          PreparsedDatab);
    if ( SpecificValueCaps >= 0 )
      *((_DWORD *)this + 19) |= 8u;
    PreparsedDatac = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Output,
                          0xEu,
                          0,
                          0x23u,
                          &ValueCaps,
                          ValueCapsLength,
                          PreparsedDatac);
    if ( SpecificValueCaps >= 0 )
      *((_DWORD *)this + 19) |= 2u;
    SimpleHapticsController::InitializeSupportedWaveformList(this);
  }
  SpecificValueCaps = 0;
LABEL_22:
  if ( (unsigned int)dword_1C030C3C8 > 4 )
  {
    v20 = 41LL;
    v19 = "SimpleHapticsController::Initialize exit";
    v16 = *((_DWORD *)this + 22);
    v21 = &v16;
    p_SpecificValueCaps = &SpecificValueCaps;
    v22 = 4LL;
    v24 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6CB5, 0LL, 0LL, 5u, &pData);
  }
  return (unsigned int)SpecificValueCaps;
}
