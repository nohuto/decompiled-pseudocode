/*
 * XREFs of ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180019180
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180019594 (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 *     ?RmpActivityHostGetCommitLevel@@YA?AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180019658 (-RmpActivityHostGetCommitLevel@@YA-AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180019B30 (-RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180019BBC (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180019DA0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001A258 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800257F0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall RmpActivityHostCommitUseUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  __int128 v5; // xmm1
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  unsigned int CommitLevel; // eax
  DWORD v14; // ebx
  unsigned __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v21; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v22[3]; // [rsp+80h] [rbp-88h] BYREF
  _OWORD v23[2]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE TlsValue[144]; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+148h] [rbp+40h] BYREF
  void *v26; // [rsp+158h] [rbp+50h]
  int v27; // [rsp+160h] [rbp+58h]
  int v28; // [rsp+164h] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+168h] [rbp+60h] BYREF
  void *v30; // [rsp+178h] [rbp+70h]
  int v31; // [rsp+180h] [rbp+78h]
  int v32; // [rsp+184h] [rbp+7Ch]
  __int64 *v33; // [rsp+188h] [rbp+80h]
  __int64 v34; // [rsp+190h] [rbp+88h]
  unsigned __int64 *v35; // [rsp+198h] [rbp+90h]
  __int64 v36; // [rsp+1A0h] [rbp+98h]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  v15 = 0LL;
  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v26 = &unk_180093C96;
    UserData.Reserved = 2;
    v27 = 32;
    v28 = 1;
    LODWORD(v16) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  RmpAcquireGlobalLock();
  a2[368] &= ~1u;
  if ( RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)a2, 2u) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 6) + 2616LL) & 1) == 0 )
    {
      v5 = *((_OWORD *)a2 + 74);
      v6 = *((_QWORD *)a2 + 148);
      v23[0] = *((_OWORD *)a2 + 73);
      v23[1] = v5;
      if ( v6 )
      {
        if ( (int)RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)a2, 0LL, &v15, v22) >= 0 )
        {
          v7 = v15;
          v8 = *((_QWORD *)a2 + 166);
          v9 = *((_QWORD *)a2 + 169);
          v10 = *((_QWORD *)a2 + 167);
          v16 = v9;
          if ( v15 < v8 )
          {
            v11 = 0LL;
          }
          else if ( v15 < v10 )
          {
            v11 = v8;
            v8 = v10;
          }
          else if ( v15 < *((_QWORD *)a2 + 168) )
          {
            v8 = *((_QWORD *)a2 + 168);
            v11 = v10;
          }
          else
          {
            v11 = *((_QWORD *)a2 + 168);
            v8 = -1LL;
          }
          RmpActivityHostComputeCommitEstimate(v15, v9, &v17, &v18);
          v12 = v18;
          if ( v11 <= v17 )
            v11 = v17;
          if ( v7 <= v16 && v8 >= v18 )
            v8 = v18;
          *(_QWORD *)&v23[0] = v11;
          *((_QWORD *)&v23[0] + 1) = v8;
          v22[1] = v18;
          CommitLevel = RmpActivityHostGetCommitLevel(a2 + 332, v7);
          v22[2] = v12;
          RmpActivityHostUpdateCommitUseState(a2, v15, CommitLevel);
          RmpActivityHostEnsureCommitHeadroom((struct _RM_ACTIVITY_HOST *)a2, v15, v12);
          RmpActivityHostApplyEnforcementSettings(a2, (struct _RM_ENFORCEMENT_SETTINGS *)v23, 1u);
        }
      }
    }
  }
  RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)a2);
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    v19 = *((_QWORD *)a2 + 4);
    v33 = &v19;
    v35 = &v15;
    v34 = 8LL;
    v36 = 8LL;
    *(_DWORD *)&v21.Level = 516;
    v29.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&v21.Id = 184549376;
    v21.Keyword = 1LL;
    v29.Size = *(unsigned __int16 *)off_1800AB288;
    v30 = &unk_180093FD5;
    v29.Reserved = 2;
    v31 = 51;
    v32 = 1;
    LODWORD(v16) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &v21, 0LL, 0LL, 4u, &v29);
  }
  RmpObjectRelease(a2);
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
}
