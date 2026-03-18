/*
 * XREFs of ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C01E9B24
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01BDF0C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(
        DXG_GUEST_GLOBAL_VMBUS *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v8; // rax

  ((void (__fastcall *)(_QWORD))qword_1C008FC10)(*(_QWORD *)this);
  v6 = *((_QWORD *)DXGGLOBAL::GetGlobal(v5) + 174);
  if ( *a3 >= v6 && *a2 )
    return 0LL;
  v8 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v8 + 24) = 9075LL;
  WdLogEvent5_WdError(v8);
  return 3221225485LL;
}
