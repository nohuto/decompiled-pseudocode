/*
 * XREFs of ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027B40
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013534 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013580 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x18003A940 (-HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003B7D8 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_LICENSE_TYPE@@_K@Z @ 0x18003BA84 (-HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_.c)
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x1800406A4 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x180079220 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007933C (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800793D8 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

__int64 __fastcall HampAppCheckQueueLicenseUpgradeForHost(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  DWORD v4; // esi
  __int64 v5; // rdi
  _QWORD *Value; // rbx
  unsigned int *v7; // rsi
  _QWORD *v8; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  struct _HAM_USER *v13; // r12
  __int64 v14; // rdx
  int v15; // r9d
  int i; // ebx
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  char v20; // [rsp+38h] [rbp-D0h] BYREF
  char v21; // [rsp+39h] [rbp-CFh] BYREF
  int ContextToken; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v29; // [rsp+88h] [rbp-80h]
  int v30; // [rsp+90h] [rbp-78h]
  int v31; // [rsp+94h] [rbp-74h]
  int *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  char *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  int *p_ContextToken; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  char *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  __int64 *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]

  if ( (*((_BYTE *)a2 + 772) & 1) == 0 )
    return 0LL;
  v4 = HampLockTrackerId;
  v5 = *((_QWORD *)a2 + 81) >> 62;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockShared((char *)a1 + 576);
  v7 = (unsigned int *)((char *)a1 + 608);
  if ( ((*((_DWORD *)a1 + 152) >> 21) & 3u) < (unsigned int)v5 )
  {
    HampAppReleaseLockShared(a1);
    HampHostReleaseLockExclusiveEx(a2, v11);
    RmpReleaseGlobalLock();
    HampAppAcquireLockExclusive(a1);
    v12 = *v7;
    if ( ((*v7 >> 21) & 3) >= (unsigned int)v5 )
    {
LABEL_28:
      HampAppReleaseLockExclusive(a1);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a2, 0);
      return 1LL;
    }
    while ( (v12 & 0x100000) != 0 )
    {
      HampAppTraceWaitForLicenseWorkerForHost(a2);
      HampAppWaitForFlagChange(a1);
      v12 = *((_DWORD *)a1 + 152);
      if ( ((v12 >> 21) & 3) >= (unsigned int)v5 )
        goto LABEL_28;
    }
    *v7 = v12 | 0x100000;
    HampAppReleaseLockExclusive(a1);
    v13 = *(struct _HAM_USER **)(*((_QWORD *)a1 + 11) + 88LL);
    ContextToken = HampUserTryGetContextToken(v13, &v24);
    v15 = ContextToken;
    if ( ContextToken >= 0 )
    {
      for ( i = 0; ; i = 1 )
      {
        ContextToken = HampSystemBeginStoreLicenseAcquisition(a1, v14, (unsigned int)v5, v24);
        v15 = ContextToken;
        if ( ContextToken >= 0 )
          break;
        if ( i )
          goto LABEL_19;
        ContextToken = HampUserTryRefreshContextToken(v13, &v24);
        v15 = ContextToken;
        if ( ContextToken < 0 )
          goto LABEL_19;
      }
      if ( i )
      {
        if ( dword_1800AB2C0 <= 4u )
        {
LABEL_23:
          if ( v15 < 0 )
            HampAppRequestLicensingActivityStops(a1, v15);
          HampAppAcquireLockExclusive(a1);
          if ( ContextToken < 0 )
            v18 = *((_DWORD *)a1 + 152);
          else
            v18 = ((_DWORD)v5 << 21) | *v7 & 0xFF9FFFFF;
          *v7 = v18 & 0xFFEFFFFF;
          RtlWakeAddressAll((char *)a1 + 608);
          goto LABEL_28;
        }
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
        {
          v41 = 4LL;
          p_ContextToken = &ContextToken;
          TlgCreateWsz(&v42, (LPCWSTR)a2 + 12);
          v19 = *((_QWORD *)a2 - 4);
          v43 = &v25;
          v45 = &v20;
          v47 = &v23;
          v25 = v19;
          v44 = 8LL;
          v20 = v5;
          v46 = 1LL;
          LODWORD(v23) = i;
          v48 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800995F0, 0LL, 0LL, 7u, &pData);
          v15 = ContextToken;
        }
      }
    }
LABEL_19:
    if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
    {
      v33 = 4LL;
      v32 = &ContextToken;
      TlgCreateWsz(&pDesc, (LPCWSTR)a2 + 12);
      v17 = *((_QWORD *)a2 - 4);
      v35 = &v26;
      v37 = &v21;
      v26 = v17;
      v36 = 8LL;
      v21 = v5;
      v38 = 1LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800AB2C8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
      v29 = &unk_18009955C;
      UserData.Reserved = 2;
      v30 = 62;
      v31 = 1;
      LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      v15 = ContextToken;
    }
    goto LABEL_23;
  }
  if ( HampLockTrackerId != -1 )
  {
    v8 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v8 & 0x20) == 0 )
      __int2c();
    if ( v8[6]-- == 1LL )
      *v8 &= ~0x20uLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 576);
  return 0LL;
}
