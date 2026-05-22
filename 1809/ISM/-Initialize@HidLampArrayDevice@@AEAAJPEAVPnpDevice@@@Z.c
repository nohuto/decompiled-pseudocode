/*
 * XREFs of ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x180079740
 * Callers:
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800740AC (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180064E88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x180073034 (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800733F0 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x180073434 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x180078FDC (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x180079340 (-LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z.c)
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x180079F88 (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x18007A1A0 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x18007A2FC (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18007A63C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x18007AD50 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18007AFBC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x18007B858 (-CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x18007B970 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18012C1D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C2AC (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HidLampArrayDevice::Initialize(HidLampArrayDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v4; // r15
  int InterfacePath; // eax
  signed int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  PCWSTR StringRawBuffer; // rax
  const WCHAR *v10; // rdx
  __int64 v11; // rcx
  PCWSTR v12; // rax
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  signed int LastError; // eax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // edi
  _QWORD *v20; // rbx
  struct ParsedHidReportDescriptor *v21; // rbx
  int v22; // eax
  signed int v23; // r14d
  int v24; // eax
  signed int v25; // eax
  int v26; // eax
  int v27; // ecx
  unsigned __int64 v28; // rax
  void *v29; // rax
  const struct std::nothrow_t *v30; // rdx
  void *v31; // rcx
  int v32; // r14d
  __int64 v33; // rbx
  UINT v34; // ecx
  HKL KeyboardLayout; // rax
  unsigned __int8 *v36; // rdx
  int v37; // eax
  __int64 v38; // rdx
  int updated; // eax
  LampArrayTelemetry *v40; // rcx
  USHORT ChangedUsageList; // [rsp+60h] [rbp-A0h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+68h] [rbp-98h] BYREF
  _BYTE InsertCodesContext[4]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v45; // [rsp+74h] [rbp-8Ch] BYREF
  HSTRING string; // [rsp+78h] [rbp-88h] BYREF
  UINT32 length; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+84h] [rbp-7Ch] BYREF
  _HIDP_KEYBOARD_MODIFIER_STATE ModifierState; // [rsp+88h] [rbp-78h] BYREF
  struct ParsedHidReportDescriptor *v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  _DWORD v54[7]; // [rsp+B0h] [rbp-50h] BYREF
  USHORT v55; // [rsp+CCh] [rbp-34h]
  char v56; // [rsp+D0h] [rbp-30h]
  char v57; // [rsp+D1h] [rbp-2Fh]
  char v58; // [rsp+D2h] [rbp-2Eh]
  char v59; // [rsp+D3h] [rbp-2Dh]
  __int64 v60; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  _HIDD_ATTRIBUTES Attributes; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  const char *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  const WCHAR *v67; // [rsp+130h] [rbp+30h]
  int v68; // [rsp+138h] [rbp+38h]
  int v69; // [rsp+13Ch] [rbp+3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v62 = -2LL;
  v4 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<PnpDevice>::operator=((volatile signed __int32 **)this + 2, (volatile signed __int32 *)a2);
  WindowsDeleteString(0LL);
  string = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)a2, &string);
  v6 = InterfacePath;
  if ( InterfacePath < 0 )
  {
    v7 = (unsigned int)InterfacePath;
    v8 = 57LL;
    goto LABEL_89;
  }
  if ( (unsigned int)hProvider > 5 )
  {
    v65 = "Attempting to initialize HidLampArrayDevice";
    v66 = 44LL;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v10 = &sourceString;
    LODWORD(v11) = 0;
    if ( StringRawBuffer )
    {
      v10 = StringRawBuffer;
      v11 = -1LL;
      do
        ++v11;
      while ( StringRawBuffer[v11] );
    }
    v67 = v10;
    v68 = 2 * v11 + 2;
    v69 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180168A30, 0LL, 0LL, 4u, &pData);
  }
  v12 = WindowsGetStringRawBuffer(string, &length);
  if ( !length || !*v12 )
  {
    v6 = -2147024809;
    v8 = 63LL;
    goto LABEL_88;
  }
  if ( length > 0x100 )
  {
    v6 = -2147024774;
    v8 = 64LL;
LABEL_88:
    v7 = (unsigned int)v6;
    goto LABEL_89;
  }
  v13 = _o_wcscpy_s((char *)this + 24, 256LL, v12);
  if ( v13 )
  {
    v14 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x41,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)v13);
LABEL_14:
    v6 = v14;
    goto LABEL_90;
  }
  v14 = PnpDevice::OpenInterface(*v4);
  if ( v14 < 0 )
    goto LABEL_14;
  PreparsedData = 0LL;
  if ( !HidD_GetPreparsedData(*((HANDLE *)*v4 + 5), &PreparsedData) )
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( v6 >= 0 )
      goto LABEL_22;
    v17 = 73LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v6);
LABEL_22:
    if ( PreparsedData )
      HidD_FreePreparsedData(PreparsedData);
    goto LABEL_90;
  }
  if ( *((_WORD *)PreparsedData + 5) != 89 )
  {
    v6 = -2147024890;
    v17 = 74LL;
    goto LABEL_21;
  }
  if ( *((_WORD *)PreparsedData + 4) != 1 )
  {
    v6 = -2147024890;
    v17 = 75LL;
    goto LABEL_21;
  }
  v50 = 0LL;
  v45 = 0;
  v18 = HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(v15, PreparsedData, &v50, &v45);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v18);
    if ( v50 )
    {
      v20 = (_QWORD *)((char *)v50 - 8);
      `eh vector destructor iterator'(
        v50,
        0x18uLL,
        *((_QWORD *)v50 - 1),
        (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
      operator delete[](v20, (const struct std::nothrow_t *)(24LL * *v20 + 8));
    }
    if ( PreparsedData )
      HidD_FreePreparsedData(PreparsedData);
    goto LABEL_33;
  }
  v21 = v50;
  v22 = HidLampArrayDevice::CacheReportSizes(this, v50, v45);
  v23 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v22);
    if ( !v21 )
    {
LABEL_37:
      if ( PreparsedData )
        HidD_FreePreparsedData(PreparsedData);
      v6 = v23;
      goto LABEL_90;
    }
LABEL_36:
    `eh vector destructor iterator'(
      v21,
      0x18uLL,
      *((_QWORD *)v21 - 1),
      (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    operator delete[]((char *)v21 - 8, (const struct std::nothrow_t *)(24LL * *((_QWORD *)v21 - 1) + 8));
    goto LABEL_37;
  }
  v24 = HidLampArrayDevice::ParseReportDescriptors(this, v21, v45);
  v23 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v24);
    if ( !v21 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( v21 )
  {
    `eh vector destructor iterator'(
      v21,
      0x18uLL,
      *((_QWORD *)v21 - 1),
      (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    operator delete[]((char *)v21 - 8, (const struct std::nothrow_t *)(24LL * *((_QWORD *)v21 - 1) + 8));
  }
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( !HidD_GetAttributes(*((HANDLE *)*v4 + 5), &Attributes) )
  {
    v25 = GetLastError();
    v6 = (unsigned __int16)v25 | 0x80070000;
    if ( v25 <= 0 )
      v6 = v25;
    if ( v6 >= 0 )
      goto LABEL_90;
    v8 = 92LL;
    goto LABEL_88;
  }
  *((_WORD *)this + 269) = Attributes.VendorID;
  *((_WORD *)this + 270) = Attributes.ProductID;
  *((_WORD *)this + 271) = Attributes.VersionNumber;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v26 = HidLampArrayDevice::ReceiveLampArrayAttributesReport(this, (struct LampArrayAttributesDeviceReport *)&v51);
  v6 = v26;
  if ( v26 < 0 )
  {
    v7 = (unsigned int)v26;
    v8 = 102LL;
    goto LABEL_89;
  }
  v27 = v51;
  *((_QWORD *)this + 68) = v51;
  *((_QWORD *)this + 69) = v52;
  *((_QWORD *)this + 70) = v53;
  v28 = 36LL * v27;
  if ( !is_mul_ok(v27, 0x24uLL) )
    v28 = -1LL;
  v29 = operator new[](v28, (const struct std::nothrow_t *)&std::nothrow);
  v31 = (void *)*((_QWORD *)this + 71);
  *((_QWORD *)this + 71) = v29;
  if ( v31 )
  {
    operator delete(v31, v30);
    v29 = (void *)*((_QWORD *)this + 71);
  }
  if ( !v29 )
  {
    v6 = -2147024882;
    v8 = 116LL;
    goto LABEL_88;
  }
  v32 = 0;
  if ( *((int *)this + 136) <= 0 )
  {
LABEL_78:
    v37 = HidLampArrayDevice::SetAutonomousMode(this, 1);
    v6 = v37;
    if ( v37 >= 0 )
    {
      v61 = 0LL;
      v60 = 1LL;
      LODWORD(v61) = *((_DWORD *)this + 136) - 1;
      updated = HidLampArrayDevice::SendLampRangeUpdateReport(this, (const struct LampRangeUpdateDeviceReport *)&v60);
      v6 = updated;
      if ( updated >= 0 )
      {
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
        goto LABEL_90;
      }
      v7 = (unsigned int)updated;
      v8 = 171LL;
    }
    else
    {
      v7 = (unsigned int)v37;
      v8 = 165LL;
    }
LABEL_89:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)v7);
    goto LABEL_90;
  }
  v33 = 0LL;
  while ( 1 )
  {
    v19 = HidLampArrayDevice::SendLampAttributesRequest(this, v32);
    if ( v19 < 0 )
      break;
    v19 = HidLampArrayDevice::ReceiveLampAttributesReport(this, (struct LampAttributesResponseDeviceReport *)v54);
    if ( v19 < 0 )
    {
      v38 = 123LL;
      goto LABEL_83;
    }
    if ( v54[0] != v32 )
    {
      v6 = -2089418751;
      v8 = 128LL;
      goto LABEL_88;
    }
    *(_DWORD *)(v33 + *((_QWORD *)this + 71)) = v54[0];
    *(_DWORD *)(*((_QWORD *)this + 71) + v33 + 4) = v54[1];
    *(_DWORD *)(*((_QWORD *)this + 71) + v33 + 8) = v54[2];
    *(_DWORD *)(*((_QWORD *)this + 71) + v33 + 12) = v54[3];
    *(_DWORD *)(*((_QWORD *)this + 71) + v33 + 16) = v54[4];
    *(_BYTE *)(*((_QWORD *)this + 71) + v33 + 24) = v56;
    *(_BYTE *)(*((_QWORD *)this + 71) + v33 + 25) = v57;
    *(_BYTE *)(*((_QWORD *)this + 71) + v33 + 26) = v58;
    *(_BYTE *)(*((_QWORD *)this + 71) + v33 + 27) = v59;
    *(_DWORD *)(*((_QWORD *)this + 71) + v33 + 28) = v54[6];
    *(_DWORD *)(*((_QWORD *)this + 71) + v33 + 20) = v54[5];
    if ( *((_DWORD *)this + 140) == 1 )
    {
      ChangedUsageList = v55;
      RtlGetDeviceFamilyInfoEnum(0LL, &v48, 0LL);
      if ( v48 == 3 )
      {
        ModifierState.0 = 0;
        HidP_TranslateUsagesToI8042ScanCodes(
          &ChangedUsageList,
          1u,
          HidP_Keyboard_Make,
          &ModifierState,
          HidUsageConverter::HidUsageToScanCode,
          InsertCodesContext);
        KeyboardLayout = GetKeyboardLayout(0);
        v34 = MapVirtualKeyExW(InsertCodesContext[0], 1u, KeyboardLayout);
      }
      else
      {
        v34 = 0;
        v36 = (unsigned __int8 *)&unk_18014FA60;
        while ( *v36 != ChangedUsageList )
        {
          ++v34;
          ++v36;
          if ( v34 >= 0x100 )
            goto LABEL_75;
        }
      }
      goto LABEL_76;
    }
    if ( *((_DWORD *)this + 140) == 2 )
    {
      if ( v55 >= 6u )
LABEL_75:
        v34 = 0;
      else
        v34 = dword_18014FA40[v55];
LABEL_76:
      *(_DWORD *)(*((_QWORD *)this + 71) + v33 + 32) = v34;
      goto LABEL_77;
    }
    *(_DWORD *)(*((_QWORD *)this + 71) + v33 + 32) = 0;
LABEL_77:
    ++v32;
    v33 += 36LL;
    if ( v32 >= *((_DWORD *)this + 136) )
      goto LABEL_78;
  }
  v38 = 120LL;
LABEL_83:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v38,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
    (const char *)(unsigned int)v19);
LABEL_33:
  v6 = v19;
LABEL_90:
  WindowsDeleteString(string);
  return (unsigned int)v6;
}
