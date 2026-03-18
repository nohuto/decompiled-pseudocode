/*
 * XREFs of RIMUpdateMonitorQuirk @ 0x1C0107200
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     RIMGetPointerDevicePDO @ 0x1C0054AB0 (RIMGetPointerDevicePDO.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00EF940 (RIMGetDeviceObjectPointer.c)
 *     RIMIsRunningOnMobile @ 0x1C00F2610 (RIMIsRunningOnMobile.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall RIMUpdateMonitorQuirk(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  int v16; // r15d
  int v17; // r12d
  int v18; // r14d
  int v19; // edi
  int v20; // eax
  unsigned int v21; // eax
  const GUID *v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // edi
  unsigned __int16 *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  PVOID v30; // r15
  struct _DEVICE_OBJECT *v31; // rdi
  int v32; // eax
  PVOID v33; // rsi
  int v34; // eax
  const GUID *v35; // r9
  unsigned int v36; // ecx
  bool v37; // zf
  __int64 v39; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  BOOL v41; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+4Ch] [rbp-BCh] BYREF
  int v43; // [rsp+50h] [rbp-B8h] BYREF
  int v44; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v47; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  PVOID v49; // [rsp+78h] [rbp-90h] BYREF
  int v50; // [rsp+80h] [rbp-88h] BYREF
  int v51; // [rsp+84h] [rbp-84h] BYREF
  int v52; // [rsp+88h] [rbp-80h] BYREF
  int v53; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v54; // [rsp+90h] [rbp-78h] BYREF
  int v55; // [rsp+94h] [rbp-74h] BYREF
  int v56; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v60; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD *v61; // [rsp+118h] [rbp+10h]
  __int64 v62; // [rsp+120h] [rbp+18h]
  __int64 v63; // [rsp+128h] [rbp+20h]
  _DWORD v64[2]; // [rsp+130h] [rbp+28h] BYREF
  int *v65; // [rsp+138h] [rbp+30h]
  __int64 v66; // [rsp+140h] [rbp+38h]
  __int64 *v67; // [rsp+148h] [rbp+40h]
  __int64 v68; // [rsp+150h] [rbp+48h]
  int *v69; // [rsp+158h] [rbp+50h]
  __int64 v70; // [rsp+160h] [rbp+58h]
  __int64 *v71; // [rsp+168h] [rbp+60h]
  __int64 v72; // [rsp+170h] [rbp+68h]
  int *v73; // [rsp+178h] [rbp+70h]
  __int64 v74; // [rsp+180h] [rbp+78h]
  int *v75; // [rsp+188h] [rbp+80h]
  __int64 v76; // [rsp+190h] [rbp+88h]
  int *v77; // [rsp+198h] [rbp+90h]
  __int64 v78; // [rsp+1A0h] [rbp+98h]
  int *v79; // [rsp+1A8h] [rbp+A0h]
  __int64 v80; // [rsp+1B0h] [rbp+A8h]
  int *v81; // [rsp+1B8h] [rbp+B0h]
  __int64 v82; // [rsp+1C0h] [rbp+B8h]
  int *v83; // [rsp+1C8h] [rbp+C0h]
  __int64 v84; // [rsp+1D0h] [rbp+C8h]
  int *v85; // [rsp+1D8h] [rbp+D0h]
  __int64 v86; // [rsp+1E0h] [rbp+D8h]
  HANDLE *p_Handle; // [rsp+1E8h] [rbp+E0h]
  __int64 v88; // [rsp+1F0h] [rbp+E8h]
  BOOL *v89; // [rsp+1F8h] [rbp+F0h]
  __int64 v90; // [rsp+200h] [rbp+F8h]
  PVOID *v91; // [rsp+208h] [rbp+100h]
  __int64 v92; // [rsp+210h] [rbp+108h]
  PVOID *p_Object; // [rsp+218h] [rbp+110h]
  __int64 v94; // [rsp+220h] [rbp+118h]
  PVOID *v95; // [rsp+228h] [rbp+120h]
  __int64 v96; // [rsp+230h] [rbp+128h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+238h] [rbp+130h] BYREF
  int *v98; // [rsp+258h] [rbp+150h]
  __int64 v99; // [rsp+260h] [rbp+158h]
  _BYTE KeyValueInformation[4]; // [rsp+268h] [rbp+160h] BYREF
  int v101; // [rsp+26Ch] [rbp+164h]
  int v102; // [rsp+274h] [rbp+16Ch]

  LODWORD(v45) = a4;
  Object = 0LL;
  v49 = 0LL;
  Handle = 0LL;
  v47 = 0LL;
  KeyHandle = 0LL;
  v41 = 0;
  v16 = -1;
  LODWORD(v39) = -1;
  v17 = -1;
  v18 = -1;
  v44 = a3;
  v19 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\LegacyTouchScaling");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_11;
  RtlInitUnicodeString(&ValueName, L"ForceOverride");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength) >= 0
    && v101 == 4 )
  {
    v20 = *(_DWORD *)(a1 + 184);
    v21 = v102 ? v20 | 0x2000000 : v20 & 0xFDFFFFFF;
    *(_DWORD *)(a1 + 184) = v21;
    v19 = 1;
    if ( dword_1C019A200 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A200, 0x400000000000uLL) )
      {
        v43 = (int)v22;
        v98 = &v43;
        v99 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C019A200, &unk_1C0178B85, 0LL, v22, 3u, &pData);
      }
    }
  }
  LOBYTE(v23) = ZwClose(KeyHandle);
  if ( !v19 )
  {
LABEL_11:
    v23 = RIMIsRunningOnMobile();
    if ( !v23 || (v23 = *(_DWORD *)(a2 + 24) - 1, (unsigned int)v23 > 3) )
    {
      *(_DWORD *)(a1 + 184) &= ~0x2000000u;
      return v23;
    }
    v26 = a11;
    v41 = a11 == 51;
    if ( a11 == 19 && a12 == 14 && (a7 == 1080 && a8 == 1920 || a7 == 720 && a8 == 1280) )
      v41 = 1;
    v27 = (unsigned __int16 *)(a1 + 208);
    if ( (int)RIMGetDeviceObjectPointer(
                (struct _UNICODE_STRING *)(a1 + 208),
                v24,
                v25,
                &Handle,
                &v49,
                (PDEVICE_OBJECT *)&Object) >= 0 )
    {
      v30 = v49;
      if ( !v49 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
      v31 = (struct _DEVICE_OBJECT *)Object;
      if ( !Object )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
      ObfReferenceObject(v31);
      v32 = RIMGetPointerDevicePDO(v31, &v47);
      v33 = v47;
      if ( v32 >= 0 && IoOpenDeviceRegistryKey(**((PDEVICE_OBJECT **)v47 + 8), 1u, 0x20019u, &KeyHandle) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"EnhancedPowerManagementNoDelay");
        if ( ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x400u,
               &ResultLength) >= 0
          && v101 == 4 )
        {
          v34 = -1;
          if ( v102 )
            v34 = 1;
          LODWORD(v39) = v34;
        }
        RtlInitUnicodeString(&ValueName, L"LegacyTouchScaling");
        if ( ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x400u,
               &ResultLength) >= 0
          && v101 == 4 )
        {
          v17 = v102 != 0;
        }
        ZwClose(KeyHandle);
      }
      ObfDereferenceObject(v33);
      ZwClose(Handle);
      ObfDereferenceObject(v30);
      ObfDereferenceObject(v31);
      v26 = a11;
      v27 = (unsigned __int16 *)(a1 + 208);
      v16 = v39;
    }
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\LegacyTouchScaling");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v23 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v23 >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Enable");
      if ( ZwQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength) >= 0
        && v101 == 4 )
      {
        v18 = v102 != 0;
      }
      LOBYTE(v23) = ZwClose(KeyHandle);
    }
    if ( dword_1C019A200 > 5u )
    {
      LOBYTE(v23) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A200, 0x400000000000uLL);
      if ( (_BYTE)v23 )
      {
        v62 = 2LL;
        v61 = v64;
        v63 = *((_QWORD *)v27 + 1);
        v64[0] = *v27;
        v65 = &v44;
        v67 = &v45;
        v43 = a5;
        v69 = &v43;
        LODWORD(v39) = a6;
        v71 = &v39;
        v50 = a7;
        v73 = &v50;
        v51 = a9;
        v75 = &v51;
        v77 = &v52;
        v53 = a12;
        v79 = &v53;
        v81 = &v54;
        v55 = a10;
        v83 = &v55;
        v56 = a13;
        v85 = &v56;
        LODWORD(Handle) = a14;
        p_Handle = &Handle;
        v89 = &v41;
        v91 = &v47;
        p_Object = &Object;
        v95 = &v49;
        v64[1] = 0;
        v66 = 4LL;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v74 = 4LL;
        v76 = 4LL;
        v52 = v26;
        v78 = 4LL;
        v80 = 4LL;
        v54 = a8;
        v82 = 4LL;
        v84 = 4LL;
        v86 = 4LL;
        v88 = 4LL;
        v90 = 4LL;
        LODWORD(v47) = v16;
        v92 = 4LL;
        LODWORD(Object) = v17;
        v94 = 4LL;
        LODWORD(v49) = v18;
        v96 = 4LL;
        LOBYTE(v23) = TlgWrite((TraceLoggingHProvider)&dword_1C019A200, &unk_1C0178A3F, 0LL, v35, 0x14u, &v60);
      }
    }
    v36 = *(_DWORD *)(a1 + 184) & 0xFDFFFFFF;
    *(_DWORD *)(a1 + 184) = v36;
    if ( v17 != -1 )
    {
      v23 = v36 | 0x2000000;
      v37 = v17 == 0;
LABEL_49:
      if ( v37 )
        v23 = v36;
      *(_DWORD *)(a1 + 184) = v23;
      return v23;
    }
    if ( v18 != -1 )
    {
      v23 = v36 | 0x2000000;
      v37 = v18 == 0;
      goto LABEL_49;
    }
    if ( v41 )
      *(_DWORD *)(a1 + 184) = v36 | 0x2000000;
  }
  return v23;
}
