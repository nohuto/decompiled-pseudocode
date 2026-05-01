/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180064644
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180064CD8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x1800385B4 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800390E4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005B194 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005BA38 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006125C (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyActOnHosts(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v8; // rsi
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // r14
  char *v13; // rdi
  __int64 v14; // rbx
  char *v15; // rsi
  int v16; // eax
  int v17; // r8d
  int v18; // r11d
  __int64 v19; // rdx
  int v20; // eax
  int v21; // r8d
  char v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // r11d
  char v25; // [rsp+30h] [rbp-89h]
  char v26; // [rsp+31h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-85h]
  __int64 v28; // [rsp+38h] [rbp-81h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v29; // [rsp+40h] [rbp-79h]
  unsigned __int8 *v30; // [rsp+48h] [rbp-71h]
  unsigned __int8 *v31; // [rsp+50h] [rbp-69h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-39h]
  __int64 v34; // [rsp+88h] [rbp-31h]
  char *v35; // [rsp+90h] [rbp-29h]
  __int64 v36; // [rsp+98h] [rbp-21h]
  char *v37; // [rsp+A0h] [rbp-19h]
  __int64 v38; // [rsp+A8h] [rbp-11h]

  v8 = a8;
  v10 = 0;
  v29 = a6;
  v11 = *(_QWORD *)a1;
  v27 = a3;
  v30 = a7;
  v31 = a8;
  v12 = *(_QWORD *)(v11 + 24) + 400LL;
  *a7 = 0;
  *a8 = 0;
  v25 = 0;
  if ( a3 )
  {
    v13 = (char *)a2 + 24;
    do
    {
      v14 = *((_QWORD *)v13 + 3);
      if ( *((__int16 *)v13 + 18) >= 0 )
      {
        if ( !RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)v13 + 3)) )
          return;
        if ( (a5 & 8) != 0 )
        {
          RmpPolicyComputeDesiredEmptyState(v12, v14, 2);
          if ( (a5 & 4) == 0 )
            *v8 = 1;
          v16 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v14 + 48) + 400LL, v14, 1);
          v19 = (unsigned int)(v17 + 31);
          if ( (v16 & *(_DWORD *)(v14 + 1188)) != v16 )
            v19 = (unsigned int)(v17 + 23);
        }
        else
        {
          v20 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v14 + 48) + 400LL, v14, 1);
          if ( (v20 & *(_DWORD *)(v14 + 1188)) == v20 )
          {
            if ( v25 )
              return;
            v18 = RmpPolicyComputeDesiredEmptyState(v12, v14, 2);
            if ( (a5 & 4) == 0 )
              *v8 = 1;
            v19 = 32LL;
          }
          else
          {
            v18 = RmpPolicyComputeDesiredEmptyState(v12, v14, v21);
            v25 = v22;
            v19 = 24LL;
          }
        }
        *(_DWORD *)(v14 + 1412) |= v18;
        v15 = &v13[v19 - 24];
        if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
        {
          v28 = *(_QWORD *)(v14 + 32);
          v33 = &v28;
          v34 = 8LL;
          v37 = &v26;
          v35 = v15;
          v36 = 8LL;
          v26 = v23 & (v24 >> 5);
          v38 = v23;
          TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008844E, 0LL, 0LL, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v14, v29);
        RmpActivityHostCheckQueueWork(*((struct _RM_ACTIVITY_HOST **)v13 + 3));
      }
      else
      {
        if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
        {
          v28 = *(_QWORD *)(v14 + 32);
          v33 = &v28;
          v37 = v13 - 24;
          v34 = 8LL;
          v35 = v13;
          v36 = 8LL;
          v38 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180087F39, 0LL, 0LL, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v14, v29);
        RmpActivityHostRevokeResourceSets(v14, 3, 4u, 0LL);
        v15 = v13;
      }
      *v30 = 1;
      if ( (a5 & 2) != 0 )
        break;
      if ( *(_QWORD *)v15 > a4 )
        break;
      a4 -= *(_QWORD *)v15;
      ++v10;
      v8 = v31;
      v13 += 64;
    }
    while ( v10 < v27 );
  }
}
