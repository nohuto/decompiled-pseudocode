/*
 * XREFs of rimOnPnpArrived @ 0x1C004D7FC
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0050200 (RIMDirectStartStopDeviceRead.c)
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C010CCC0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C010CFE0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     RIMOpenDev @ 0x1C0049C08 (RIMOpenDev.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0049D94 (WPP_RECORDER_SF_qqD.c)
 *     RIMHidTLCActive @ 0x1C0051510 (RIMHidTLCActive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051590 (RIMGetDeviceObjectPointer.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0052780 (RIMDeliverDeviceResetRequest.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     RIMQueryDev @ 0x1C0088FEC (RIMQueryDev.c)
 *     RIMStartDeviceSpecificRead @ 0x1C008DF48 (RIMStartDeviceSpecificRead.c)
 *     RIMCloseDev @ 0x1C0091218 (RIMCloseDev.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0092F58 (RIMRegisterForDeviceChangeNotifications.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C009365C (WPP_RECORDER_SF_qqS.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_DqqS @ 0x1C0125128 (WPP_RECORDER_SF_DqqS.c)
 *     RIMIsTestSigningOn @ 0x1C012FA9C (RIMIsTestSigningOn.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpArrived(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rcx
  ULONG v9; // ebx
  ACCESS_MASK v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  bool v18; // zf
  __int64 v19; // r8
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  NTSTATUS v25; // ebx
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // r8
  PVOID v29; // r15
  __int64 v30; // rdx
  NTSTATUS v31; // eax
  int v32; // r9d
  void *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  const WCHAR *v38; // rdx
  void *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // eax
  int cData; // [rsp+20h] [rbp-79h]
  int cDataa; // [rsp+20h] [rbp-79h]
  __int64 v46; // [rsp+38h] [rbp-61h]
  PVOID Object; // [rsp+50h] [rbp-49h] BYREF
  PVOID v48; // [rsp+58h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-39h] BYREF
  __int16 v50; // [rsp+68h] [rbp-31h]
  struct _OBJECT_ATTRIBUTES pData; // [rsp+70h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+7h] BYREF
  PVOID *p_Object; // [rsp+B0h] [rbp+17h]
  int v54; // [rsp+B8h] [rbp+1Fh]
  int v55; // [rsp+BCh] [rbp+23h]

  v4 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x10u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  *(_DWORD *)(v4 + 184) &= ~1u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_InputVirtualization__private_propertyCache,
    16291462,
    (unsigned int)&unk_1C01933C8,
    0,
    3);
  LOBYTE(v8) = *(_BYTE *)(v4 + 48);
  if ( (_BYTE)v8 != 3 )
  {
    if ( a3 == (void *)-1LL )
    {
      pData.RootDirectory = 0LL;
      pData.SecurityDescriptor = 0LL;
      v9 = 2;
      pData.ObjectName = (PUNICODE_STRING)(v4 + 208);
      pData.SecurityQualityOfService = &Handle;
      v10 = 1048577;
      pData.Length = 48;
      pData.Attributes = 512;
      Handle = (HANDLE)0x20000000CLL;
      v50 = 257;
      if ( (_BYTE)v8 == 2 )
      {
        v10 = 1048579;
        if ( (*(_DWORD *)(v4 + 200) & 0x200) != 0 )
        {
          v9 = (unsigned int)RIMIsTestSigningOn(v8, 512LL) != 0 ? 3 : 0;
        }
        else
        {
          v21 = *(_QWORD *)(v4 + 480);
          if ( !v21 || *(_DWORD *)(v21 + 24) == 6 )
            v9 = 3;
          else
            WPP_RECORDER_SF_qqS(v8, 512, v7, 20, cData, (char)a1, v4, *(_QWORD *)(v4 + 216));
        }
      }
      v13 = RIMOpenDev(v4, &pData, v10, v9);
    }
    else
    {
      v13 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
      *(_QWORD *)(v4 + 232) = Handle;
      if ( v13 < 0 )
        goto LABEL_54;
      *(_DWORD *)(v4 + 184) |= 0x10000u;
      *(_QWORD *)(v4 + 224) = a3;
    }
    if ( v13 < 0 )
      goto LABEL_54;
    if ( *(_BYTE *)(v4 + 48) != 2 )
      v13 = RIMQueryDev(a1, v4);
    if ( v13 < 0 )
      goto LABEL_54;
    if ( (*(_DWORD *)(v4 + 184) & 0x20) == 0 && !*(_QWORD *)(v4 + 248) )
    {
      v14 = a1[15];
      if ( !v14 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, 0LL, v12);
        v14 = a1[15];
      }
      cData = v4 + 248;
      v13 = RIMRegisterForDeviceChangeNotifications(v4, v14, v12, v4);
      if ( v13 < 0 )
        goto LABEL_54;
      v13 = ObReferenceObjectByPointer(*(PVOID *)(v4 + 32), 3u, ExRawInputManagerObjectType, 0);
    }
    if ( v13 >= 0 )
    {
      RIMDeliverDeviceResetRequest((PVOID)v4);
      v17 = *(_DWORD *)(v4 + 184) & 0xFFFFFBFF;
      v18 = *(_BYTE *)(v4 + 48) == 2;
      *(_DWORD *)(v4 + 184) = v17;
      if ( !v18
        || (v16 = *(unsigned int *)(v4 + 200), (v16 & 0x80u) != 0LL)
        || (v16 & 0x100) != 0
        || (v16 & 0x200) != 0
        || (v17 & 0x4000) != 0
        || (unsigned int)RIMHidTLCActive(*(_QWORD *)(v4 + 472)) )
      {
        if ( !a1[80] )
        {
          RIMLockExclusive((__int64)(a1 + 71));
          RIMStartDeviceSpecificRead(a1, v4, v19);
          a1[72] = 0LL;
          ExReleasePushLockExclusiveEx(a1 + 71, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        WPP_RECORDER_SF_qqS(v16, v15, v22, 21, cData, (char)a1, v4, *(_QWORD *)(v4 + 216));
        RIMCloseDev(v4);
        if ( hProvider > 5u
          && *(_QWORD *)(v4 + 248)
          && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          v37 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
          v38 = *(const WCHAR **)(v4 + 216);
          LODWORD(Object) = v37;
          pData.SecurityDescriptor = &Object;
          pData.SecurityQualityOfService = (PVOID)4;
          TlgCreateWsz(&pDesc, v38);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019F390, 0LL, 0LL, 4u, (EVENT_DATA_DESCRIPTOR *)&pData);
        }
      }
LABEL_21:
      LODWORD(v46) = v13;
      WPP_RECORDER_SF_qqD(
        v16,
        v15,
        0x15u,
        0x16u,
        (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
        a1,
        v4,
        v46);
      return (unsigned int)v13;
    }
LABEL_54:
    v39 = *(void **)(v4 + 248);
    LODWORD(Object) = v13;
    if ( v39 )
    {
      v13 = IoUnregisterPlugPlayNotification(v39);
      if ( v13 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42);
      *(_QWORD *)(v4 + 248) = 0LL;
      ObfDereferenceObject(*(PVOID *)(v4 + 32));
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&pData.SecurityDescriptor, *(LPCWSTR *)(v4 + 216));
      v43 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
      pDesc.Reserved = 0;
      v55 = 0;
      pDesc.Ptr = (ULONGLONG)&Handle;
      p_Object = &Object;
      Handle = (HANDLE)v43;
      pDesc.Size = 8;
      v54 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019F33F, 0LL, 0LL, 5u, (EVENT_DATA_DESCRIPTOR *)&pData);
    }
    RIMCloseDev(v4);
    RIMFreeDev(a1, v4);
    v4 = 0LL;
    goto LABEL_21;
  }
  v25 = RIMGetDeviceObjectPointer((int)v4 + 208, v6, v7, (unsigned int)&Handle, (__int64)&v48, (__int64)&Object);
  if ( v25 < 0 )
  {
    v32 = 19;
    goto LABEL_41;
  }
  ObfReferenceObject(Object);
  v29 = v48;
  *(_QWORD *)(v4 + 232) = v48;
  v30 = a1[15];
  if ( !v30 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, 0LL, v28);
    v30 = a1[15];
  }
  cDataa = v4 + 248;
  v31 = RIMRegisterForDeviceChangeNotifications(v4, v30, v28, v4);
  *(_QWORD *)(v4 + 232) = 0LL;
  v25 = v31;
  ObfDereferenceObject(v29);
  ObfDereferenceObject(Object);
  ZwClose(Handle);
  if ( v25 < 0 )
  {
    v32 = 18;
LABEL_41:
    WPP_RECORDER_SF_DqqS(v24, v23, v26, v32, cDataa, v25, (char)a1, v4, *(_QWORD *)(v4 + 216));
    goto LABEL_42;
  }
  v25 = ObReferenceObjectByPointer(*(PVOID *)(v4 + 32), 3u, ExRawInputManagerObjectType, 0);
LABEL_42:
  if ( v25 < 0 )
  {
    v33 = *(void **)(v4 + 248);
    if ( v33 )
    {
      v25 = IoUnregisterPlugPlayNotification(v33);
      if ( v25 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36);
      *(_QWORD *)(v4 + 248) = 0LL;
      ObfDereferenceObject(*(PVOID *)(v4 + 32));
    }
    RIMCloseDev(v4);
    RIMFreeDev(a1, v4);
  }
  return (unsigned int)v25;
}
