/*
 * XREFs of IoCaptureLiveDump @ 0x140858644
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1402817C8 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14084B858 (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14010A760 (EtwActivityIdControl.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140193A04 (SecureDump_GetSecureDumpSettings.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14029AC2C (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x14029AC4C (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTrace @ 0x14029AC90 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14029AE94 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14029AFBC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14029B064 (IopLiveDumpTraceInterfaceStart.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1405A836C (IopLiveDumpCaptureMemoryPages.c)
 *     IoCreateNotificationEvent @ 0x140786F60 (IoCreateNotificationEvent.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140858E28 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpReleaseResources @ 0x140859AFC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpValidateParameters @ 0x140859CD0 (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFile @ 0x140859E68 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14085A094 (IopLiveDumpWriteDumpFileWithHvPages.c)
 */

__int64 __fastcall IoCaptureLiveDump(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  PKEVENT v10; // rdi
  PKEVENT v11; // r13
  char *v12; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int inited; // edi
  HANDLE v16; // r14
  HANDLE v17; // r15
  HANDLE v18; // r12
  char *PoolWithTag; // rax
  HANDLE v20; // rax
  PKEVENT v21; // rax
  __int64 v22; // r14
  _BYTE *v23; // rcx
  int v24; // eax
  __int64 v25; // rsi
  int v26; // eax
  bool v27; // dl
  GUID *p_pActivityId; // r9
  GUID *v29; // r8
  char v30; // [rsp+30h] [rbp-D0h] BYREF
  bool v31; // [rsp+31h] [rbp-CFh] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v34; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+50h] [rbp-B0h]
  int v36; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  PKEVENT v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  unsigned __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  GUID pActivityId; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR v45; // [rsp+B0h] [rbp-50h] BYREF
  int *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  char *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  bool *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR v54; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  v37 = a6;
  v35 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  v34 = 0LL;
  v11 = 0LL;
  v39 = 0LL;
  v12 = 0LL;
  v42 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)&pActivityId.Data1 = 0LL;
  *(_QWORD *)pActivityId.Data4 = 0LL;
  if ( ForceDumpDisabled )
  {
    if ( a7 )
      *a7 = 0LL;
    return 3221225659LL;
  }
  IopLiveDumpTraceInterfaceStart();
  if ( a7 )
    *a7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v30 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
  if ( v30 != 1 )
  {
    inited = -1073741267;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)(v37 + 24) & 0x10) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition");
    v10 = IoCreateNotificationEvent(&DestinationString, &EventHandle);
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition");
    v11 = IoCreateNotificationEvent(&DestinationString, &Handle);
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\HighCommitCondition");
    v39 = IoCreateNotificationEvent(&DestinationString, &v34);
    if ( IopLiveDumpIsUnderMemoryPressure((__int64)v10, (__int64)v11, (__int64)v39) )
    {
      inited = -1073741248;
LABEL_12:
      v16 = EventHandle;
      v17 = Handle;
      v18 = v34;
LABEL_24:
      if ( v16 )
        ZwClose(v16);
      if ( v17 )
        ZwClose(v17);
      if ( v18 )
        ZwClose(v18);
      goto LABEL_30;
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A0uLL, 0x706D644Cu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_12;
  }
  memset(PoolWithTag, 0, 0x2A0uLL);
  *(_DWORD *)v12 = v35;
  *((_QWORD *)v12 + 4) = a5;
  *((_QWORD *)v12 + 72) = EventHandle;
  *((_QWORD *)v12 + 73) = Handle;
  v20 = v34;
  *((_QWORD *)v12 + 1) = a2;
  v16 = 0LL;
  *((_QWORD *)v12 + 75) = v10;
  *((_QWORD *)v12 + 74) = v20;
  v21 = v39;
  *((_QWORD *)v12 + 2) = a3;
  *((_QWORD *)v12 + 3) = a4;
  v18 = 0LL;
  *((_QWORD *)v12 + 77) = v21;
  v17 = 0LL;
  IopLiveDumpContext = (__int64)v12;
  *((_QWORD *)v12 + 76) = v11;
  EtwActivityIdControl(5u, (LPGUID)v12 + 39);
  EtwActivityIdControl(1u, (LPGUID)v12 + 40);
  if ( stru_140425C78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425C78, 0x200000000000uLL) )
    TlgWrite(&stru_140425C78, &unk_14038CC78, (LPCGUID)v12 + 40, (LPCGUID)v12 + 39, 2u, &pData);
  inited = IopLiveDumpValidateParameters(v12, v37);
  if ( inited < 0 )
    goto LABEL_30;
  if ( (*((_DWORD *)v12 + 10) & 8) == 0 || a7 )
  {
    inited = IopLiveDumpAllocAndInitResources(v12);
    if ( inited >= 0 )
    {
      inited = IopLiveDumpCaptureMemoryPages((__int64)v12);
      goto LABEL_24;
    }
  }
  else
  {
    inited = -1073741811;
  }
