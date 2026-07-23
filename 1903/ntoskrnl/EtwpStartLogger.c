/*
 * XREFs of EtwpStartLogger @ 0x1406B5160
 * Callers:
 *     EtwpStartTrace @ 0x1406B70FC (EtwpStartTrace.c)
 *     EtwStartAutoLogger @ 0x14076DA0C (EtwStartAutoLogger.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     MmGetSessionId @ 0x14001D490 (MmGetSessionId.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpSetQpcDeltaTracking @ 0x140330970 (EtwpSetQpcDeltaTracking.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405C561C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C5658 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpAccessCheck @ 0x1405D0AFC (EtwpAccessCheck.c)
 *     SeCreateClientSecurity @ 0x1405E4A70 (SeCreateClientSecurity.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     EtwpCaptureString @ 0x140667138 (EtwpCaptureString.c)
 *     RtlCreateUnicodeString @ 0x140667B10 (RtlCreateUnicodeString.c)
 *     ExUuidCreate @ 0x140696870 (ExUuidCreate.c)
 *     PsCreateSystemThread @ 0x1406B3FB0 (PsCreateSystemThread.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B5F9C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpSendSessionNotification @ 0x1406B6324 (EtwpSendSessionNotification.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x1406B6768 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpAllocateTraceBufferPool @ 0x1406B67BC (EtwpAllocateTraceBufferPool.c)
 *     EtwpCheckForStackTracingExtension @ 0x1406B69C0 (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x1406B69FC (EtwpGetFlagExtension.c)
 *     EtwpInitializeTimeStamp @ 0x1406B6A3C (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x1406B6BB4 (EtwpInitLoggerContext.c)
 *     EtwpLookupLoggerIdByName @ 0x1406B6F8C (EtwpLookupLoggerIdByName.c)
 *     EtwpValidateFlagExtension @ 0x1406B702C (EtwpValidateFlagExtension.c)
 *     EtwpFreeLoggerContext @ 0x1406B717C (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1406B7440 (EtwpFreeTraceBufferPool.c)
 *     EtwpStopLoggerInstance @ 0x1406B759C (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x1406B87D4 (EtwpCreateLogFile.c)
 *     EtwpGenerateFileName @ 0x1406BA198 (EtwpGenerateFileName.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1407076A8 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14077F574 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408F2730 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1408F79C4 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1408F7BFC (EtwpEventWriteTemplateSession.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x1409001D4 (EtwpCheckCurrentUserGuidAccess.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1, __int64 a2)
{
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // r14d
  int FileName; // edi
  ACCESS_MASK v7; // edx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // esi
  unsigned int *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rsi
  signed __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int *inited; // rsi
  unsigned int v25; // eax
  int v26; // eax
  int v27; // ecx
  unsigned int v28; // eax
  UNICODE_STRING *v29; // r13
  int v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // ecx
  int v36; // edx
  unsigned int v37; // ecx
  unsigned __int64 v38; // rdx
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // r13
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // ecx
  char v49; // al
  __int64 v50; // rcx
  __int64 v51; // rbx
  unsigned int v52; // ebx
  const WCHAR *v53; // rdx
  bool v54; // zf
  unsigned int v55; // eax
  __int64 v56; // r13
  __int64 v57; // rax
  int v58; // r9d
  unsigned int v59; // eax
  void *v60; // rcx
  __int64 v61; // rbx
  int v62; // ecx
  int v63; // r8d
  unsigned int v64; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v65; // [rsp+44h] [rbp-BCh]
  unsigned int v66; // [rsp+48h] [rbp-B8h]
  __int64 v67; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+80h] [rbp-80h] BYREF
  int v72; // [rsp+90h] [rbp-70h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+94h] [rbp-6Ch]
  __int64 v74; // [rsp+98h] [rbp-68h]
  unsigned __int64 StartContext; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v76; // [rsp+A8h] [rbp-58h]
  HANDLE ThreadHandle; // [rsp+B0h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int128 Buf2; // [rsp+E8h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-8h] BYREF
  int *v81; // [rsp+118h] [rbp+18h]
  __int64 v82; // [rsp+120h] [rbp+20h]

  v67 = a1;
  Buf2 = 0uLL;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  SecurityDescriptor = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v66 = 8;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  StartContext = 0LL;
  v76 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v3 = *(_DWORD *)(a2 + 64);
  v4 = v3 & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((v3 & 8) != 0 || (v3 & 4) != 0) )
    v4 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  v5 = v4 | 0x80;
  if ( (v4 & 0x40000) == 0 )
    v5 = v4;
  if ( (v5 & 0x80000) != 0 && (v5 & 0x1000000) != 0 )
    v5 &= ~0x1000000u;
  if ( (v5 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v5 & 0x4000F) != 0 )
      goto LABEL_128;
    v48 = v5 & 0xFFFFFEFF;
    if ( (v5 & 0x100) == 0 )
      v48 = v5;
    v5 = v48;
    if ( *(_DWORD *)(a2 + 68) )
      *(_DWORD *)(a2 + 68) = 0;
    if ( *(_DWORD *)(a2 + 76) )
      *(_DWORD *)(a2 + 76) = 0;
  }
  if ( (v5 & 3) == 3
    || (v5 & 0xC000) == 0xC000
    || (v5 & 0x700) == 0 && !*(_QWORD *)(a2 + 136)
    || (v5 & 6) == 6
    || (v5 & 2) != 0 && !*(_DWORD *)(a2 + 60)
    || (v5 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (v3 & 0xC) != 0)
    || (v5 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0 || (v5 & 0x402) == 0 && ((v5 & 0x100) == 0 || *(_QWORD *)(a2 + 136)))
    || (v5 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_128;
  }
  if ( (v5 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v5 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v3 & 0x2000000) != 0 )
    {
      goto LABEL_128;
    }
    v46 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v46 )
      v46 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v46 )
      goto LABEL_128;
    v47 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v47 )
      v47 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v47 || (v5 & 4) != 0 )
      goto LABEL_128;
  }
  if ( (v3 & 0x3000000) == 0x3000000 || (v3 & 0x4000000) != 0 && (v3 & 0x400) == 0 || (v3 & 0x10000) != 0 )
    goto LABEL_128;
  FileName = EtwpValidateFlagExtension(a2);
  if ( FileName < 0 )
    goto LABEL_235;
  v7 = ((v5 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v7 = (v5 & 0x100 | 0x400) >> 3;
  DesiredAccess = v7;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_128;
  FileName = EtwpCaptureString((unsigned __int16 *)(a2 + 144), &DestinationString);
  if ( FileName )
  {
LABEL_235:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v62,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v63,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v5);
    RtlFreeAnsiString(&DestinationString);
    RtlFreeAnsiString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  v8 = v67;
  if ( !(unsigned int)EtwpLookupLoggerIdByName(v67, &DestinationString, &v64) )
    goto LABEL_202;
  v9 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&NullGuid.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a2 + 32) - *(_QWORD *)NullGuid.Data4;
  if ( v9 )
  {
    Buf2 = *(_OWORD *)(a2 + 24);
  }
  else
  {
    FileName = ExUuidCreate((UUID *)&Buf2);
    if ( FileName < 0 )
      goto LABEL_235;
    v8 = v67;
  }
  if ( (v5 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (unsigned int)MmGetSessionId((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      v5 |= 0x400000u;
    }
    else
    {
      v5 |= 0x800000u;
    }
  }
  v10 = Buf2;
  v11 = *(_QWORD *)(v8 + 456);
  v12 = Buf2 - *(_QWORD *)&SystemTraceControlGuid.Data1;
  v13 = *((_QWORD *)&Buf2 + 1);
  v74 = v11;
  if ( (_QWORD)Buf2 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
    v12 = *((_QWORD *)&Buf2 + 1) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v12 )
    goto LABEL_175;
  v14 = Buf2 - *(_QWORD *)&CKCLGuid.Data1;
  if ( (_QWORD)Buf2 == *(_QWORD *)&CKCLGuid.Data1 )
    v14 = *((_QWORD *)&Buf2 + 1) - *(_QWORD *)CKCLGuid.Data4;
  if ( !v14 )
  {
LABEL_175:
    RtlFreeAnsiString(&DestinationString);
    v51 = v10 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v51 )
      v51 = v13 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v51 )
    {
      v52 = 2;
      v66 = 1;
      v53 = L"Circular Kernel Context Logger";
    }
    else
    {
      v52 = 0;
      v66 = 0;
      v53 = L"NT Kernel Logger";
    }
    v64 = v52;
    if ( !RtlCreateUnicodeString(&DestinationString, v53) )
      goto LABEL_219;
    v5 |= 0x80u;
    if ( (v5 & 0x1000000) == 0 )
    {
      v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v52), v11 | 1, 1LL) == 1;
      goto LABEL_182;
    }
    goto LABEL_128;
  }
  v15 = Buf2 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( (_QWORD)Buf2 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v15 = *((_QWORD *)&Buf2 + 1) - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v15 )
  {
    v64 = 1;
    if ( !EtwpGetFlagExtension(a2, 1LL) )
    {
LABEL_207:
      v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v11 | 1, 1LL) == 1;
LABEL_182:
      if ( v54 )
        goto LABEL_187;
      goto LABEL_202;
    }
    if ( (v5 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_219;
      v66 = 0;
      goto LABEL_207;
    }
LABEL_128:
    FileName = -1073741811;
    goto LABEL_235;
  }
  v16 = Buf2 - *(_QWORD *)&AuditLoggerGuid.Data1;
  if ( (_QWORD)Buf2 == *(_QWORD *)&AuditLoggerGuid.Data1 )
    v16 = *((_QWORD *)&Buf2 + 1) - *(_QWORD *)AuditLoggerGuid.Data4;
  if ( !v16 )
  {
    v64 = 3;
    if ( (v5 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v5 |= 0x80u;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v11 | 1, 1LL) == 1 )
        {
LABEL_187:
          v20 = v67;
          goto LABEL_59;
        }
LABEL_202:
        FileName = -1073741771;
        goto LABEL_235;
      }
LABEL_219:
      FileName = -1073741801;
      goto LABEL_235;
    }
    goto LABEL_128;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v57 = v10 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( v10 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v57 = v13 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v57 )
      goto LABEL_202;
  }
  v17 = *(_DWORD *)(v8 + 16);
  v18 = 4;
  if ( v17 <= 4 )
  {
LABEL_52:
    v20 = v67;
    goto LABEL_53;
  }
  while ( 1 )
  {
    v19 = EtwpAcquireLoggerContextByLoggerId(v8, v18, 0);
    if ( v19 )
      break;
LABEL_51:
    v17 = *(_DWORD *)(v8 + 16);
    if ( ++v18 >= v17 )
      goto LABEL_52;
  }
  v39 = *(_QWORD *)(v19 + 73) - v10;
  if ( !v39 )
    v39 = *(_QWORD *)(v19 + 75) - v13;
  EtwpReleaseLoggerContext(v19, 0);
  if ( v39 )
  {
    v8 = v67;
    goto LABEL_51;
  }
  v20 = v67;
  v17 = *(_DWORD *)(v67 + 16);
LABEL_53:
  if ( v18 < v17 )
    goto LABEL_202;
  v64 = 4;
  if ( v17 > 4 )
  {
    v21 = v74;
    v22 = v74 | 1;
    do
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8LL * v64), v22, 1LL) == 1 )
        break;
      ++v64;
    }
    while ( v64 < *(_DWORD *)(v20 + 16) );
  }
  if ( v64 >= *(_DWORD *)(v20 + 16) )
  {
    if ( !byte_14050C230 )
    {
      byte_14050C230 = 1;
      if ( stru_140426618.LevelPlus1 > 5 )
      {
        if ( TlgKeywordOn(&stru_140426618, 0x800000000000uLL) )
        {
          v72 = v58;
          v81 = &v72;
          v82 = 4LL;
          TlgWrite(&stru_140426618, &unk_140394167, 0LL, 0LL, 3u, &pData);
        }
      }
    }
    FileName = -1073741670;
    goto LABEL_235;
  }
LABEL_59:
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v20 + 448) + 8LL * v64), 1u);
  EtwpGetSecurityDescriptorByGuid((unsigned int *)&Buf2, &SecurityDescriptor);
  FileName = EtwpAccessCheck(SecurityDescriptor, DesiredAccess, 0LL);
  if ( FileName < 0 )
    goto LABEL_197;
  v23 = *(_QWORD *)&HeapGuid.Data1 - Buf2;
  if ( *(_QWORD *)&HeapGuid.Data1 == (_QWORD)Buf2 )
    v23 = *(_QWORD *)HeapGuid.Data4 - *((_QWORD *)&Buf2 + 1);
  if ( v23 )
    v65 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  else
    v65 = 0;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v66 == 8 )
  {
    FileName = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
    if ( FileName < 0 )
      goto LABEL_197;
    v55 = 2;
    v66 = 2;
    do
    {
      if ( !_bittest((const signed __int32 *)(v20 + 4224), v55) )
        break;
      ++v55;
    }
    while ( v55 < 8 );
    v66 = v55;
    if ( v55 == 8 )
    {
      FileName = -1073741670;
      goto LABEL_197;
    }
  }
  inited = (unsigned int *)EtwpInitLoggerContext(&DestinationString, v5);
  RtlFreeAnsiString(&DestinationString);
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_197:
    v56 = v67;
    goto LABEL_234;
  }
  *(_OWORD *)(inited + 73) = Buf2;
  inited[77] = *(_DWORD *)(a2 + 60);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x10u);
  inited[54] = *(_DWORD *)(a2 + 40);
  if ( (*(_DWORD *)(a2 + 80) & 2) != 0 )
  {
    FileName = EtwpSetQpcDeltaTracking((__int64)inited);
    if ( FileName < 0 )
      goto LABEL_225;
  }
  v25 = *(_DWORD *)(a2 + 68);
  if ( v25 )
  {
    inited[56] = v25;
  }
  else if ( (v5 & 0x100) != 0 )
  {
    inited[56] = (v5 & 0x10) != 0 ? 1000 : 1;
  }
  v26 = *(_DWORD *)(a2 + 76);
  v27 = v26;
  if ( v26 && (inited[56] || v26 < 0) )
  {
    *(_DWORD *)(a2 + 76) = 0;
    v27 = 0;
  }
  v28 = v64;
  inited[57] = v27;
  *inited = v28;
  *((_QWORD *)inited + 139) = v20;
  if ( *(_WORD *)(a2 + 128) )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      FileName = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
      if ( FileName < 0 )
        goto LABEL_225;
    }
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[78] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = 0;
  }
  v29 = (UNICODE_STRING *)(inited + 42);
  if ( (inited[3] & 8) != 0 )
  {
    *(UNICODE_STRING *)(inited + 46) = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
    FileName = EtwpGenerateFileName(inited + 46, inited + 78, inited + 42);
    if ( FileName >= 0 )
    {
      v20 = v67;
      goto LABEL_80;
    }
    goto LABEL_225;
  }
  *v29 = UnicodeString;
  RtlInitUnicodeString(&UnicodeString, 0LL);
LABEL_80:
  ClientSecurityQos.Length = 12;
  ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
  FileName = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)inited + 10);
  if ( FileName < 0 )
    goto LABEL_225;
  if ( (inited[3] & 0x100) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 8u);
  else
    _InterlockedAnd((volatile signed __int32 *)inited + 208, 0xFFFFFFF7);
  v30 = *(_DWORD *)(a2 + 112);
  if ( (v30 & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 2u);
    v30 = *(_DWORD *)(a2 + 112);
  }
  if ( (v30 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 1u);
    v30 = *(_DWORD *)(a2 + 112);
  }
  if ( (v30 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x4000u);
  EtwpInitializeTimeStamp(inited);
  v31 = v66;
  if ( v66 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 834) = v31;
    if ( (unsigned int)v31 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 208, 0x20u);
    *(_BYTE *)(v20 + 2 * v31 + 4208) = v64;
    if ( inited[54] - 1 >= 4 )
      v49 = 1;
    else
      v49 = *((_BYTE *)inited + 216);
    *(_BYTE *)(v20 + 2 * v31 + 4209) = v49;
    _interlockedbittestandset((volatile signed __int32 *)(v20 + 4224), v31);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, inited);
  if ( FileName < 0 )
    goto LABEL_225;
  v32 = *(_DWORD *)(a2 + 52);
  if ( v32 )
    inited[60] = v32;
  v33 = *(_DWORD *)(a2 + 56);
  if ( v33 )
    inited[63] = v33;
  v34 = *(_DWORD *)(a2 + 48);
  if ( v34 )
  {
    if ( v34 > 0x4000 )
    {
      *(_DWORD *)(a2 + 48) = 0x4000;
      v34 = 0x4000;
    }
    inited[1] = v34 << 10;
  }
  if ( v29->Length )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 209, 1u);
    *((_QWORD *)inited + 6) = KeGetCurrentThread();
    FileName = EtwpCreateLogFile(inited, 0LL);
    if ( FileName < 0 )
    {
LABEL_225:
      v56 = v67;
      if ( (inited[3] & 0x2000000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v67 + 4224), v66);
      v59 = inited[208];
      if ( (v59 & 0x80u) != 0 )
      {
        ExFreePoolWithTag(*((PVOID *)inited + 123), 0);
        v59 = inited[208];
      }
      if ( (v59 & 0x2000) != 0 )
        _InterlockedDecrement(&dword_14046B820);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 46));
      v60 = (void *)*((_QWORD *)inited + 102);
      if ( v60 )
        ZwClose(v60);
      ExFreePoolWithTag(inited, 0);
LABEL_234:
      v61 = v64;
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v56 + 448) + 8LL * v64), 1u);
      _InterlockedExchange64((volatile __int64 *)(v74 + 8 * v61), 1LL);
      goto LABEL_235;
    }
  }
  v35 = inited[1];
  if ( v35 < 0x1000 && (v29->Length || (inited[3] & 0x400) != 0) )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x1000u);
    v35 = inited[1];
  }
  v36 = 0xFFFF;
  if ( (unsigned __int64)v35 - 72 < 0xFFFF )
    v36 = v35 - 72;
  inited[2] = v36 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool(inited);
  if ( FileName < 0 )
    goto LABEL_243;
  v37 = inited[77];
  if ( !v37 || (inited[3] & 0x2000) != 0 )
    v38 = 10485760LL;
  else
    v38 = (unsigned __int64)v37 << 20;
  v40 = inited[1] * inited[63];
  if ( v38 <= (unsigned int)(2 * v40) )
    v38 = (unsigned int)(2 * v40);
  *((_QWORD *)inited + 54) = v38;
  FileName = EtwpInitializeLoggerSecurityDescriptor(inited, SecurityDescriptor);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  if ( FileName < 0 )
  {
LABEL_243:
    EtwpFreeTraceBufferPool(inited);
    goto LABEL_225;
  }
  _InterlockedAdd((volatile signed __int32 *)(v20 + 4124), 1u);
  v41 = v67;
  v42 = v64;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v67 + 448) + 8LL * v64), 1u);
  if ( (inited[3] & 0x400) != 0 )
    goto LABEL_119;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  StartContext = PsGetCurrentServerSilo();
  v76 = inited;
  FileName = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, EtwpLogger, &StartContext);
  if ( FileName < 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v41 + 448) + 8 * v42), 1u);
LABEL_245:
    EtwpFreeLoggerContext(inited);
    return (unsigned int)FileName;
  }
  ZwClose(ThreadHandle);
  FileName = KeWaitForSingleObject(inited + 118, Executive, 0, 0, 0LL);
LABEL_119:
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v43, &ETW_EVENT_START_TRACE, inited);
  KeWaitForSingleObject(inited + 162, Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v74 + 8 * v42), (__int64)inited);
  EtwpSendSessionNotification(inited, 5LL, 0LL);
  if ( (inited[3] & 0x2000000) != 0 )
  {
    if ( v41 == EtwpHostSiloState )
    {
      LOBYTE(v44) = 1;
      FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v44);
      if ( FileName < 0 )
      {
LABEL_246:
        inited[14] = FileName;
        EtwpStopLoggerInstance(inited);
        if ( (inited[3] & 0x400) == 0 )
          goto LABEL_122;
        EtwpGetLoggerInfoFromContext(a2, inited);
        EtwpReleaseLoggerContext(inited, 1);
        goto LABEL_245;
      }
      v50 = 5LL * v66;
      *((_WORD *)&EtwpObjectTypeFilter + 2 * v50) = 1;
      *((_DWORD *)&EtwpObjectTypeFilter + v50 + 1) = 42;
    }
    FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
    if ( FileName >= 0 )
      goto LABEL_122;
    goto LABEL_246;
  }
LABEL_122:
  if ( v65 != 9 )
    EtwpUpdatePerProcessTracing(a2, v41, *inited, v65);
  EtwpGetLoggerInfoFromContext(a2, inited);
  EtwpReleaseLoggerContext(inited, 1);
  return (unsigned int)FileName;
}
