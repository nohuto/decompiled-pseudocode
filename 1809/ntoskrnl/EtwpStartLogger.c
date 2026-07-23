/*
 * XREFs of EtwpStartLogger @ 0x14065A360
 * Callers:
 *     EtwpStartTrace @ 0x1406CEF4C (EtwpStartTrace.c)
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D78F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     EtwpSetQpcDeltaTracking @ 0x140312910 (EtwpSetQpcDeltaTracking.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAccessCheck @ 0x1405C6280 (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405C6658 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C7050 (EtwpGetSecurityDescriptorByGuid.c)
 *     ObLogSecurityDescriptor @ 0x1405CAE70 (ObLogSecurityDescriptor.c)
 *     ExUuidCreate @ 0x1406072C0 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     SeCreateClientSecurity @ 0x14064A390 (SeCreateClientSecurity.c)
 *     EtwpCheckGuidAccess @ 0x140657EC4 (EtwpCheckGuidAccess.c)
 *     EtwpSendSessionNotification @ 0x140659F28 (EtwpSendSessionNotification.c)
 *     EtwpCaptureString @ 0x14065B1E4 (EtwpCaptureString.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14065BC90 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x14065BF54 (EtwpAllocateTraceBufferPool.c)
 *     EtwpCheckForStackTracingExtension @ 0x14065C10C (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x14065C148 (EtwpGetFlagExtension.c)
 *     EtwpInitializeTimeStamp @ 0x14065C188 (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x14065C2EC (EtwpInitLoggerContext.c)
 *     EtwpLookupLoggerIdByName @ 0x14065C68C (EtwpLookupLoggerIdByName.c)
 *     EtwpValidateFlagExtension @ 0x14065C72C (EtwpValidateFlagExtension.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 *     EtwpCreateLogFile @ 0x14069ACBC (EtwpCreateLogFile.c)
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1406C1FC4 (EtwpFreeTraceBufferPool.c)
 *     EtwpStopLoggerInstance @ 0x1406CCAF4 (EtwpStopLoggerInstance.c)
 *     EtwpGenerateFileName @ 0x1406D07DC (EtwpGenerateFileName.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14072703C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x1407280C4 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408B6B34 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1408BC0F0 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1408BC328 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1, __int64 a2)
{
  int v3; // r8d
  unsigned int v4; // ecx
  int v5; // edx
  unsigned int v6; // r15d
  int FileName; // edi
  ACCESS_MASK v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // esi
  unsigned int *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rsi
  signed __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int *inited; // rsi
  unsigned int v26; // eax
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  UNICODE_STRING *v30; // r13
  int v31; // eax
  __int64 v32; // r9
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // ecx
  int v37; // edx
  unsigned int v38; // ecx
  unsigned __int64 v39; // rdx
  __int64 v40; // rdi
  int v41; // eax
  char *v42; // rcx
  __int64 v43; // r13
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // ecx
  __int64 v51; // rbx
  unsigned int v52; // ebx
  const WCHAR *v53; // rdx
  bool v54; // zf
  char v55; // dl
  int updated; // ebx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // r9d
  unsigned int v60; // eax
  __int64 v61; // r13
  __int64 v62; // rbx
  int v63; // ecx
  int v64; // r8d
  unsigned int v65; // eax
  void *v66; // rcx
  unsigned int v67; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v68; // [rsp+54h] [rbp-ACh]
  unsigned int v69; // [rsp+58h] [rbp-A8h]
  __int64 v70; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-88h] BYREF
  int v73; // [rsp+80h] [rbp-80h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+84h] [rbp-7Ch]
  __int64 v75; // [rsp+88h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v80[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v81; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+E0h] [rbp-20h]
  int v84; // [rsp+E8h] [rbp-18h]
  __int128 v85; // [rsp+F0h] [rbp-10h]
  UUID Buf2; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v88; // [rsp+130h] [rbp+30h]
  __int64 v89; // [rsp+138h] [rbp+38h]

  v70 = a1;
  v69 = 8;
  SecurityDescriptor = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v3 = *(_DWORD *)(a2 + 64);
  v4 = v3 & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((v3 & 8) != 0 || (v3 & 4) != 0) )
    v4 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  v5 = v4 | 0x80;
  if ( (v4 & 0x40000) == 0 )
    v5 = v4;
  v6 = v5;
  if ( (v5 & 0x80000) != 0 && (v5 & 0x1000000) != 0 )
    v6 = v5 & 0xFEFFFFFF;
  if ( (v6 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v6 & 0x4000F) != 0 )
      goto LABEL_128;
    v50 = v6 & 0xFFFFFEFF;
    if ( (v6 & 0x100) == 0 )
      v50 = v6;
    v6 = v50;
    if ( *(_DWORD *)(a2 + 68) )
      *(_DWORD *)(a2 + 68) = 0;
    if ( *(_DWORD *)(a2 + 76) )
      *(_DWORD *)(a2 + 76) = 0;
  }
  if ( (v6 & 3) == 3
    || (v6 & 0xC000) == 0xC000
    || (v6 & 0x700) == 0 && !*(_QWORD *)(a2 + 136)
    || (v6 & 6) == 6
    || (v6 & 2) != 0 && !*(_DWORD *)(a2 + 60)
    || (v6 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (v3 & 0xC) != 0)
    || (v6 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0 || (v6 & 0x402) == 0 && ((v6 & 0x100) == 0 || *(_QWORD *)(a2 + 136)))
    || (v6 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_128;
  }
  if ( (v6 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v6 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v3 & 0x2000000) != 0 )
    {
      goto LABEL_128;
    }
    v48 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v48 )
      v48 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v48 )
      goto LABEL_128;
    v49 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v49 )
      v49 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v49 || (v6 & 4) != 0 )
      goto LABEL_128;
  }
  if ( (v3 & 0x3000000) == 0x3000000 || (v3 & 0x4000000) != 0 && (v3 & 0x400) == 0 || (v3 & 0x10000) != 0 )
    goto LABEL_128;
  FileName = EtwpValidateFlagExtension(a2);
  if ( FileName < 0 )
    goto LABEL_226;
  v8 = ((v6 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v8 = (v6 & 0x100 | 0x400) >> 3;
  DesiredAccess = v8;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_128;
  FileName = EtwpCaptureString(a2 + 144, &DestinationString);
  if ( FileName )
  {
LABEL_226:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v63,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v64,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v6);
    RtlFreeAnsiString(&DestinationString);
    RtlFreeAnsiString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  v9 = v70;
  if ( !(unsigned int)EtwpLookupLoggerIdByName(v70, &DestinationString, &v67) )
    goto LABEL_198;
  v10 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&NullGuid.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a2 + 32) - *(_QWORD *)NullGuid.Data4;
  if ( v10 )
  {
    Buf2 = *(UUID *)(a2 + 24);
  }
  else
  {
    FileName = ExUuidCreate(&Buf2);
    if ( FileName < 0 )
      goto LABEL_226;
    v9 = v70;
  }
  if ( (v6 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (unsigned int)MmGetSessionId((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      v6 |= 0x400000u;
    }
    else
    {
      v6 |= 0x800000u;
    }
  }
  v11 = *(_QWORD *)&Buf2.Data1;
  v12 = *(_QWORD *)(v9 + 456);
  v13 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
  v14 = *(_QWORD *)Buf2.Data4;
  v75 = v12;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
    v13 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v13 )
    goto LABEL_160;
  v15 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&CKCLGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&CKCLGuid.Data1 )
    v15 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)CKCLGuid.Data4;
  if ( !v15 )
  {
LABEL_160:
    RtlFreeAnsiString(&DestinationString);
    v51 = v11 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v51 )
      v51 = v14 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v51 )
    {
      v52 = 2;
      v69 = 1;
      v53 = L"Circular Kernel Context Logger";
    }
    else
    {
      v52 = 0;
      v69 = 0;
      v53 = L"NT Kernel Logger";
    }
    v67 = v52;
    if ( !RtlCreateUnicodeString(&DestinationString, v53) )
      goto LABEL_215;
    v6 |= 0x80u;
    if ( (v6 & 0x1000000) == 0 )
    {
      v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8LL * v52), v12 | 1, 1LL) == 1;
      goto LABEL_167;
    }
    goto LABEL_128;
  }
  v16 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v16 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v16 )
  {
    v67 = 1;
    if ( !EtwpGetFlagExtension(a2, 1LL) )
    {
LABEL_203:
      v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), v12 | 1, 1LL) == 1;
LABEL_167:
      if ( v54 )
        goto LABEL_168;
LABEL_198:
      FileName = -1073741771;
      goto LABEL_226;
    }
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_215;
      v69 = 0;
      goto LABEL_203;
    }
LABEL_128:
    FileName = -1073741811;
    goto LABEL_226;
  }
  v17 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
    v17 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
  if ( !v17 )
  {
    v67 = 3;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v6 |= 0x80u;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), v12 | 1, 1LL) != 1 )
          goto LABEL_198;
LABEL_168:
        v21 = v70;
        goto LABEL_59;
      }
LABEL_215:
      FileName = -1073741801;
      goto LABEL_226;
    }
    goto LABEL_128;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v58 = v11 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( v11 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v58 = v14 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v58 )
      goto LABEL_198;
  }
  v18 = *(_DWORD *)(v9 + 16);
  v19 = 4;
  if ( v18 <= 4 )
  {
LABEL_52:
    v21 = v70;
    goto LABEL_53;
  }
  while ( 1 )
  {
    v20 = EtwpAcquireLoggerContextByLoggerId(v9, v19, 0);
    if ( v20 )
      break;
LABEL_51:
    v18 = *(_DWORD *)(v9 + 16);
    if ( ++v19 >= v18 )
      goto LABEL_52;
  }
  v40 = *(_QWORD *)(v20 + 73) - v11;
  if ( !v40 )
    v40 = *(_QWORD *)(v20 + 75) - v14;
  EtwpReleaseLoggerContext(v20, 0);
  if ( v40 )
  {
    v9 = v70;
    goto LABEL_51;
  }
  v21 = v70;
  v18 = *(_DWORD *)(v70 + 16);
LABEL_53:
  if ( v19 < v18 )
    goto LABEL_198;
  v67 = 4;
  if ( v18 > 4 )
  {
    v22 = v75;
    v23 = v75 | 1;
    do
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 8LL * v67), v23, 1LL) == 1 )
        break;
      ++v67;
    }
    while ( v67 < *(_DWORD *)(v21 + 16) );
  }
  if ( v67 >= *(_DWORD *)(v21 + 16) )
  {
    if ( !byte_1404DFC30 )
    {
      byte_1404DFC30 = 1;
      if ( stru_140401308.LevelPlus1 > 5 )
      {
        if ( TlgKeywordOn(&stru_140401308, 0x800000000000uLL) )
        {
          v73 = v59;
          v88 = &v73;
          v89 = 4LL;
          TlgWrite(&stru_140401308, &unk_1403748ED, 0LL, 0LL, 3u, &pData);
        }
      }
    }
    FileName = -1073741670;
    goto LABEL_226;
  }
LABEL_59:
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v21 + 448) + 8LL * v67), 1u);
  EtwpGetSecurityDescriptorByGuid(&Buf2.Data1, &SecurityDescriptor);
  FileName = EtwpAccessCheck(SecurityDescriptor, DesiredAccess, 0LL);
  if ( FileName < 0 )
    goto LABEL_224;
  v24 = *(_QWORD *)&HeapGuid.Data1 - *(_QWORD *)&Buf2.Data1;
  if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)&Buf2.Data1 )
    v24 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)Buf2.Data4;
  if ( v24 )
    v68 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  else
    v68 = 0;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v69 == 8 )
  {
    FileName = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
    if ( FileName < 0 )
      goto LABEL_224;
    v60 = 2;
    v69 = 2;
    do
    {
      if ( !_bittest((const signed __int32 *)(v21 + 4224), v60) )
        break;
      ++v60;
    }
    while ( v60 < 8 );
    v69 = v60;
    if ( v60 == 8 )
    {
      FileName = -1073741670;
      goto LABEL_224;
    }
  }
  inited = (unsigned int *)EtwpInitLoggerContext(&DestinationString, v6);
  RtlFreeAnsiString(&DestinationString);
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_224:
    v61 = v70;
    goto LABEL_225;
  }
  *(UUID *)(inited + 73) = Buf2;
  inited[77] = *(_DWORD *)(a2 + 60);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x10u);
  inited[54] = *(_DWORD *)(a2 + 40);
  if ( (*(_DWORD *)(a2 + 80) & 2) != 0 )
  {
    FileName = EtwpSetQpcDeltaTracking((__int64)inited);
    if ( FileName < 0 )
      goto LABEL_232;
  }
  v26 = *(_DWORD *)(a2 + 68);
  if ( v26 )
  {
    inited[56] = v26;
  }
  else if ( (v6 & 0x100) != 0 )
  {
    inited[56] = (v6 & 0x10) != 0 ? 1000 : 1;
  }
  v27 = *(_DWORD *)(a2 + 76);
  v28 = v27;
  if ( v27 && (inited[56] || v27 < 0) )
  {
    *(_DWORD *)(a2 + 76) = 0;
    v28 = 0;
  }
  v29 = v67;
  inited[57] = v28;
  *inited = v29;
  *((_QWORD *)inited + 135) = v21;
  if ( *(_WORD *)(a2 + 128) )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      FileName = EtwpCaptureString(a2 + 128, &UnicodeString);
      if ( FileName < 0 )
        goto LABEL_232;
    }
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[78] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = 0;
  }
  v30 = (UNICODE_STRING *)(inited + 42);
  if ( (inited[3] & 8) != 0 )
  {
    *(UNICODE_STRING *)(inited + 46) = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
    FileName = EtwpGenerateFileName(inited + 46, inited + 78, inited + 42);
    if ( FileName >= 0 )
    {
      v21 = v70;
      goto LABEL_80;
    }
    goto LABEL_232;
  }
  *v30 = UnicodeString;
  RtlInitUnicodeString(&UnicodeString, 0LL);
LABEL_80:
  ClientSecurityQos.Length = 12;
  ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
  FileName = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)inited + 10);
  if ( FileName < 0 )
    goto LABEL_232;
  if ( (inited[3] & 0x100) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 8u);
  else
    _InterlockedAnd((volatile signed __int32 *)inited + 208, 0xFFFFFFF7);
  v31 = *(_DWORD *)(a2 + 112);
  if ( (v31 & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 2u);
    v31 = *(_DWORD *)(a2 + 112);
  }
  if ( (v31 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 1u);
    v31 = *(_DWORD *)(a2 + 112);
  }
  if ( (v31 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x4000u);
  EtwpInitializeTimeStamp(inited);
  v32 = v69;
  if ( v69 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 834) = v32;
    if ( (unsigned int)v32 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 208, 0x20u);
    v55 = 1;
    *(_BYTE *)(v21 + 2 * v32 + 4208) = v67;
    if ( inited[54] - 1 < 4 )
      v55 = inited[54];
    *(_BYTE *)(v21 + 2 * v32 + 4209) = v55;
    _interlockedbittestandset((volatile signed __int32 *)(v21 + 4224), v32);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, inited);
  if ( FileName < 0 )
    goto LABEL_232;
  v33 = *(_DWORD *)(a2 + 52);
  if ( v33 )
    inited[60] = v33;
  v34 = *(_DWORD *)(a2 + 56);
  if ( v34 )
    inited[63] = v34;
  v35 = *(_DWORD *)(a2 + 48);
  if ( v35 )
  {
    if ( v35 > 0x4000 )
    {
      *(_DWORD *)(a2 + 48) = 0x4000;
      v35 = 0x4000;
    }
    inited[1] = v35 << 10;
  }
  if ( v30->Length )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 209, 1u);
    *((_QWORD *)inited + 6) = KeGetCurrentThread();
    FileName = EtwpCreateLogFile(inited, 0LL);
    if ( FileName < 0 )
    {
LABEL_232:
      v61 = v70;
      if ( (inited[3] & 0x2000000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v70 + 4224), v69);
      v65 = inited[208];
      if ( (v65 & 0x80u) != 0 )
      {
        ExFreePoolWithTag(*((PVOID *)inited + 123), 0);
        v65 = inited[208];
      }
      if ( (v65 & 0x2000) != 0 )
        _InterlockedDecrement(&dword_140440AA0);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 46));
      v66 = (void *)*((_QWORD *)inited + 102);
      if ( v66 )
        ZwClose(v66);
      ExFreePoolWithTag(inited, 0);
LABEL_225:
      v62 = v67;
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v61 + 448) + 8LL * v67), 1u);
      _InterlockedExchange64((volatile __int64 *)(v75 + 8 * v62), 1LL);
      goto LABEL_226;
    }
  }
  v36 = inited[1];
  if ( v36 < 0x1000 && (v30->Length || (inited[3] & 0x400) != 0) )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x1000u);
    v36 = inited[1];
  }
  v37 = 0xFFFF;
  if ( (unsigned __int64)v36 - 72 < 0xFFFF )
    v37 = v36 - 72;
  inited[2] = v37 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool(inited);
  if ( FileName < 0 )
    goto LABEL_245;
  v38 = inited[77];
  if ( !v38 || (inited[3] & 0x2000) != 0 )
    v39 = 10485760LL;
  else
    v39 = (unsigned __int64)v38 << 20;
  v41 = inited[1] * inited[63];
  if ( v39 <= (unsigned int)(2 * v41) )
    v39 = (unsigned int)(2 * v41);
  v42 = (char *)SecurityDescriptor;
  *((_QWORD *)inited + 54) = v39;
  FileName = ObLogSecurityDescriptor(v42, &v78, 0x10u);
  if ( FileName >= 0 )
  {
    if ( v78 )
      *((_QWORD *)inited + 100) = v78 + 15;
    else
      *((_QWORD *)inited + 100) = 0LL;
  }
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  if ( FileName < 0 )
  {
LABEL_245:
    EtwpFreeTraceBufferPool(inited);
    goto LABEL_232;
  }
  _InterlockedAdd((volatile signed __int32 *)(v21 + 4124), 1u);
  v43 = v70;
  v44 = v67;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v70 + 448) + 8LL * v67), 1u);
  if ( (inited[3] & 0x400) != 0 )
    goto LABEL_122;
  v81 = 48;
  v85 = 0LL;
  v82 = 0LL;
  v84 = 512;
  v83 = 0LL;
  v80[0] = PsGetCurrentServerSilo();
  v80[1] = inited;
  FileName = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, &v81, 0LL, 0LL, EtwpLogger, v80, 0LL, 0LL);
  if ( FileName < 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v43 + 448) + 8 * v44), 1u);
    EtwpFreeLoggerContext(inited);
    return (unsigned int)FileName;
  }
  ZwClose(Handle);
  KeWaitForSingleObject(inited + 118, Executive, 0, 0, 0LL);
LABEL_122:
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v45, &ETW_EVENT_START_TRACE, inited);
  KeWaitForSingleObject(inited + 162, Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v75 + 8 * v44), (__int64)inited);
  EtwpSendSessionNotification((__int64)inited, 5u, 0);
  if ( (inited[3] & 0x2000000) == 0 )
  {
LABEL_125:
    if ( v68 != 9 )
      EtwpUpdatePerProcessTracing(a2, v43, *inited, v68);
    EtwpGetLoggerInfoFromContext(a2, inited);
    EtwpReleaseLoggerContext(inited, 1);
    return 0LL;
  }
  if ( v43 == EtwpHostSiloState )
  {
    LOBYTE(v46) = 1;
    updated = EtwpCheckForPoolTagFilterExtension(inited, a2, v46);
    if ( updated >= 0 )
    {
      v57 = 5LL * v69;
      *((_WORD *)&EtwpObjectTypeFilter + 2 * v57) = 1;
      *((_DWORD *)&EtwpObjectTypeFilter + v57 + 1) = 42;
      goto LABEL_177;
    }
  }
  else
  {
LABEL_177:
    updated = EtwpUpdateLoggerGroupMasks(inited, a2);
    if ( updated >= 0 )
      goto LABEL_125;
  }
  inited[14] = updated;
  EtwpStopLoggerInstance(inited);
  if ( (inited[3] & 0x400) == 0 )
    goto LABEL_125;
  EtwpGetLoggerInfoFromContext(a2, inited);
  EtwpReleaseLoggerContext(inited, 1);
  EtwpFreeLoggerContext(inited);
  return (unsigned int)updated;
}
