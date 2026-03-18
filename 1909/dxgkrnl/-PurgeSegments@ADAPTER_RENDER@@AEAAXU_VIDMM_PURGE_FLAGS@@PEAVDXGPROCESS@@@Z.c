/*
 * XREFs of ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0148E74
 * Callers:
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0148D70 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0159A1C (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F6400 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01F6870 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ADAPTER_RENDER::PurgeSegments(struct _EX_RUNDOWN_REF *a1, unsigned int a2, __int64 a3)
{
  DXGADAPTER *Count; // rcx
  int v7; // edi
  char result; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax

  Count = (DXGADAPTER *)a1[2].Count;
  v7 = a2 & 8;
  if ( (a2 & 8) != 0 )
  {
    result = DXGADAPTER::IsCoreResourceSharedOwner(Count);
    v11 = 0LL;
    if ( result )
      goto LABEL_3;
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v17 + 24) = 3006LL;
  }
  else
  {
    result = DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)Count);
    v11 = 0LL;
    if ( result )
      goto LABEL_3;
    v17 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v17 + 24) = 3010LL;
  }
  result = WdLogEvent5_WdAssertion(v17);
LABEL_3:
  v12 = a1[69].Count;
  if ( v12 )
  {
    if ( !v7 )
    {
      ExWaitForRundownProtectionRelease(a1 + 136);
      ExReInitializeRundownProtection(a1 + 136);
      v12 = a1[69].Count;
    }
    v13 = a1[68].Count;
    if ( a3 )
    {
      v14 = *(_QWORD *)(a3 + 72);
      if ( v14 )
        v11 = *(_QWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)v13 - 1));
    }
    return (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(v13 + 8) + 80LL))(v12, a2, v11);
  }
  return result;
}
