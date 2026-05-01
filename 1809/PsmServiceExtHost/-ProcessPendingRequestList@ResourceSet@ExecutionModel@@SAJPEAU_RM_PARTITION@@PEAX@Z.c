/*
 * XREFs of ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001F260
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001270C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180013338 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180017F54 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18001E258 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x18001E2C0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001E720 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800390E4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180055BE4 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180061824 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180061AF0 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x180061C7C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ProcessPendingRequestList(struct _RM_PARTITION *a1, void *a2)
{
  __int64 *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r8d
  int v12; // r15d
  __int64 v13; // rdx
  char v14; // r14
  unsigned int v15; // edx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // [rsp+48h] [rbp-C0h] BYREF
  char v21; // [rsp+49h] [rbp-BFh] BYREF
  char v22; // [rsp+4Ah] [rbp-BEh] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD Block[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v27[48]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v28[128]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v29[3]; // [rsp+138h] [rbp+30h] BYREF
  char v30; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+188h] [rbp+80h] BYREF
  void *v32; // [rsp+198h] [rbp+90h]
  int v33; // [rsp+1A0h] [rbp+98h]
  int v34; // [rsp+1A4h] [rbp+9Ch]
  EVENT_DATA_DESCRIPTOR v35; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v36; // [rsp+1C8h] [rbp+C0h]
  __int64 v37; // [rsp+1D0h] [rbp+C8h]
  unsigned __int64 *v38; // [rsp+1D8h] [rbp+D0h]
  __int64 v39; // [rsp+1E0h] [rbp+D8h]
  char *v40; // [rsp+1E8h] [rbp+E0h]
  __int64 v41; // [rsp+1F0h] [rbp+E8h]
  __int64 v42; // [rsp+1F8h] [rbp+F0h]
  __int64 v43; // [rsp+200h] [rbp+F8h]
  __int64 v44; // [rsp+208h] [rbp+100h]
  __int64 v45; // [rsp+210h] [rbp+108h]
  char *v46; // [rsp+218h] [rbp+110h]
  __int64 v47; // [rsp+220h] [rbp+118h]
  __int64 *v48; // [rsp+228h] [rbp+120h]
  __int64 v49; // [rsp+230h] [rbp+128h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+238h] [rbp+130h] BYREF

  v2 = Block;
  v3 = (_QWORD *)((char *)a1 + 200);
  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( dword_18009B0B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800878DB, 0LL, 0LL, 2u, &pData);
    v6 = *((_QWORD *)a1 + 3);
    RmpPolicyPrepareToCheckMetrics(
      a1,
      (struct _RM_POLICY *)(v6 + 400),
      (struct _RM_RESOURCE_USAGE_LIMITS *)v28,
      (struct _RM_SYSTEM_MEMORY_METRICS *)v29);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 2688) + 48LL);
    while ( (_QWORD *)*v3 != v3 )
    {
      v8 = *(_QWORD *)(*v3 - 32LL);
      v9 = *(_QWORD *)(v8 + 1440);
      v23 = 0LL;
      if ( !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v8 + 1456)) )
        RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v9, &v23);
      v12 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(v8 + 1432), v10, v11);
      if ( dword_18009B0B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v37 = 8LL;
        v38 = &v23;
        v36 = v8 + 224;
        v40 = &v30;
        v42 = v8 + 248;
        v44 = v7 + 248;
        v46 = &v21;
        v25 = *(_QWORD *)(v8 + 1872);
        v48 = &v25;
        v39 = 8LL;
        v41 = 8LL;
        v43 = 8LL;
        v45 = 8LL;
        v21 = v12;
        v47 = v13;
        v49 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180087239, 0LL, 0LL, 9u, &v35);
      }
      RmpPolicyInitializeRevokeContext(*(_QWORD *)(*(_QWORD *)(v8 + 1432) + 64LL), Block, v8, v27);
      if ( (int)ExecutionModel::ResourceSet::EvaluateResourceRequest(v8, v23, 1, (__int64)v28, v29, v27, &v20, &v22) < 0 )
        break;
      v14 = v22;
      v15 = !v20 && !v22;
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v8, v15, v12 == 0);
      if ( v20 || v14 || v12 )
      {
        RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v27);
        break;
      }
      v16 = *(_DWORD *)(v8 + 1452);
      if ( (v16 & 4) == 0 )
      {
        *(_DWORD *)(v8 + 1452) = v16 | 4;
        RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v9, 1u);
      }
      if ( (*(_BYTE *)(v9 + 812) & 1) == 0 && RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v9) )
        break;
      ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)v8, 1);
    }
    v2 = (__int64 *)Block[0];
  }
  if ( dword_18009B0B0 <= 5u || (qword_18009B0C0 & 1) == 0 || (qword_18009B0C8 & 1) != qword_18009B0C8 )
    goto LABEL_3;
  *(_DWORD *)&EventDescriptor.Level = 517;
  UserData.Ptr = (ULONGLONG)off_18009B0B8;
  *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180087217 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  EventDescriptor.Keyword = 1LL;
  UserData.Size = *(unsigned __int16 *)off_18009B0B8;
  v32 = &unk_180087222;
  UserData.Reserved = 2;
  v33 = 22;
  v34 = 1;
  EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  while ( 1 )
  {
    v2 = (__int64 *)Block[0];
LABEL_3:
    if ( v2 == Block )
      break;
    v17 = (__int64 *)v2[1];
    v18 = *v2;
    *v17 = *v2;
    *(_QWORD *)(v18 + 8) = v17;
    v19 = v2[2];
    if ( v19 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v19 + 16LL))(v19, a2);
    operator delete(v2);
  }
  return 0LL;
}
