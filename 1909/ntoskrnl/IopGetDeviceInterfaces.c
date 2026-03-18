/*
 * XREFs of IopGetDeviceInterfaces @ 0x140627858
 * Callers:
 *     ExpHwidProcessInterface @ 0x140626354 (ExpHwidProcessInterface.c)
 *     IoGetDeviceInterfaces @ 0x140627270 (IoGetDeviceInterfaces.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406272E8 (PiCMGetDeviceInterfaceList.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14062A850 (PfSnOpenVolumesForPrefetch.c)
 *     IoRegisterPlugPlayNotification @ 0x140722750 (IoRegisterPlugPlayNotification.c)
 *     IopOpenSystemVariableDevice @ 0x14085BA8C (IopOpenSystemVariableDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     RtlStringCchCopyExW @ 0x14013E378 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405BBF24 (PiPnpRtlApplyMandatoryFilters.c)
 *     PnpGetObjectProperty @ 0x1405BC608 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405BDF10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1405BF910 (PnpUnicodeStringToWstr.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140627C78 (_CmSetDeviceInterfacePathFormat.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140627CC0 (_CmOpenInterfaceClassRegKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14062920C (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140629BE8 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     _PnpStringFromGuid @ 0x1407000C0 (_PnpStringFromGuid.c)
 */

__int64 __fastcall IopGetDeviceInterfaces(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        char a4,
        _QWORD *a5,
        _DWORD *a6)
{
  _WORD *v6; // rdi
  _DWORD *v7; // r12
  PCUNICODE_STRING v8; // r13
  PVOID v10; // rsi
  bool v11; // r14
  WCHAR *v12; // r15
  int MatchingFilteredDeviceInterfaceList; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  int ObjectProperty; // eax
  int v19; // r9d
  unsigned int v20; // r15d
  PVOID v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // r12d
  wchar_t *v24; // rax
  unsigned int v25; // r15d
  size_t v26; // rcx
  wchar_t *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // r8
  _WORD *i; // r14
  __int64 v32; // rax
  _WORD *PoolWithTag; // rax
  PVOID v34; // rax
  int v35; // ebx
  unsigned int v36; // r15d
  unsigned int cchDest; // [rsp+60h] [rbp-A0h] BYREF
  char cchDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_5; // [rsp+65h] [rbp-9Bh] BYREF
  char cchDest_6; // [rsp+66h] [rbp-9Ah]
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v43; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  PVOID v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h]
  unsigned int v47; // [rsp+98h] [rbp-68h] BYREF
  int v48; // [rsp+9Ch] [rbp-64h]
  HANDLE v49; // [rsp+A0h] [rbp-60h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v51; // [rsp+B0h] [rbp-50h]
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  __int16 *v53; // [rsp+C0h] [rbp-40h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v56[5]; // [rsp+E0h] [rbp-20h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v57; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v58[80]; // [rsp+130h] [rbp+30h] BYREF

  v6 = 0LL;
  v7 = a6;
  v8 = a2;
  v48 = a3;
  String1 = a2;
  cchDest_6 = a4;
  v51 = a5;
  v46 = (__int64)a6;
  v10 = 0LL;
  P = 0LL;
  v11 = 0;
  v53 = 0LL;
  memset(v56, 0, sizeof(v56));
  Handle = 0LL;
  cchDest = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v12 = 0LL;
  v43 = 0;
  v49 = 0LL;
  v45 = 0LL;
  *a5 = 0LL;
  MatchingFilteredDeviceInterfaceList = PnpStringFromGuid(a1, v58);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_85;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v17 = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (unsigned int)v58, v15, v16, 983103, 0, (__int64)&Handle, 0LL);
  MatchingFilteredDeviceInterfaceList = v17;
  if ( v17 == -1073741772 || v17 == -1073741766 )
  {
    cchDest = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x20207050u);
    v10 = P;
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0;
      MatchingFilteredDeviceInterfaceList = 0;
    }
    else
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
    }
    goto LABEL_28;
  }
  if ( v17 < 0 )
  {
    v10 = P;
    goto LABEL_28;
  }
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0x400uLL,
                     (int)v58,
                     4,
                     (__int64)Handle,
                     0LL,
                     (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                     (__int64)&v42,
                     &P,
                     &v47,
                     0);
  MatchingFilteredDeviceInterfaceList = ObjectProperty;
  if ( ObjectProperty < 0 || (_DWORD)v42 != 18 )
  {
    if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 && ObjectProperty != -1073741766 )
    {
      v10 = P;
      v8 = String1;
      if ( ObjectProperty >= 0 )
        MatchingFilteredDeviceInterfaceList = -1073741823;
      goto LABEL_28;
    }
    v10 = P;
    goto LABEL_8;
  }
  v10 = P;
  v11 = 0;
  if ( (int)CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, (_DWORD)P, 48, v19, 131097, 0, (__int64)&v49, 0LL) >= 0 )
  {
    if ( !String1 )
      goto LABEL_89;
    HIDWORD(v42) = 400;
    v34 = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
    v45 = v34;
    v12 = (WCHAR *)v34;
    if ( !v34 )
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
      goto LABEL_27;
    }
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v10,
                3LL,
                (__int64)v49,
                0LL,
                (__int64)&DEVPKEY_Device_InstanceId,
                (__int64)&v42,
                (__int64)v34,
                SHIDWORD(v42),
                (__int64)&v42 + 4,
                0) >= 0
      && (_DWORD)v42 == 18
      && RtlInitUnicodeStringEx(&DestinationString, v12) >= 0
      && RtlEqualUnicodeString(String1, &DestinationString, 1u) )
    {
LABEL_89:
      if ( (v48 & 1) != 0
        || (HIDWORD(v42) = 1,
            (int)PnpGetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)v10,
                   3LL,
                   (__int64)v49,
                   0LL,
                   (__int64)&DEVPKEY_DeviceInterface_Enabled,
                   (__int64)&v42,
                   (__int64)&cchDest_5,
                   1,
                   (__int64)&v42 + 4,
                   0) >= 0)
        && v42 == 0x100000011LL
        && cchDest_5 == -1 )
      {
        memset(&v57, 0, sizeof(v57));
        cchDest_4 = 0;
        SeCaptureSubjectContext(&v57);
        v35 = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v10, 3, (__int64)v49, &v57, &cchDest_4);
        SeReleaseSubjectContext(&v57);
        if ( v35 >= 0 )
          v11 = cchDest_4 != 0;
      }
    }
    ZwClose(v49);
    if ( v11 )
    {
LABEL_8:
      v20 = v47;
      goto LABEL_9;
    }
  }
  ExFreePoolWithTag(v10, 0);
  v10 = 0LL;
  v20 = 0;
