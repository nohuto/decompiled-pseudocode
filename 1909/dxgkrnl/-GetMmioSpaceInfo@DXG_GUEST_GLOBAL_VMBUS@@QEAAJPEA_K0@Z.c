/*
 * XREFs of ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C0219ACC
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01EDB44 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(
        DXG_GUEST_GLOBAL_VMBUS *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rax

  ((void (__fastcall *)(_QWORD))qword_1C00A3C30)(*(_QWORD *)this);
  v8 = *((_QWORD *)DXGGLOBAL::GetGlobal(v6, v5) + 170);
  if ( *a3 >= v8 && *a2 )
    return 0LL;
  v11 = WdLogNewEntry5_WdError(v8, v7, v9);
  *(_QWORD *)(v11 + 24) = 9041LL;
  WdLogEvent5_WdError(v11);
  return 3221225485LL;
}