LABEL_30:
  v22 = v37;
  if ( (*(_DWORD *)(v37 + 24) & 0x10) != 0 && inited == -1073741248 && IopLiveDumpIsTracingEnabled() )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT, 0LL, 0, 0LL);
  if ( v30 )
  {
    IopLiveDumpContext = 0LL;
    ExReleaseResourceLite(&IopLiveDumpLock);
  }
  KeLeaveCriticalRegion();
  if ( inited >= 0 )
  {
    inited = SecureDump_GetSecureDumpSettings((__int64)(v12 + 656));
    if ( inited >= 0 )
    {
      if ( *v23 )
      {
        v24 = *((_DWORD *)v12 + 166);
        if ( !v24 || !v12[657] || *((_DWORD *)v12 + 165) != 4096 || (v24 & 0xFFF) != 0 )
          inited = -1073741823;
      }
      if ( inited >= 0 )
      {
        if ( (*((_DWORD *)v12 + 10) & 8) != 0 )
        {
          inited = -1073741802;
          *a7 = v12;
        }
        else
        {
          IopLiveDumpTrace();
          v25 = MEMORY[0xFFFFF78000000008];
          if ( *((_QWORD *)v12 + 22) )
            v26 = IopLiveDumpWriteDumpFileWithHvPages((__int64)v12);
          else
            v26 = IopLiveDumpWriteDumpFile((__int64)v12);
          inited = v26;
          if ( stru_140425C78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425C78, 0x200000000000uLL) )
          {
            v40 = *(_QWORD *)(*((_QWORD *)v12 + 48) + 4000LL);
            v56 = 8LL;
            v58 = 8LL;
            v55 = &v40;
            v41 = (MEMORY[0xFFFFF78000000008] - v25) / 0x2710uLL;
            v57 = &v41;
            TlgWrite(&stru_140425C78, &unk_14038CBB8, (LPCGUID)v12 + 40, (LPCGUID)v12 + 39, 4u, &v54);
          }
          IopLiveDumpTraceDumpFileWriteEnd((__int64)v12, 0LL, inited);
          if ( inited >= 0 && (*((_DWORD *)v12 + 20) & 2) != 0 )
            inited = 261;
        }
      }
    }
  }
  IopLiveDumpTraceInterfaceEnd((__int64)v23, 0LL, inited);
  if ( stru_140425C78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425C78, 0x200000000000uLL) )
  {
    v27 = (*(_DWORD *)(v22 + 24) & 0x10) != 0;
    v30 = (*(_DWORD *)(v22 + 24) & 8) != 0;
    v31 = v27;
    v36 = inited;
    v47 = 4LL;
    v49 = 1LL;
    v46 = &v36;
    v48 = &v30;
    v50 = &v31;
    v43 = (MEMORY[0xFFFFF78000000008] - v42) / 0x2710uLL;
    v51 = 1LL;
    v52 = &v43;
    v53 = 8LL;
    p_pActivityId = (GUID *)(v12 + 624);
    if ( v12 )
    {
      v29 = (GUID *)(v12 + 640);
    }
    else
    {
      p_pActivityId = &pActivityId;
      v29 = &pActivityId;
    }
    TlgWrite(&stru_140425C78, &unk_14038CC01, v29, p_pActivityId, 6u, &v45);
  }
  if ( v12 )
  {
    if ( (*((_DWORD *)v12 + 10) & 8) == 0 )
      EtwActivityIdControl(2u, (LPGUID)v12 + 39);
    if ( inited != -1073741802 )
    {
      IopLiveDumpReleaseResources(v12);
      ExFreePoolWithTag(v12, 0x706D644Cu);
    }
  }
  return (unsigned int)inited;
}