LABEL_9:
  if ( String1 )
  {
    MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v53, 0LL, &String1->Length);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
      goto LABEL_26;
  }
  v21 = (PVOID)v56[0];
  if ( v11 )
    v21 = v10;
  v56[0] = v21;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v56[1]);
  v22 = 4096;
  cchDest = 4096;
  if ( v11 )
  {
    v36 = v20 >> 1;
    if ( v36 >= 0x1000 )
    {
      v22 = v36 + 1;
      cchDest = v36 + 1;
    }
  }
  MatchingFilteredDeviceInterfaceList = -1073741789;
  v23 = 0;
  while ( 1 )
  {
    if ( v23 >= 5 )
      goto LABEL_21;
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      v22 = cchDest;
    }
    v24 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v22, 0x20207050u);
    v6 = v24;
    if ( !v24 )
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
LABEL_21:
      v25 = v43;
      goto LABEL_22;
    }
    v25 = cchDest;
    v43 = cchDest;
    v26 = cchDest;
    if ( v11 )
      break;
    v27 = v24;
LABEL_20:
    pcchRemaining = v26;
    ppszDestEnd = v27;
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            PiPnpRtlCtx,
                                            (unsigned int)v58,
                                            (_DWORD)v53,
                                            (v48 & 1) == 0,
                                            (__int64)IopDeviceInterfaceFilterCallback,
                                            (__int64)v56,
                                            (__int64)v27,
                                            v26,
                                            (__int64)&cchDest,
                                            0);
    ++v23;
    v22 = v27 - v6 + cchDest;
    cchDest = v22;
    if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
      goto LABEL_21;
  }
  MatchingFilteredDeviceInterfaceList = RtlStringCchCopyExW(
                                          v24,
                                          cchDest,
                                          (NTSTRSAFE_PCWSTR)v10,
                                          &ppszDestEnd,
                                          &pcchRemaining,
                                          0x800u);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_22;
  if ( pcchRemaining )
  {
    v26 = pcchRemaining - 1;
    v27 = ppszDestEnd + 1;
    goto LABEL_20;
  }
  MatchingFilteredDeviceInterfaceList = -1073741823;
LABEL_22:
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v56[1]);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_25;
  if ( cchDest )
    goto LABEL_24;
  cchDest = 1;
  if ( !v25 )
  {
    ExFreePoolWithTag(v6, 0);
    v6 = ExAllocatePoolWithTag(PagedPool, 2LL * cchDest, 0x20207050u);
    if ( !v6 )
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
      goto LABEL_25;
    }
  }
  *v6 = 0;
LABEL_24:
  if ( cchDest_6 )
  {
LABEL_25:
    v7 = (_DWORD *)v46;
  }
  else
  {
    for ( i = v6; *i; i += v32 + 1 )
    {
      LOBYTE(v29) = 1;
      MatchingFilteredDeviceInterfaceList = CmSetDeviceInterfacePathFormat(v28, i, v29);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        break;
      v32 = -1LL;
      do
        ++v32;
      while ( i[v32] );
    }
    v7 = (_DWORD *)v46;
  }
LABEL_26:
  v12 = (WCHAR *)v45;
LABEL_27:
  v8 = String1;
LABEL_28:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    *v51 = v6;
    if ( v7 )
      *v7 = 2 * cchDest;
    v6 = 0LL;
    goto LABEL_32;
  }
LABEL_85:
  *v51 = 0LL;
  if ( v7 )
    *v7 = 0;
LABEL_32:
  if ( Handle )
    ZwClose(Handle);
  PnpUnicodeStringToWstrFree(v53, (__int64)v8);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
