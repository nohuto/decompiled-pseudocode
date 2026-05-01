/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180019680
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000A1B0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@0@Z @ 0x180007CEC (-erase@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@R.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@1@2AEA_K@Z @ 0x1800091C0 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HO.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C664 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012A20 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180018884 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002F2C8 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        struct _RM_SERVICE_GLOBALS **this,
        struct _RM_PSM_HOST_INFO *a2)
{
  unsigned __int64 v4; // rax
  char *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  char *v8; // r14
  char *v9; // r15
  __int64 *v10; // rbx
  int v12; // edx
  __int64 v13; // r9
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v23; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-78h] BYREF
  void *v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A4h] [rbp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+B0h] [rbp-50h] BYREF
  void *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  unsigned int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]

  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v25 = &unk_180092E22;
    UserData.Reserved = 2;
    v26 = 33;
    v27 = 1;
    v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = *((_QWORD *)a2 + 68);
  P = 0LL;
  v5 = 0LL;
  v18 = v4;
  RmpAcquireGlobalLock();
  v6 = RmpActivityHostFindByHostId(this[16], v18, (struct _RM_ACTIVITY_HOST **)&P);
  v8 = (char *)P;
  if ( v6 >= 0 )
  {
    if ( (*((_BYTE *)P + 836) & 1) != 0 )
    {
      v5 = (char *)P + 64;
      RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64));
      RmpReleaseGlobalLock();
      HampHostCheckNotifyZeroProcess((struct _RM_HAM_ACTIVITY_HOST *)(v8 + 64));
      RmpAcquireGlobalLock();
    }
    RmpActivityHostZeroProcessNotification(v8);
  }
  v17 = 0LL;
  v19 = 0LL;
  v9 = (char *)(this + 21);
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (__int64)v9,
    v7,
    (unsigned __int64)a2,
    &v17,
    &v19,
    &v22);
  v10 = v17;
  if ( v17 != (__int64 *)v9 )
  {
    NtDeleteWnfStateName(v17 + 72);
    NtDeleteWnfStateName(v10 + 73);
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::erase(
      (__int64)v9,
      &v23,
      v10,
      (__int64 *)*v10);
  }
  RmpReleaseGlobalLock();
  if ( v8 )
    RmpObjectRelease(v8);
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v5 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v5 - 64));
    RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u && (byte_1800AB290 & 9) != 0 && (qword_1800AB298 & 9) == qword_1800AB298 )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a2);
    v12 = *((_DWORD *)a2 + 134);
    v33 = &v15;
    v14 = *((_DWORD *)a2 + 133);
    v35 = &v14;
    v37 = &v18;
    v15 = v12;
    v34 = v13;
    v36 = v13;
    v38 = 8LL;
    *(_DWORD *)&v21.Level = 516;
    v28.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&v21.Id = 184549376;
    v21.Keyword = 9LL;
    v28.Size = *(unsigned __int16 *)off_1800AB288;
    v29 = &unk_180092BB7;
    v28.Reserved = 2;
    v30 = 73;
    v31 = 1;
    LODWORD(P) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &v21, 0LL, 0LL, 6u, &v28);
  }
}
