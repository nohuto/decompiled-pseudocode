/*
 * XREFs of ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x18003080C
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025B20 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18002FF98 (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@1@2AEA_K@Z @ 0x180030970 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HO.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CommitMemoryLimitChange(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  char *v5; // rbx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // [rsp+30h] [rbp-91h] BYREF
  __int64 v10; // [rsp+38h] [rbp-89h] BYREF
  __int64 v11; // [rsp+40h] [rbp-81h] BYREF
  __int64 v12; // [rsp+48h] [rbp-79h] BYREF
  _BYTE v13[8]; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v14[8]; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-41h] BYREF
  unsigned int *v17; // [rsp+A0h] [rbp-21h]
  int v18; // [rsp+A8h] [rbp-19h]
  int v19; // [rsp+ACh] [rbp-15h]
  char *v20; // [rsp+B0h] [rbp-11h]
  int v21; // [rsp+B8h] [rbp-9h]
  int v22; // [rsp+BCh] [rbp-5h]
  __int64 *v23; // [rsp+C0h] [rbp-1h]
  int v24; // [rsp+C8h] [rbp+7h]
  int v25; // [rsp+CCh] [rbp+Bh]
  __int64 *v26; // [rsp+D0h] [rbp+Fh]
  int v27; // [rsp+D8h] [rbp+17h]
  int v28; // [rsp+DCh] [rbp+1Bh]
  unsigned __int64 *v29; // [rsp+E0h] [rbp+1Fh]
  int v30; // [rsp+E8h] [rbp+27h]
  int v31; // [rsp+ECh] [rbp+2Bh]

  v10 = 0LL;
  v5 = (char *)this + 192;
  v11 = a3;
  v12 = a4;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (_DWORD)this + 192,
    (_DWORD)a2,
    (_DWORD)a2,
    (unsigned int)&v10,
    (__int64)v14,
    (__int64)v13);
  if ( (char *)v10 == v5 )
    return 0LL;
  v8 = *(_QWORD *)(v10 + 584);
  v15[0] = v11;
  v15[1] = v12;
  v15[2] = a5;
  result = RtlPublishWnfStateData(v8, 0LL, v15, 24LL, 0LL);
  v9 = result;
  if ( hProvider > 5u )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v17 = &v9;
    v20 = (char *)a2 + 544;
    v23 = &v11;
    v26 = &v12;
    v29 = &a5;
    v18 = 4;
    v21 = 8;
    v24 = 8;
    v27 = 8;
    v30 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008517D, 0LL, 0LL, 7u, &pData);
    result = v9;
  }
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
