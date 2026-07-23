/*
 * XREFs of IoCaptureLiveDump @ 0x140820184
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14026E15C (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140813908 (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     EtwActivityIdControl @ 0x1400A3A90 (EtwActivityIdControl.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140188708 (SecureDump_GetSecureDumpSettings.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140285D68 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140285D88 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTrace @ 0x140285DC0 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140285FC4 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1402860EC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140286194 (IopLiveDumpTraceInterfaceStart.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140579508 (IopLiveDumpCaptureMemoryPages.c)
 *     IoCreateNotificationEvent @ 0x14075F660 (IoCreateNotificationEvent.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140820900 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpReleaseResources @ 0x140821590 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpValidateParameters @ 0x140821740 (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFile @ 0x1408218CC (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x140821AF8 (IopLiveDumpWriteDumpFileWithHvPages.c)
 */

__int64 __fastcall IoCaptureLiveDump(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  PKEVENT v10; // rdi
  PKEVENT v11; // r12
  char *v12; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int inited; // edi
  HANDLE v16; // r14
  HANDLE v17; // r15
  char *PoolWithTag; // rax
  HANDLE v19; // rax
  HANDLE v20; // rax
  __int64 v21; // r14
  _BYTE *v22; // rcx
  int v23; // eax
  __int64 v24; // rsi
  int v25; // eax
  int v26; // edx
  GUID *p_pActivityId; // r9
  GUID *v28; // r8
  char v29; // [rsp+30h] [rbp-D0h] BYREF
  bool v30; // [rsp+31h] [rbp-CFh] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+48h] [rbp-B8h]
  int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h]
  unsigned __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  GUID pActivityId; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR v42; // [rsp+A0h] [rbp-60h] BYREF
  int *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  char *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  bool *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  v35 = a6;
  v33 = a1;
  EventHandle = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v38 = MEMORY[0xFFFFF78000000008];
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
  v29 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
  if ( v29 != 1 )
  {
    inited = -1073741267;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(v35 + 24) & 0x10) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition");
    v10 = IoCreateNotificationEvent(&DestinationString, &EventHandle);
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition");
    v11 = IoCreateNotificationEvent(&DestinationString, &Handle);
    if ( IopLiveDumpIsUnderMemoryPressure((__int64)v10, (__int64)v11) )
    {
      inited = -1073741248;
LABEL_12:
      v16 = EventHandle;
      v17 = Handle;
LABEL_24:
      if ( v16 )
        ZwClose(v16);
      if ( v17 )
        ZwClose(v17);
      goto LABEL_28;
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x290uLL, 0x706D644Cu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_12;
  }
  memset(PoolWithTag, 0, 0x290uLL);
  *(_DWORD *)v12 = v33;
  *((_QWORD *)v12 + 4) = a5;
  v19 = EventHandle;
  *((_QWORD *)v12 + 1) = a2;
  *((_QWORD *)v12 + 74) = v10;
  *((_QWORD *)v12 + 72) = v19;
  v20 = Handle;
  *((_QWORD *)v12 + 2) = a3;
  *((_QWORD *)v12 + 3) = a4;
  v17 = 0LL;
  *((_QWORD *)v12 + 73) = v20;
  v16 = 0LL;
  IopLiveDumpContext = (__int64)v12;
  *((_QWORD *)v12 + 75) = v11;
  EtwActivityIdControl(5u, (LPGUID)v12 + 38);
  EtwActivityIdControl(1u, (LPGUID)v12 + 39);
  if ( stru_140401A78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401A78, 0x200000000000uLL) )
    TlgWrite(&stru_140401A78, &unk_14036DEFD, (LPCGUID)v12 + 39, (LPCGUID)v12 + 38, 2u, &pData);
  inited = IopLiveDumpValidateParameters(v12, v35);
  if ( inited < 0 )
    goto LABEL_28;
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
LABEL_28:
  v21 = v35;
  if ( (*(_DWORD *)(v35 + 24) & 0x10) != 0 && inited == -1073741248 && IopLiveDumpIsTracingEnabled() )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT, 0LL, 0, 0LL);
  if ( v29 )
  {
    IopLiveDumpContext = 0LL;
    ExReleaseResourceLite(&IopLiveDumpLock);
  }
  KeLeaveCriticalRegion();
  if ( inited >= 0 )
  {
    inited = SecureDump_GetSecureDumpSettings((__int64)(v12 + 640));
    if ( inited >= 0 )
    {
      if ( *v22 )
      {
        v23 = *((_DWORD *)v12 + 162);
        if ( !v23 || !v12[641] || *((_DWORD *)v12 + 161) != 4096 || (v23 & 0xFFF) != 0 )
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
          v24 = MEMORY[0xFFFFF78000000008];
          if ( *((_QWORD *)v12 + 22) )
            v25 = IopLiveDumpWriteDumpFileWithHvPages((__int64)v12);
          else
            v25 = IopLiveDumpWriteDumpFile((__int64)v12);
          inited = v25;
          if ( stru_140401A78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401A78, 0x200000000000uLL) )
          {
            v36 = *(_QWORD *)(*((_QWORD *)v12 + 48) + 4000LL);
            v53 = 8LL;
            v55 = 8LL;
            v52 = &v36;
            v37 = (MEMORY[0xFFFFF78000000008] - v24) / 0x2710uLL;
            v54 = &v37;
            TlgWrite(&stru_140401A78, &unk_14036DF20, (LPCGUID)v12 + 39, (LPCGUID)v12 + 38, 4u, &v51);
          }
          IopLiveDumpTraceDumpFileWriteEnd((__int64)v12, 0LL, inited);
          if ( inited >= 0 && (*((_DWORD *)v12 + 20) & 2) != 0 )
            inited = 261;
        }
      }
    }
  }
  IopLiveDumpTraceInterfaceEnd((__int64)v22, 0LL, inited);
  if ( stru_140401A78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401A78, 0x200000000000uLL) )
  {
    v26 = *(_DWORD *)(v21 + 24);
    v34 = inited;
    v29 = (v26 & 8) != 0;
    v30 = (v26 & 0x10) != 0;
    v44 = 4LL;
    v46 = 1LL;
    v43 = &v34;
    v45 = &v29;
    v47 = &v30;
    v39 = (MEMORY[0xFFFFF78000000008] - v38) / 0x2710uLL;
    v48 = 1LL;
    v49 = &v39;
    v50 = 8LL;
    p_pActivityId = (GUID *)(v12 + 608);
    if ( v12 )
    {
      v28 = (GUID *)(v12 + 624);
    }
    else
    {
      p_pActivityId = &pActivityId;
      v28 = &pActivityId;
    }
    TlgWrite(&stru_140401A78, &unk_14036DE2D, v28, p_pActivityId, 6u, &v42);
  }
  if ( v12 )
  {
    if ( (*((_DWORD *)v12 + 10) & 8) == 0 )
      EtwActivityIdControl(2u, (LPGUID)v12 + 38);
    if ( inited != -1073741802 )
    {
      IopLiveDumpReleaseResources(v12);
      ExFreePoolWithTag(v12, 0x706D644Cu);
    }
  }
  return (unsigned int)inited;
}
