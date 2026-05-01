/*
 * XREFs of ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011A90
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180011E9C (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 *     ?RmpActivityHostGetCommitLevel@@YA?AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180011F60 (-RmpActivityHostGetCommitLevel@@YA-AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x1800120A4 (-RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180012130 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180012360 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180021B80 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall RmpActivityHostCommitUseUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  __int128 v5; // xmm1
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  unsigned int CommitLevel; // eax
  DWORD v13; // ebx
  unsigned __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v19; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v21[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE TlsValue[144]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+138h] [rbp+30h] BYREF
  void *v24; // [rsp+148h] [rbp+40h]
  int v25; // [rsp+150h] [rbp+48h]
  int v26; // [rsp+154h] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+158h] [rbp+50h] BYREF
  void *v28; // [rsp+168h] [rbp+60h]
  int v29; // [rsp+170h] [rbp+68h]
  int v30; // [rsp+174h] [rbp+6Ch]
  __int64 *v31; // [rsp+178h] [rbp+70h]
  __int64 v32; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v33; // [rsp+188h] [rbp+80h]
  __int64 v34; // [rsp+190h] [rbp+88h]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  v14 = 0LL;
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180085ECE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0B8;
    v24 = &unk_180085ED9;
    UserData.Reserved = 2;
    v25 = 32;
    v26 = 1;
    EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  RmpAcquireGlobalLock();
  *((_DWORD *)a2 + 354) &= ~1u;
  if ( *((_DWORD *)a2 + 274) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 6) + 2684LL) & 2) == 0 )
    {
      v5 = *(_OWORD *)(a2 + 1128);
      v6 = *((_QWORD *)a2 + 141);
      v21[0] = *(_OWORD *)(a2 + 1112);
      v21[1] = v5;
      if ( v6 )
      {
        if ( (int)RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)a2, 0LL, &v14, &v20) >= 0 )
        {
          v7 = v14;
          v8 = *((_QWORD *)a2 + 159);
          v9 = *((_QWORD *)a2 + 162);
          if ( v14 < v8 )
          {
            v10 = 0LL;
          }
          else if ( v14 < *((_QWORD *)a2 + 160) )
          {
            v10 = *((_QWORD *)a2 + 159);
            v8 = *((_QWORD *)a2 + 160);
          }
          else if ( v14 < *((_QWORD *)a2 + 161) )
          {
            v8 = *((_QWORD *)a2 + 161);
            v10 = *((_QWORD *)a2 + 160);
          }
          else
          {
            v10 = *((_QWORD *)a2 + 161);
            v8 = -1LL;
          }
          RmpActivityHostComputeCommitEstimate(v14, *((_QWORD *)a2 + 162), &v15, &v16);
          v11 = v16;
          if ( v10 <= v15 )
            v10 = v15;
          if ( v7 <= v9 && v8 >= v16 )
            v8 = v16;
          *(_QWORD *)&v21[0] = v10;
          *((_QWORD *)&v21[0] + 1) = v8;
          CommitLevel = RmpActivityHostGetCommitLevel(a2 + 1272, v7);
          RmpActivityHostUpdateCommitUseState(a2, v14, CommitLevel);
          RmpActivityHostEnsureCommitHeadroom((struct _RM_ACTIVITY_HOST *)a2, v14, v11);
          RmpActivityHostApplyEnforcementSettings(
            (struct _RM_ACTIVITY_HOST *)a2,
            (struct _RM_ENFORCEMENT_SETTINGS *)v21,
            1u);
        }
      }
    }
  }
  RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)a2);
  RmpReleaseGlobalLock();
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
  {
    v17 = *((_QWORD *)a2 + 4);
    v31 = &v17;
    v33 = &v14;
    v32 = 8LL;
    v34 = 8LL;
    *(_DWORD *)&v19.Level = 516;
    v27.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&v19.Id = ((unsigned int)&unk_18008620D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v19.Keyword = 1LL;
    v27.Size = *(unsigned __int16 *)off_18009B0B8;
    v28 = &unk_180086218;
    v27.Reserved = 2;
    v29 = 51;
    v30 = 1;
    EventWriteTransfer(qword_18009B0D0, &v19, 0LL, 0LL, 4u, &v27);
  }
  RmpObjectRelease((struct _RM_OBJECT_HEADER *)a2);
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
}
