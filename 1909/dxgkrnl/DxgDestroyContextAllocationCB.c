/*
 * XREFs of DxgDestroyContextAllocationCB @ 0x1C0154890
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00143BC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgDestroyContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DxgAdapter; // rbx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // rax
  _QWORD *v14; // rax
  _BYTE v15[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v15);
  if ( KeGetCurrentIrql() )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v13 + 24) = 204LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DxgAdapter = DpiGetDxgAdapter(a1, v4, v6);
  v10 = *(_QWORD *)(DxgAdapter + 2560);
  if ( !v10 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
    v14[5] = 0LL;
    v14[6] = 0LL;
    v14[7] = 0LL;
    v14[3] = 275LL;
    v14[4] = 7LL;
    WdLogEvent5_WdCriticalError(v14);
    v10 = *(_QWORD *)(DxgAdapter + 2560);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v10 + 544) + 8LL) + 656LL))(
          *(_QWORD *)(v10 + 552),
          a2);
  if ( v15[0] )
    KeUnstackDetachProcess(&ApcState);
  return v11;
}
