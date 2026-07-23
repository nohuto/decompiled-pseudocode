/*
 * XREFs of IopGetDeviceInterfaces @ 0x14059F6C4
 * Callers:
 *     ExpHwidProcessInterface @ 0x140586E18 (ExpHwidProcessInterface.c)
 *     PiCMGetDeviceInterfaceList @ 0x1405A068C (PiCMGetDeviceInterfaceList.c)
 *     IoGetDeviceInterfaces @ 0x1405A0F10 (IoGetDeviceInterfaces.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065EE0C (PfSnOpenVolumesForPrefetch.c)
 *     IoRegisterPlugPlayNotification @ 0x1407043E0 (IoRegisterPlugPlayNotification.c)
 *     IopOpenSystemVariableDevice @ 0x1408234B8 (IopOpenSystemVariableDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140596FCC (PiPnpRtlApplyMandatoryFilters.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     PnpGetObjectProperty @ 0x14059AEC8 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14059BCE4 (_PnpStringFromGuid.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14059C4E8 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14059FAFC (_CmSetDeviceInterfacePathFormat.c)
 *     _CmOpenInterfaceClassRegKey @ 0x14059FB44 (_CmOpenInterfaceClassRegKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x14059FD20 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall IopGetDeviceInterfaces(int *a1, const UNICODE_STRING *a2, int a3, char a4, _QWORD *a5, _DWORD *a6)
{
  PCUNICODE_STRING v6; // r13
  _DWORD *v7; // r15
  PVOID v8; // rsi
  char v9; // r14
  WCHAR *v10; // r12
  _WORD *v11; // rdi
  int ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  HANDLE v17; // rax
  __int64 v18; // r9
  PVOID v19; // r15
  PVOID v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // r12d
  wchar_t *v23; // rax
  unsigned int v24; // esi
  size_t v25; // rcx
  wchar_t *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r8
  _WORD *i; // rsi
  __int64 v31; // rax
  _WORD *PoolWithTag; // rax
  WCHAR *v33; // rax
  int v34; // ebx
  unsigned int v35; // esi
  unsigned int cchDest; // [rsp+60h] [rbp-A0h] BYREF
  char cchDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_5; // [rsp+65h] [rbp-9Bh] BYREF
  char cchDest_6; // [rsp+66h] [rbp-9Ah]
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  WCHAR *v45; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  int v47; // [rsp+A0h] [rbp-60h]
  HANDLE v48; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-50h] BYREF
  size_t pcchRemaining; // [rsp+B8h] [rbp-48h] BYREF
  __int16 *v51; // [rsp+C0h] [rbp-40h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD *v53; // [rsp+D0h] [rbp-30h]
  _QWORD v54[5]; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v56; // [rsp+110h] [rbp+10h] BYREF
  wchar_t v57[40]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a2;
  v7 = a6;
  String1 = a2;
  v8 = 0LL;
  P = 0LL;
  *a5 = 0LL;
  v9 = 0;
  v51 = 0LL;
  v10 = 0LL;
  Handle = 0LL;
  v11 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  cchDest = 0;
  v42 = 0;
  cchDest_6 = a4;
  v47 = a3;
  v53 = a5;
  v43 = (__int64)a6;
  ObjectProperty = PnpStringFromGuid(a1, v57);
  if ( ObjectProperty < 0 )
    goto LABEL_96;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v16 = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (unsigned int)v57, v14, v15, 983103, 0, (__int64)&Handle, 0LL);
  ObjectProperty = v16;
  if ( v16 == -1073741772 || v16 == -1073741766 )
  {
    if ( (MEMORY[0xFFFFF780000002F0] & 0x400) == 0 )
    {
      cchDest = 1;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x20207050u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0;
        ObjectProperty = 0;
      }
      else
      {
        ObjectProperty = -1073741670;
      }
      goto LABEL_31;
    }
    v17 = 0LL;
    Handle = 0LL;
  }
  else
  {
    if ( v16 < 0 )
      goto LABEL_31;
    v17 = Handle;
  }
  LODWORD(v41) = 0;
  LODWORD(v44) = 0;
  if ( ObjectProperty < 0 )
    goto LABEL_9;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0x400uLL,
                     (int)v57,
                     4,
                     (__int64)v17,
                     0LL,
                     (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                     (__int64)&v41,
                     &P,
                     &v44,
                     0);
  if ( ObjectProperty < 0 || (_DWORD)v41 != 18 )
  {
    LODWORD(v8) = v44;
LABEL_9:
    if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 && ObjectProperty != -1073741766 )
    {
      if ( ObjectProperty >= 0 )
        ObjectProperty = -1073741823;
      goto LABEL_30;
    }
    v19 = P;
    goto LABEL_11;
  }
  v19 = P;
  if ( (int)CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)P, 0x30u, v18, 131097, 0, (__int64)&v48, 0LL) < 0 )
  {
    v9 = 0;
LABEL_61:
    ExFreePoolWithTag(v19, 0);
    v19 = 0LL;
    P = 0LL;
    goto LABEL_11;
  }
  if ( String1 )
  {
    HIDWORD(v41) = 400;
    v33 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
    v45 = v33;
    v10 = v33;
    if ( !v33 )
    {
      ObjectProperty = -1073741670;
      goto LABEL_29;
    }
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v19,
                3u,
                (__int64)v48,
                0LL,
                (__int64)&DEVPKEY_Device_InstanceId,
                (__int64)&v41,
                (__int64)v33,
                SHIDWORD(v41),
                (__int64)&v41 + 4,
                0) < 0
      || (_DWORD)v41 != 18
      || RtlInitUnicodeStringEx(&DestinationString, v10) < 0
      || !RtlEqualUnicodeString(String1, &DestinationString, 1u) )
    {
      goto LABEL_75;
    }
  }
  if ( (v47 & 1) == 0 )
  {
    v9 = 0;
    HIDWORD(v41) = 1;
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v19,
                3u,
                (__int64)v48,
                0LL,
                (__int64)&DEVPKEY_DeviceInterface_Enabled,
                (__int64)&v41,
                (__int64)&cchDest_5,
                1,
                (__int64)&v41 + 4,
                0) < 0
      || v41 != 0x100000011LL )
    {
      goto LABEL_76;
    }
    if ( cchDest_5 != -1 )
    {
LABEL_75:
      v9 = 0;
      goto LABEL_76;
    }
  }
  cchDest_4 = 0;
  SeCaptureSubjectContext(&v56);
  v34 = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v19, 3, (__int64)v48, &v56, &cchDest_4);
  SeReleaseSubjectContext(&v56);
  if ( v34 < 0 )
    goto LABEL_75;
  v9 = 1;
  if ( !cchDest_4 )
    goto LABEL_75;
LABEL_76:
  ZwClose(v48);
  if ( !v9 )
    goto LABEL_61;
  LODWORD(v8) = v44;
LABEL_11:
  if ( String1 )
  {
    ObjectProperty = PnpUnicodeStringToWstr(&v51, 0LL, &String1->Length);
    if ( ObjectProperty < 0 )
      goto LABEL_29;
  }
  memset(v54, 0, sizeof(v54));
  v20 = (PVOID)v54[0];
  if ( v9 )
    v20 = v19;
  v54[0] = v20;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v54[1]);
  v21 = 4096;
  cchDest = 4096;
  if ( v9 )
  {
    v35 = (unsigned int)v8 >> 1;
    if ( v35 >= 0x1000 )
    {
      v21 = v35 + 1;
      cchDest = v35 + 1;
    }
  }
  ObjectProperty = -1073741789;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= 5 )
      goto LABEL_24;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v21 = cchDest;
    }
    v23 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v21, 0x20207050u);
    v11 = v23;
    if ( !v23 )
    {
      ObjectProperty = -1073741670;
      goto LABEL_24;
    }
    v24 = cchDest;
    v42 = cchDest;
    v25 = cchDest;
    if ( v9 )
      break;
    v26 = v23;
LABEL_22:
    pcchRemaining = v25;
    ppszDestEnd = v26;
    ObjectProperty = CmGetMatchingFilteredDeviceInterfaceList(
                       PiPnpRtlCtx,
                       (unsigned int)v57,
                       (_DWORD)v51,
                       (v47 & 1) == 0,
                       (__int64)IopDeviceInterfaceFilterCallback,
                       (__int64)v54,
                       (__int64)v26,
                       v25,
                       (__int64)&cchDest,
                       0);
    if ( ObjectProperty == -1073741772 && !Handle && !v22 )
    {
      cchDest = 0;
      ObjectProperty = 0;
LABEL_24:
      v24 = v42;
      goto LABEL_25;
    }
    ++v22;
    v21 = v26 - v11 + cchDest;
    cchDest = v21;
    if ( ObjectProperty != -1073741789 )
      goto LABEL_24;
  }
  ObjectProperty = RtlStringCchCopyExW(v23, cchDest, (NTSTRSAFE_PCWSTR)v19, &ppszDestEnd, &pcchRemaining, 0x800u);
  if ( ObjectProperty < 0 )
    goto LABEL_25;
  if ( pcchRemaining )
  {
    v25 = pcchRemaining - 1;
    v26 = ppszDestEnd + 1;
    goto LABEL_22;
  }
  ObjectProperty = -1073741823;
LABEL_25:
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v54[1]);
  if ( ObjectProperty >= 0 )
  {
    if ( cchDest )
      goto LABEL_27;
    cchDest = 1;
    if ( !v24 )
    {
      ExFreePoolWithTag(v11, 0);
      v11 = ExAllocatePoolWithTag(PagedPool, 2LL * cchDest, 0x20207050u);
      if ( !v11 )
      {
        ObjectProperty = -1073741670;
        goto LABEL_28;
      }
    }
    *v11 = 0;
LABEL_27:
    if ( cchDest_6 )
    {
LABEL_28:
      v10 = v45;
      goto LABEL_29;
    }
    for ( i = v11; *i; i += v31 + 1 )
    {
      LOBYTE(v28) = 1;
      ObjectProperty = CmSetDeviceInterfacePathFormat(v27, i, v28);
      if ( ObjectProperty < 0 )
        break;
      v31 = -1LL;
      do
        ++v31;
      while ( i[v31] );
    }
  }
  v10 = v45;
LABEL_29:
  v7 = (_DWORD *)v43;
LABEL_30:
  v6 = String1;
LABEL_31:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( ObjectProperty >= 0 )
  {
    *v53 = v11;
    if ( v7 )
      *v7 = 2 * cchDest;
    v11 = 0LL;
    v8 = P;
    goto LABEL_35;
  }
  v8 = P;
LABEL_96:
  *v53 = 0LL;
  if ( v7 )
    *v7 = 0;
LABEL_35:
  if ( Handle )
    ZwClose(Handle);
  PnpUnicodeStringToWstrFree(v51, (__int64)v6);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)ObjectProperty;
}
