/*
 * XREFs of DpiInitializeEx @ 0x1C017A894
 * Callers:
 *     DpiKmdDodInitialize @ 0x1C0022610 (DpiKmdDodInitialize.c)
 *     DpiInitializeInternal @ 0x1C00226A8 (DpiInitializeInternal.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018EF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiGetDriverDataSizeFromVersion @ 0x1C017B09C (DpiGetDriverDataSizeFromVersion.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200390 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

__int64 __fastcall DpiInitializeEx(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PCUNICODE_STRING SourceString,
        unsigned int *Src,
        __int64 a4,
        char a5)
{
  char v9; // r12
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rdx
  int DriverDataSizeFromVersion; // eax
  _WORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rcx
  PVOID *v35; // rdx
  int v36; // [rsp+20h] [rbp-91h]
  PVOID DriverObjectExtension; // [rsp+30h] [rbp-81h] BYREF
  size_t Size; // [rsp+38h] [rbp-79h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+40h] [rbp-71h] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-49h] BYREF
  char v43[8]; // [rsp+98h] [rbp-19h] BYREF
  _OWORD v44[2]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v45; // [rsp+C0h] [rbp+Fh]

  v44[0] = *(_OWORD *)L"\\Driver\\IndirectKmd";
  v45 = *(_QWORD *)L"Kmd";
  DriverObjectExtension = 0LL;
  v9 = 0;
  *(_QWORD *)&String1.Length = 2621478LL;
  v44[1] = *(_OWORD *)L"IndirectKmd";
  String1.Buffer = (wchar_t *)v44;
  v10 = IoAllocateDriverObjectExtension(
          ClientIdentificationAddress,
          ClientIdentificationAddress,
          0x558u,
          &DriverObjectExtension);
  v14 = v10;
  if ( v10 < 0 )
    goto LABEL_22;
  *((_DWORD *)DriverObjectExtension + 4) = 1953656900;
  *((_DWORD *)DriverObjectExtension + 5) = 1;
  *((_DWORD *)DriverObjectExtension + 6) = 2;
  *((_QWORD *)DriverObjectExtension + 4) = ClientIdentificationAddress;
  *((_BYTE *)DriverObjectExtension + 132) = a5;
  *((_BYTE *)DriverObjectExtension + 134) = 0;
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
    *((_BYTE *)DriverObjectExtension + 134) = 1;
  if ( Src )
  {
    *((_BYTE *)DriverObjectExtension + 133) = 0;
    v15 = *Src;
    *((_DWORD *)DriverObjectExtension + 7) = v15;
    DriverDataSizeFromVersion = DpiGetDriverDataSizeFromVersion(0LL, v15, 1224LL, &Size);
    v14 = DriverDataSizeFromVersion;
    if ( DriverDataSizeFromVersion >= 0 )
    {
      memmove((char *)DriverObjectExtension + 136, Src, (unsigned int)Size);
      *((_QWORD *)DriverObjectExtension + 170) = 0LL;
LABEL_7:
      v17 = DriverObjectExtension;
      goto LABEL_8;
    }
LABEL_22:
    v29 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v29 + 24) = v14;
LABEL_29:
    WdLogEvent5_WdError(v29);
    goto LABEL_11;
  }
  *((_BYTE *)DriverObjectExtension + 133) = 1;
  memset((char *)DriverObjectExtension + 136, 0, 0x4D0uLL);
  *((_DWORD *)DriverObjectExtension + 7) = *(_DWORD *)a4;
  *((_DWORD *)DriverObjectExtension + 34) = *(_DWORD *)a4;
  *((_QWORD *)DriverObjectExtension + 18) = *(_QWORD *)(a4 + 8);
  *((_QWORD *)DriverObjectExtension + 19) = *(_QWORD *)(a4 + 16);
  *((_QWORD *)DriverObjectExtension + 20) = *(_QWORD *)(a4 + 24);
  *((_QWORD *)DriverObjectExtension + 21) = *(_QWORD *)(a4 + 32);
  *((_QWORD *)DriverObjectExtension + 22) = *(_QWORD *)(a4 + 40);
  *((_QWORD *)DriverObjectExtension + 23) = *(_QWORD *)(a4 + 48);
  *((_QWORD *)DriverObjectExtension + 24) = *(_QWORD *)(a4 + 56);
  *((_QWORD *)DriverObjectExtension + 25) = *(_QWORD *)(a4 + 64);
  *((_QWORD *)DriverObjectExtension + 26) = *(_QWORD *)(a4 + 72);
  *((_QWORD *)DriverObjectExtension + 27) = *(_QWORD *)(a4 + 80);
  *((_QWORD *)DriverObjectExtension + 28) = *(_QWORD *)(a4 + 88);
  *((_QWORD *)DriverObjectExtension + 29) = *(_QWORD *)(a4 + 96);
  *((_QWORD *)DriverObjectExtension + 30) = *(_QWORD *)(a4 + 104);
  *((_QWORD *)DriverObjectExtension + 31) = *(_QWORD *)(a4 + 112);
  *((_QWORD *)DriverObjectExtension + 32) = *(_QWORD *)(a4 + 120);
  *((_QWORD *)DriverObjectExtension + 33) = *(_QWORD *)(a4 + 128);
  *((_QWORD *)DriverObjectExtension + 34) = *(_QWORD *)(a4 + 136);
  *((_QWORD *)DriverObjectExtension + 46) = *(_QWORD *)(a4 + 144);
  *((_QWORD *)DriverObjectExtension + 47) = *(_QWORD *)(a4 + 152);
  *((_QWORD *)DriverObjectExtension + 48) = *(_QWORD *)(a4 + 160);
  *((_QWORD *)DriverObjectExtension + 51) = *(_QWORD *)(a4 + 168);
  *((_QWORD *)DriverObjectExtension + 52) = *(_QWORD *)(a4 + 176);
  *((_QWORD *)DriverObjectExtension + 54) = *(_QWORD *)(a4 + 184);
  *((_QWORD *)DriverObjectExtension + 55) = *(_QWORD *)(a4 + 192);
  *((_QWORD *)DriverObjectExtension + 56) = *(_QWORD *)(a4 + 200);
  *((_QWORD *)DriverObjectExtension + 58) = *(_QWORD *)(a4 + 208);
  *((_QWORD *)DriverObjectExtension + 59) = *(_QWORD *)(a4 + 216);
  *((_QWORD *)DriverObjectExtension + 60) = *(_QWORD *)(a4 + 224);
  *((_QWORD *)DriverObjectExtension + 61) = *(_QWORD *)(a4 + 232);
  *((_QWORD *)DriverObjectExtension + 63) = *(_QWORD *)(a4 + 240);
  *((_QWORD *)DriverObjectExtension + 87) = *(_QWORD *)(a4 + 248);
  *((_QWORD *)DriverObjectExtension + 170) = *(_QWORD *)(a4 + 256);
  *((_QWORD *)DriverObjectExtension + 92) = *(_QWORD *)(a4 + 264);
  *((_QWORD *)DriverObjectExtension + 93) = *(_QWORD *)(a4 + 272);
  *((_QWORD *)DriverObjectExtension + 94) = *(_QWORD *)(a4 + 280);
  v28 = *(_DWORD *)a4;
  if ( *(_DWORD *)a4 >= 0x3005u )
  {
    *((_QWORD *)DriverObjectExtension + 96) = *(_QWORD *)(a4 + 288);
    v28 = *(_DWORD *)a4;
  }
  if ( v28 < 0x3007 )
    *((_QWORD *)DriverObjectExtension + 63) = 0LL;
  else
    *((_QWORD *)DriverObjectExtension + 65) = *(_QWORD *)(a4 + 296);
  if ( *(_DWORD *)a4 >= 0x3009u )
  {
    *((_QWORD *)DriverObjectExtension + 88) = *(_QWORD *)(a4 + 304);
    *((_QWORD *)DriverObjectExtension + 97) = *(_QWORD *)(a4 + 312);
  }
  v17 = DriverObjectExtension;
  if ( *((_DWORD *)DriverObjectExtension + 7) >= 0x5006u )
  {
    *((_QWORD *)DriverObjectExtension + 118) = *(_QWORD *)(a4 + 328);
    goto LABEL_7;
  }
LABEL_8:
  v17[21] = SourceString->Length + 2;
  *((_WORD *)DriverObjectExtension + 20) = SourceString->Length;
  *((_QWORD *)DriverObjectExtension + 6) = ExAllocatePoolWithTag(
                                             PagedPool,
                                             *((unsigned __int16 *)DriverObjectExtension + 21),
                                             0x74727044u);
  v21 = (void *)*((_QWORD *)DriverObjectExtension + 6);
  if ( !v21 )
  {
    LODWORD(v14) = -1073741801;
    v30 = WdLogNewEntry5_WdLowResource(0LL, v18, v19, v20);
    *(_QWORD *)(v30 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v30);
    goto LABEL_35;
  }
  memset(v21, 0, *((unsigned __int16 *)DriverObjectExtension + 21));
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40), SourceString);
  KeInitializeMutex((PRKMUTEX)((char *)DriverObjectExtension + 72), 0);
  v22 = (char *)DriverObjectExtension + 56;
  *((_QWORD *)DriverObjectExtension + 8) = (char *)DriverObjectExtension + 56;
  *v22 = v22;
  AcquireMiniportListMutex();
  v23 = (_QWORD *)qword_1C00A2780;
  v24 = DriverObjectExtension;
  if ( *(__int64 **)qword_1C00A2780 != &qword_1C00A2778 )
    goto LABEL_39;
  *(_QWORD *)DriverObjectExtension = &qword_1C00A2778;
  v24[1] = v23;
  *v23 = v24;
  qword_1C00A2780 = (__int64)v24;
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
  v9 = 1;
  v26 = WdLogNewEntry5_WdEvent(v25);
  *(_QWORD *)(v26 + 24) = DriverObjectExtension;
  WdLogEvent5_WdEvent(v26);
  ClientIdentificationAddress->MajorFunction[0] = (PDRIVER_DISPATCH)DpiDispatchCreate;
  ClientIdentificationAddress->MajorFunction[27] = (PDRIVER_DISPATCH)DpiDispatchPnp;
  ClientIdentificationAddress->MajorFunction[22] = (PDRIVER_DISPATCH)DpiDispatchPower;
  ClientIdentificationAddress->MajorFunction[14] = (PDRIVER_DISPATCH)DpiDispatchIoctl;
  ClientIdentificationAddress->MajorFunction[15] = (PDRIVER_DISPATCH)DpiDispatchInternalIoctl;
  ClientIdentificationAddress->MajorFunction[23] = (PDRIVER_DISPATCH)&DpiDispatchSystemControl;
  ClientIdentificationAddress->MajorFunction[2] = (PDRIVER_DISPATCH)DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->MajorFunction[18] = (PDRIVER_DISPATCH)DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)DpiAddDevice;
  ClientIdentificationAddress->DriverUnload = (PDRIVER_UNLOAD)DpiDriverUnload;
  if ( (int)KsrGetFirmwareInformation(v43) >= 0 && !qword_1C00A2C28 )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_KsrDisplay__private_propertyCache,
      12075496LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0081BD8,
      1,
      v36);
    CallbackObject = 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
    {
      qword_1C00A2C28 = (__int64)ExRegisterCallback(CallbackObject, DpiKsrCallback, &DpGlobals);
      ObfDereferenceObject(CallbackObject);
      byte_1C00A2C30 = 0;
    }
    if ( !qword_1C00A2C28 )
    {
      v29 = WdLogNewEntry5_WdError(v32, v31, v33);
      *(_QWORD *)(v29 + 24) = -1073741823LL;
      goto LABEL_29;
    }
  }
LABEL_11:
  if ( (int)v14 < 0 )
  {
    if ( v9 == 1 )
    {
      if ( !DriverObjectExtension )
      {
LABEL_38:
        DxgCreateLiveDumpWithWdLogs(0x193u, 0x800uLL, (int)v14, 0LL, 0LL);
        return (unsigned int)v14;
      }
      AcquireMiniportListMutex();
      v34 = *(_QWORD **)DriverObjectExtension;
      if ( *(PVOID *)(*(_QWORD *)DriverObjectExtension + 8LL) == DriverObjectExtension )
      {
        v35 = (PVOID *)*((_QWORD *)DriverObjectExtension + 1);
        if ( *v35 == DriverObjectExtension )
        {
          *v35 = v34;
          v34[1] = v35;
          _InterlockedExchange64(&qword_1C00A2788, 0LL);
          KeReleaseMutex(Mutex, 0);
          goto LABEL_35;
        }
      }
LABEL_39:
      __fastfail(3u);
    }
LABEL_35:
    if ( DriverObjectExtension && *((_QWORD *)DriverObjectExtension + 6) )
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40));
    goto LABEL_38;
  }
  return (unsigned int)v14;
}
