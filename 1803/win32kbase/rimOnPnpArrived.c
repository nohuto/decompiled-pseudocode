/*
 * XREFs of rimOnPnpArrived @ 0x1C00FCE28
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C000F090 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C00E0300 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C00E0610 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 *     RIMUpdateSecondaryRim @ 0x1C00FB5A4 (RIMUpdateSecondaryRim.c)
 * Callees:
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0005D80 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     RIMHidTLCActive @ 0x1C000F2B8 (RIMHidTLCActive.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0055980 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00EF940 (RIMGetDeviceObjectPointer.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C00F1DE0 (RawInputManagerDeviceObjectReference.c)
 *     RIMIsTestSigningOn @ 0x1C00F2630 (RIMIsTestSigningOn.c)
 *     RIMCloseDev @ 0x1C00F74C0 (RIMCloseDev.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     RIMOpenDev @ 0x1C00F7DB0 (RIMOpenDev.c)
 *     RIMQueryDev @ 0x1C00F80CC (RIMQueryDev.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00FB0DC (RIMRegisterForDeviceChangeNotifications.c)
 *     WPP_RECORDER_SF_DqqS @ 0x1C00FBC30 (WPP_RECORDER_SF_DqqS.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00FC1AC (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C00FC300 (WPP_RECORDER_SF_qqS.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00FDADC (RIMStartDeviceSpecificRead.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C01094F8 (RIMDeliverDeviceResetRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpArrived(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // cl
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID v14; // r15
  struct _DRIVER_OBJECT *v15; // rdx
  int v16; // eax
  unsigned __int16 v17; // r9
  void *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  CompositionObject *v21; // rcx
  ULONG v22; // esi
  ACCESS_MASK v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _DRIVER_OBJECT *v27; // rdx
  __int64 v28; // rdx
  unsigned int v29; // eax
  bool v30; // zf
  int v31; // ecx
  __int64 v32; // r8
  int v33; // eax
  const WCHAR *v34; // rdx
  LPCGUID v35; // r9
  void *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  CompositionObject *v39; // rcx
  unsigned int v40; // eax
  LPCGUID v41; // r9
  int cData; // [rsp+20h] [rbp-79h]
  int cDataa; // [rsp+20h] [rbp-79h]
  __int64 v45; // [rsp+38h] [rbp-61h]
  PVOID Object; // [rsp+50h] [rbp-49h] BYREF
  PVOID v47; // [rsp+58h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-39h] BYREF
  __int16 v49; // [rsp+68h] [rbp-31h]
  struct _OBJECT_ATTRIBUTES pData; // [rsp+70h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+7h] BYREF
  PVOID *p_Object; // [rsp+B0h] [rbp+17h]
  __int64 v53; // [rsp+B8h] [rbp+1Fh]

  v4 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x10u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  v8 = *(_BYTE *)(v4 + 48);
  *(_DWORD *)(v4 + 184) &= ~1u;
  if ( v8 != 3 )
  {
    if ( a3 == (void *)-1LL )
    {
      pData.Length = 48;
      v22 = 2;
      pData.ObjectName = (PUNICODE_STRING)(v4 + 208);
      pData.RootDirectory = 0LL;
      pData.SecurityQualityOfService = &Handle;
      v23 = 1048577;
      pData.Attributes = 512;
      pData.SecurityDescriptor = 0LL;
      Handle = (HANDLE)0x20000000CLL;
      v49 = 257;
      if ( v8 == 2 )
      {
        v23 = 1048579;
        if ( (*(_DWORD *)(v4 + 200) & 0x200) != 0 )
        {
          v22 = (unsigned int)RIMIsTestSigningOn() != 0 ? 3 : 0;
        }
        else
        {
          v24 = *(_QWORD *)(v4 + 480);
          if ( !v24 || *(_DWORD *)(v24 + 24) == 6 )
            v22 = 3;
          else
            WPP_RECORDER_SF_qqS(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v6,
              v7,
              0x13u,
              cData,
              (char)a1,
              v4,
              *(_QWORD *)(v4 + 216));
        }
      }
      v10 = RIMOpenDev(v4, &pData, v23, v22);
    }
    else
    {
      v10 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
      *(_QWORD *)(v4 + 232) = Handle;
      if ( v10 < 0 )
        goto LABEL_52;
      *(_DWORD *)(v4 + 184) |= 0x10000u;
      *(_QWORD *)(v4 + 224) = a3;
    }
    if ( v10 < 0 )
      goto LABEL_52;
    if ( *(_BYTE *)(v4 + 48) != 2 )
      v10 = RIMQueryDev((__int64)a1, v4);
    if ( v10 < 0 )
      goto LABEL_52;
    if ( (*(_DWORD *)(v4 + 184) & 0x20) == 0 && !*(_QWORD *)(v4 + 248) )
    {
      v27 = (struct _DRIVER_OBJECT *)a1[14];
      if ( !v27 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, 0LL);
        v27 = (struct _DRIVER_OBJECT *)a1[14];
      }
      v10 = RIMRegisterForDeviceChangeNotifications(v4, v27, v26, (void *)v4, (PVOID *)(v4 + 248));
      if ( v10 < 0 )
        goto LABEL_52;
      v10 = RawInputManagerDeviceObjectReference(*(void **)(v4 + 32));
    }
    if ( v10 >= 0 )
    {
      RIMDeliverDeviceResetRequest((PVOID)v4);
      v29 = *(_DWORD *)(v4 + 184) & 0xFFFFFDFF;
      v30 = *(_BYTE *)(v4 + 48) == 2;
      *(_DWORD *)(v4 + 184) = v29;
      if ( !v30
        || (v31 = *(_DWORD *)(v4 + 200), (v31 & 0x80u) != 0)
        || (v31 & 0x100) != 0
        || (v31 & 0x200) != 0
        || (v29 & 0x4000) != 0
        || (unsigned int)RIMHidTLCActive(*(_DWORD **)(v4 + 472)) )
      {
        if ( !a1[78] )
        {
          RIMLockExclusive((__int64)(a1 + 69));
          RIMStartDeviceSpecificRead(a1, v4);
          CInpPushLock::UnLockExclusive((CInpPushLock *)(a1 + 69));
        }
      }
      else
      {
        WPP_RECORDER_SF_qqS(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v28,
          v32,
          0x14u,
          cData,
          (char)a1,
          v4,
          *(_QWORD *)(v4 + 216));
        RIMCloseDev(v4);
        if ( *(_QWORD *)(v4 + 248)
          && hProvider > 5u
          && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          v33 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
          v34 = *(const WCHAR **)(v4 + 216);
          LODWORD(Object) = v33;
          pData.SecurityDescriptor = &Object;
          pData.SecurityQualityOfService = (PVOID)4;
          TlgCreateWsz(&pDesc, v34);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0178787, 0LL, v35, 4u, (EVENT_DATA_DESCRIPTOR *)&pData);
        }
      }
LABEL_60:
      LODWORD(v45) = v10;
      WPP_RECORDER_SF_qqD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v28,
        0x14u,
        0x15u,
        (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
        a1,
        v4,
        v45);
      return (unsigned int)v10;
    }
LABEL_52:
    v36 = *(void **)(v4 + 248);
    LODWORD(Object) = v10;
    if ( v36 )
    {
      v10 = IoUnregisterPlugPlayNotification(v36);
      if ( v10 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37);
      v39 = *(CompositionObject **)(v4 + 32);
      *(_QWORD *)(v4 + 248) = 0LL;
      CompositionObject::Release(v39);
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&pData.SecurityDescriptor, *(LPCWSTR *)(v4 + 216));
      v40 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
      pDesc.Ptr = (ULONGLONG)&Handle;
      p_Object = &Object;
      Handle = (HANDLE)v40;
      *(_QWORD *)&pDesc.Size = 8LL;
      v53 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0178736, 0LL, v41, 5u, (EVENT_DATA_DESCRIPTOR *)&pData);
    }
    RIMCloseDev(v4);
    RIMFreeDev((__int64)a1, v4);
    v4 = 0LL;
    goto LABEL_60;
  }
  v10 = RIMGetDeviceObjectPointer(
          (struct _UNICODE_STRING *)(v4 + 208),
          v6,
          v7,
          &Handle,
          &v47,
          (PDEVICE_OBJECT *)&Object);
  if ( v10 < 0 )
  {
    v17 = 18;
  }
  else
  {
    ObfReferenceObject(Object);
    v14 = v47;
    *(_QWORD *)(v4 + 232) = v47;
    v15 = (struct _DRIVER_OBJECT *)a1[14];
    if ( !v15 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, 0LL);
      v15 = (struct _DRIVER_OBJECT *)a1[14];
    }
    v16 = RIMRegisterForDeviceChangeNotifications(v4, v15, v13, (void *)v4, (PVOID *)(v4 + 248));
    *(_QWORD *)(v4 + 232) = 0LL;
    v10 = v16;
    ObfDereferenceObject(v14);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
    if ( v10 >= 0 )
    {
      v10 = RawInputManagerDeviceObjectReference(*(void **)(v4 + 32));
      goto LABEL_12;
    }
    v17 = 17;
  }
  WPP_RECORDER_SF_DqqS(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v9,
    v11,
    v17,
    cDataa,
    v10,
    (char)a1,
    v4,
    *(const wchar_t **)(v4 + 216));
LABEL_12:
  if ( v10 < 0 )
  {
    v18 = *(void **)(v4 + 248);
    if ( v18 )
    {
      v10 = IoUnregisterPlugPlayNotification(v18);
      if ( v10 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
      v21 = *(CompositionObject **)(v4 + 32);
      *(_QWORD *)(v4 + 248) = 0LL;
      CompositionObject::Release(v21);
    }
    RIMCloseDev(v4);
    RIMFreeDev((__int64)a1, v4);
  }
  return (unsigned int)v10;
}
