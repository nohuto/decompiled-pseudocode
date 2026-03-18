/*
 * XREFs of rimOnPnpArrived @ 0x1C0055150
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0057780 (RIMDirectStartStopDeviceRead.c)
 *     RIMDoOnPnpNotification @ 0x1C00A4EFC (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01352A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0135600 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     RIMOpenDev @ 0x1C00531F0 (RIMOpenDev.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0053400 (RIMDeliverDeviceResetRequest.c)
 *     RIMCloseDev @ 0x1C005353C (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00535D0 (WPP_RECORDER_SF_qqd.c)
 *     RIMHidTLCActive @ 0x1C00589D8 (RIMHidTLCActive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0058A18 (RimDeviceTypeToRimInputType.c)
 *     RIMGetDeviceObjectPointer @ 0x1C005CE10 (RIMGetDeviceObjectPointer.c)
 *     RIMQueryDev @ 0x1C005D938 (RIMQueryDev.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0062114 (RIMStartDeviceSpecificRead.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0062540 (RawInputManagerDeviceObjectReference.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00A5D3C (RIMRegisterForDeviceChangeNotifications.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C00A6790 (WPP_RECORDER_SF_qqS.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     RIMFreeDev @ 0x1C014B7F4 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_dqqS @ 0x1C014F5EC (WPP_RECORDER_SF_dqqS.c)
 *     RIMIsTestSigningOn @ 0x1C015A864 (RIMIsTestSigningOn.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpArrived(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  const union _LARGE_INTEGER *v6; // rcx
  ULONG v7; // ebx
  ACCESS_MASK v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r15d
  __int64 v12; // rdx
  int v13; // edx
  unsigned int v14; // eax
  bool v15; // zf
  __int64 v16; // r8
  __int64 v18; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // r8d
  int v22; // eax
  const WCHAR *v23; // rdx
  int v24; // edx
  int v25; // ecx
  NTSTATUS v26; // ebx
  int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // r8
  PVOID v30; // r15
  __int64 v31; // rdx
  NTSTATUS v32; // eax
  int v33; // r9d
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  void *v38; // rcx
  void *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  void *v43; // rcx
  unsigned int v44; // eax
  int cData; // [rsp+20h] [rbp-89h]
  int cDataa; // [rsp+20h] [rbp-89h]
  PVOID Object; // [rsp+50h] [rbp-59h] BYREF
  PVOID v48; // [rsp+58h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-49h] BYREF
  int v50; // [rsp+68h] [rbp-41h]
  struct _OBJECT_ATTRIBUTES pData; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-9h] BYREF
  PVOID *p_Object; // [rsp+B0h] [rbp+7h]
  __int64 v54; // [rsp+B8h] [rbp+Fh]

  v4 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = &WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 16, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
    v6 = &WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids;
  }
  *(_DWORD *)(v4 + 184) &= ~1u;
  if ( (*(_DWORD *)(v4 + 184) & 0x40) == 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(v4 + 48);
    if ( (_BYTE)v6 != 3 )
    {
      if ( a3 == (void *)-1LL )
      {
        *(_QWORD *)&pData.Length = 48LL;
        v7 = 2;
        pData.ObjectName = (PUNICODE_STRING)(v4 + 208);
        *(_QWORD *)&pData.Attributes = 512LL;
        pData.SecurityQualityOfService = &Handle;
        v8 = 1048577;
        v50 = 257;
        pData.RootDirectory = 0LL;
        pData.SecurityDescriptor = 0LL;
        Handle = (HANDLE)0x20000000CLL;
        if ( (_BYTE)v6 == 2 )
        {
          v8 = 1048579;
          if ( (*(_DWORD *)(v4 + 200) & 0x200) != 0 )
          {
            v7 = (unsigned int)RIMIsTestSigningOn(v6, 512LL) != 0 ? 3 : 0;
          }
          else
          {
            v18 = *(_QWORD *)(v4 + 480);
            if ( !v18 || *(_DWORD *)(v18 + 24) == 6 )
            {
              v7 = 3;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qqS((_DWORD)v6, 512, (_DWORD)a3, 20, cData, (char)a1, v4, *(_QWORD *)(v4 + 216));
            }
          }
        }
        v11 = RIMOpenDev(v4, &pData, v8, v7);
      }
      else
      {
        v11 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
        *(_QWORD *)(v4 + 232) = Handle;
        if ( v11 < 0 )
          goto LABEL_67;
        *(_DWORD *)(v4 + 184) |= 0x10000u;
        *(_QWORD *)(v4 + 224) = a3;
      }
      if ( v11 < 0 )
        goto LABEL_67;
      if ( *(_BYTE *)(v4 + 48) != 2 )
        v11 = RIMQueryDev(a1, v4);
      if ( v11 < 0 )
        goto LABEL_67;
      if ( (*(_DWORD *)(v4 + 184) & 0x20) == 0 && !*(_QWORD *)(v4 + 248) )
      {
        v12 = a1[15];
        if ( !v12 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, 0LL, v10);
          v12 = a1[15];
        }
        cData = v4 + 248;
        v11 = RIMRegisterForDeviceChangeNotifications(v4, v12, v10, v4);
        if ( v11 < 0 )
          goto LABEL_67;
        v11 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
      }
      if ( v11 >= 0 )
      {
        RIMDeliverDeviceResetRequest((char *)v4);
        v14 = *(_DWORD *)(v4 + 184) & 0xFFFFFBFF;
        v15 = *(_BYTE *)(v4 + 48) == 2;
        *(_DWORD *)(v4 + 184) = v14;
        if ( !v15
          || (v19 = *(_DWORD *)(v4 + 200), (v19 & 0x80u) != 0)
          || (v19 & 0x100) != 0
          || (v19 & 0x200) != 0
          || (v14 & 0x4000) != 0
          || (unsigned int)RIMHidTLCActive(*(_QWORD *)(v4 + 472)) )
        {
          if ( !a1[80] )
          {
            RIMLockExclusive((__int64)(a1 + 71));
            RIMStartDeviceSpecificRead(a1, v4, v16);
            a1[72] = 0LL;
            ExReleasePushLockExclusiveEx(a1 + 71, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqS(v20, v13, v21, 21, cData, (char)a1, v4, *(_QWORD *)(v4 + 216));
          RIMCloseDev(v4);
          if ( *(_QWORD *)(v4 + 248)
            && hProvider > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            v22 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
            v23 = *(const WCHAR **)(v4 + 216);
            LODWORD(Object) = v22;
            pData.SecurityDescriptor = &Object;
            pData.SecurityQualityOfService = (PVOID)4;
            TlgCreateWsz(&pDesc, v23);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E32CB, 0LL, 0LL, 4u, (EVENT_DATA_DESCRIPTOR *)&pData);
          }
        }
LABEL_24:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v13,
            1,
            22,
            (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
            (char)a1,
            v4,
            v11);
        }
        return (unsigned int)v11;
      }
LABEL_67:
      v39 = *(void **)(v4 + 248);
      LODWORD(Object) = v11;
      if ( v39 )
      {
        v11 = IoUnregisterPlugPlayNotification(v39);
        if ( v11 < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42);
        v43 = *(void **)(v4 + 32);
        *(_QWORD *)(v4 + 248) = 0LL;
        ObfDereferenceObject(v43);
      }
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&pData.SecurityDescriptor, *(LPCWSTR *)(v4 + 216));
        v44 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
        pDesc.Ptr = (ULONGLONG)&Handle;
        p_Object = &Object;
        Handle = (HANDLE)v44;
        *(_QWORD *)&pDesc.Size = 8LL;
        v54 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E327A, 0LL, 0LL, 5u, (EVENT_DATA_DESCRIPTOR *)&pData);
      }
      RIMCloseDev(v4);
      RIMFreeDev(a1, v4);
      LOBYTE(v4) = 0;
      goto LABEL_24;
    }
    v26 = RIMGetDeviceObjectPointer(
            (int)v4 + 208,
            a2,
            (_DWORD)a3,
            (unsigned int)&Handle,
            (__int64)&v48,
            (__int64)&Object);
    if ( v26 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v33 = 19;
    }
    else
    {
      ObfReferenceObject(Object);
      v30 = v48;
      *(_QWORD *)(v4 + 232) = v48;
      v31 = a1[15];
      if ( !v31 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, 0LL, v29);
        v31 = a1[15];
      }
      cDataa = v4 + 248;
      v32 = RIMRegisterForDeviceChangeNotifications(v4, v31, v29, v4);
      *(_QWORD *)(v4 + 232) = 0LL;
      v26 = v32;
      ObfDereferenceObject(v30);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      if ( v26 >= 0 )
      {
        v26 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
LABEL_54:
        if ( v26 < 0 )
        {
          v34 = *(void **)(v4 + 248);
          if ( v34 )
          {
            v26 = IoUnregisterPlugPlayNotification(v34);
            if ( v26 < 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
            v38 = *(void **)(v4 + 32);
            *(_QWORD *)(v4 + 248) = 0LL;
            ObfDereferenceObject(v38);
          }
          RIMCloseDev(v4);
          RIMFreeDev(a1, v4);
        }
        return (unsigned int)v26;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v33 = 18;
    }
    WPP_RECORDER_SF_dqqS(v25, v24, v27, v33, cDataa, v26, (char)a1, v4, *(_QWORD *)(v4 + 216));
    goto LABEL_54;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      (_DWORD)gRimLog,
      a2,
      1,
      17,
      (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
      (char)a1,
      v4,
      0);
  }
  return 0LL;
}
