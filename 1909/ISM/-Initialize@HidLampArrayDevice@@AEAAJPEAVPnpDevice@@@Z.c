/*
 * XREFs of ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800B3CE8
 * Callers:
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800B32C4 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18002C460 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C53C (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CB58 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18009E924 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800ACEAC (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800AD9E8 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800ADAF0 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800B13B0 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800B141C (-LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z.c)
 *     ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800B31AC (-CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800B3564 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800B4670 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800B4960 (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800B4A80 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x1800B4FFC (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800B5268 (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800B5654 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x1800B69B0 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HidLampArrayDevice::Initialize(HidLampArrayDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v4; // r15
  int InterfacePath; // eax
  signed int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  const WCHAR *StringRawBuffer; // rax
  PCWSTR v10; // rax
  unsigned int v11; // eax
  int v12; // eax
  char v13; // cl
  signed int LastError; // eax
  __int64 v15; // rdx
  int ReportDescriptorsFromPreparsedData; // eax
  signed int v17; // edi
  _QWORD *v18; // rbx
  char *v19; // rbx
  int v20; // eax
  signed int v21; // r14d
  int v22; // eax
  signed int v23; // eax
  int v24; // eax
  int v25; // ecx
  size_t v26; // rax
  void *v27; // rax
  const struct std::nothrow_t *v28; // rdx
  void *v29; // rcx
  int v30; // r14d
  __int64 v31; // rdi
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  __int64 v35; // rbx
  const WCHAR *v36; // rax
  const WCHAR *v37; // rax
  int v38; // eax
  int updated; // eax
  LampArrayTelemetry *v40; // rcx
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v43[2]; // [rsp+70h] [rbp-98h] BYREF
  HSTRING string; // [rsp+78h] [rbp-90h] BYREF
  UINT32 length; // [rsp+80h] [rbp-88h] BYREF
  struct ParsedHidReportDescriptor *v46; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h] BYREF
  __int64 v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  _DWORD v50[7]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int16 v51; // [rsp+C4h] [rbp-44h]
  char v52; // [rsp+C8h] [rbp-40h]
  char v53; // [rsp+C9h] [rbp-3Fh]
  char v54; // [rsp+CAh] [rbp-3Eh]
  char v55; // [rsp+CBh] [rbp-3Dh]
  __int64 v56; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-30h]
  __int64 v58; // [rsp+E0h] [rbp-28h]
  _HIDD_ATTRIBUTES Attributes; // [rsp+E8h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  const char *v61; // [rsp+118h] [rbp+10h]
  __int64 v62; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+128h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR v64; // [rsp+138h] [rbp+30h] BYREF
  const char *v65; // [rsp+158h] [rbp+50h]
  __int64 v66; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+168h] [rbp+60h] BYREF
  EVENT_DATA_DESCRIPTOR v68; // [rsp+178h] [rbp+70h] BYREF
  const char *v69; // [rsp+198h] [rbp+90h]
  __int64 v70; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v58 = -2LL;
  v4 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((RefCountedObject **)this + 2, (volatile signed __int32 *)a2);
  WindowsDeleteString(0LL);
  string = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)a2, &string);
  v6 = InterfacePath;
  if ( InterfacePath < 0 )
  {
    v7 = (unsigned int)InterfacePath;
    v8 = 57LL;
LABEL_84:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)v7);
    goto LABEL_85;
  }
  if ( (unsigned int)hProvider > 5 )
  {
    v61 = "Attempting to initialize HidLampArrayDevice";
    v62 = 44LL;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    TlgCreateWsz(&pDesc, StringRawBuffer);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D751, 0LL, 0LL, 4u, &pData);
  }
  v10 = WindowsGetStringRawBuffer(string, &length);
  if ( !length || !*v10 )
  {
    v6 = -2147024809;
    v8 = 63LL;
    goto LABEL_83;
  }
  if ( length > 0x100 )
  {
    v6 = -2147024774;
    v8 = 64LL;
LABEL_83:
    v7 = (unsigned int)v6;
    goto LABEL_84;
  }
  v11 = _o_wcscpy_s((char *)this + 24, 256LL, v10);
  if ( v11 )
  {
    v12 = wil::details::in1diag3::Return_Win32(
            retaddr,
            65LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)v11);
LABEL_11:
    v6 = v12;
    goto LABEL_85;
  }
  v12 = PnpDevice::OpenInterface(*v4);
  if ( v12 < 0 )
    goto LABEL_11;
  PreparsedData = 0LL;
  if ( !HidD_GetPreparsedData(*((HANDLE *)*v4 + 5), &PreparsedData) )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      goto LABEL_19;
    v15 = 73LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v6);
LABEL_19:
    if ( PreparsedData )
      HidD_FreePreparsedData(PreparsedData);
    goto LABEL_85;
  }
  if ( *((_WORD *)PreparsedData + 5) != 89 )
  {
    v6 = -2147024890;
    v15 = 74LL;
    goto LABEL_18;
  }
  if ( *((_WORD *)PreparsedData + 4) != 1 )
  {
    v6 = -2147024890;
    v15 = 75LL;
    goto LABEL_18;
  }
  v46 = 0LL;
  v43[0] = 0;
  ReportDescriptorsFromPreparsedData = HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
                                         v13,
                                         (__int64)PreparsedData,
                                         (char **)&v46,
                                         v43);
  v17 = ReportDescriptorsFromPreparsedData;
  if ( ReportDescriptorsFromPreparsedData < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)ReportDescriptorsFromPreparsedData);
    if ( v46 )
    {
      v18 = (_QWORD *)((char *)v46 - 8);
      `eh vector destructor iterator'(
        (char *)v46,
        24LL,
        *((_QWORD *)v46 - 1),
        (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
      operator delete[](v18, (const struct std::nothrow_t *)(24LL * *v18 + 8));
    }
    if ( PreparsedData )
      HidD_FreePreparsedData(PreparsedData);
    v6 = v17;
    goto LABEL_85;
  }
  v19 = (char *)v46;
  v20 = HidLampArrayDevice::CacheReportSizes(this, v46, v43[0]);
  v21 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v20);
    if ( !v19 )
    {
LABEL_34:
      if ( PreparsedData )
        HidD_FreePreparsedData(PreparsedData);
      v6 = v21;
      goto LABEL_85;
    }
LABEL_33:
    `eh vector destructor iterator'(
      v19,
      24LL,
      *((_QWORD *)v19 - 1),
      (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    operator delete[](v19 - 8, (const struct std::nothrow_t *)(24LL * *((_QWORD *)v19 - 1) + 8));
    goto LABEL_34;
  }
  v22 = HidLampArrayDevice::ParseReportDescriptors(this, (struct ParsedHidReportDescriptor *)v19, v43[0]);
  v21 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v22);
    if ( !v19 )
      goto LABEL_34;
    goto LABEL_33;
  }
  if ( v19 )
  {
    `eh vector destructor iterator'(
      v19,
      24LL,
      *((_QWORD *)v19 - 1),
      (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    operator delete[](v19 - 8, (const struct std::nothrow_t *)(24LL * *((_QWORD *)v19 - 1) + 8));
  }
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( HidD_GetAttributes(*((HANDLE *)*v4 + 5), &Attributes) )
  {
    *((_WORD *)this + 269) = Attributes.VendorID;
    *((_WORD *)this + 270) = Attributes.ProductID;
    *((_WORD *)this + 271) = Attributes.VersionNumber;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v24 = HidLampArrayDevice::ReceiveLampArrayAttributesReport(this, (struct LampArrayAttributesDeviceReport *)&v47);
    v6 = v24;
    if ( v24 < 0 )
    {
      v7 = (unsigned int)v24;
      v8 = 102LL;
      goto LABEL_84;
    }
    v25 = v47;
    *((_QWORD *)this + 68) = v47;
    *((_QWORD *)this + 69) = v48;
    *((_QWORD *)this + 70) = v49;
    v26 = 36LL * v25;
    if ( !is_mul_ok(v25, 0x24uLL) )
      v26 = -1LL;
    v27 = operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
    v29 = (void *)*((_QWORD *)this + 71);
    *((_QWORD *)this + 71) = v27;
    if ( v29 )
    {
      operator delete(v29, v28);
      v27 = (void *)*((_QWORD *)this + 71);
    }
    if ( !v27 )
    {
      v6 = -2147024882;
      v8 = 116LL;
      goto LABEL_83;
    }
    v30 = 0;
    if ( *((int *)this + 136) > 0 )
    {
      v31 = 0LL;
      while ( 1 )
      {
        v32 = HidLampArrayDevice::SendLampAttributesRequest(this, v30);
        v6 = v32;
        if ( v32 < 0 )
          break;
        v33 = HidLampArrayDevice::ReceiveLampAttributesReport(this, (struct LampAttributesResponseDeviceReport *)v50);
        v6 = v33;
        if ( v33 < 0 )
        {
          v7 = (unsigned int)v33;
          v8 = 123LL;
          goto LABEL_84;
        }
        if ( v50[0] != v30 )
        {
          v6 = -2089418751;
          v8 = 128LL;
          goto LABEL_83;
        }
        *(_DWORD *)(v31 + *((_QWORD *)this + 71)) = v50[0];
        *(_DWORD *)(*((_QWORD *)this + 71) + v31 + 4) = v50[1];
        *(_DWORD *)(*((_QWORD *)this + 71) + v31 + 8) = v50[2];
        *(_DWORD *)(*((_QWORD *)this + 71) + v31 + 12) = v50[3];
        *(_DWORD *)(*((_QWORD *)this + 71) + v31 + 16) = v50[4];
        *(_BYTE *)(*((_QWORD *)this + 71) + v31 + 24) = v52;
        *(_BYTE *)(*((_QWORD *)this + 71) + v31 + 25) = v53;
        *(_BYTE *)(*((_QWORD *)this + 71) + v31 + 26) = v54;
        *(_BYTE *)(*((_QWORD *)this + 71) + v31 + 27) = v55;
        *(_DWORD *)(*((_QWORD *)this + 71) + v31 + 28) = v50[6];
        *(_DWORD *)(*((_QWORD *)this + 71) + v31 + 20) = v50[5];
        if ( *((_DWORD *)this + 140) == 1 )
        {
          v35 = *((_QWORD *)this + 71);
          *(_DWORD *)(v35 + v31 + 32) = HidUsageConverter::KeyboardHidUsageToVKey(v51);
        }
        else if ( *((_DWORD *)this + 140) == 2 )
        {
          if ( v51 >= 6u )
            v34 = 0;
          else
            v34 = dword_1801A7D80[v51];
          *(_DWORD *)(*((_QWORD *)this + 71) + v31 + 32) = v34;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)this + 71) + v31 + 32) = 0;
        }
        ++v30;
        v31 += 36LL;
        if ( v30 >= *((_DWORD *)this + 136) )
          goto LABEL_71;
      }
      v7 = (unsigned int)v32;
      v8 = 120LL;
      goto LABEL_84;
    }
LABEL_71:
    if ( (unsigned int)hProvider > 5 )
    {
      v65 = "Successfully parsed device data";
      v66 = 32LL;
      v36 = WindowsGetStringRawBuffer(string, 0LL);
      TlgCreateWsz(&v67, v36);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D751, 0LL, 0LL, 4u, &v64);
      if ( (unsigned int)hProvider > 5 )
      {
        v69 = "Setting device to known-good-state.";
        v70 = 36LL;
        v37 = WindowsGetStringRawBuffer(string, 0LL);
        TlgCreateWsz(&v71, v37);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D751, 0LL, 0LL, 4u, &v68);
      }
    }
    v38 = HidLampArrayDevice::SetAutonomousMode(this, 1);
    v6 = v38;
    if ( v38 < 0 )
    {
      v7 = (unsigned int)v38;
      v8 = 169LL;
      goto LABEL_84;
    }
    v57 = 0LL;
    v56 = 1LL;
    LODWORD(v57) = *((_DWORD *)this + 136) - 1;
    updated = HidLampArrayDevice::SendLampRangeUpdateReport(this, (const struct LampRangeUpdateDeviceReport *)&v56);
    v6 = updated;
    if ( updated < 0 )
    {
      v7 = (unsigned int)updated;
      v8 = 175LL;
      goto LABEL_84;
    }
    LampArrayTelemetry::GetInstance();
    LampArrayTelemetry::LogLampArrayDeviceAdded(
      v40,
      (const unsigned __int16 *)this + 12,
      *((_WORD *)this + 269),
      *((_WORD *)this + 270),
      *((_WORD *)this + 271),
      *((_DWORD *)this + 136),
      *((_DWORD *)this + 137),
      *((_DWORD *)this + 138),
      *((_DWORD *)this + 139),
      *((_DWORD *)this + 140),
      *((_DWORD *)this + 141));
    *((_BYTE *)this + 637) = 1;
    v6 = 0;
  }
  else
  {
    v23 = GetLastError();
    v6 = v23;
    if ( v23 > 0 )
      v6 = (unsigned __int16)v23 | 0x80070000;
    if ( v6 < 0 )
    {
      v8 = 92LL;
      goto LABEL_83;
    }
  }
LABEL_85:
  WindowsDeleteString(string);
  return (unsigned int)v6;
}
