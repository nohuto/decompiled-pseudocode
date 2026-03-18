/*
 * XREFs of DxgkInvalidateHwContextCB @ 0x1C0038640
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkInvalidateHwContextCB(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 DxgAdapter; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rax

  if ( KeGetCurrentIrql() )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v2 + 24) = 1221LL;
    WdLogEvent5_WdAssertion(v2);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)a1);
  if ( !*(_QWORD *)(DxgAdapter + 2528) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3);
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[3] = 275LL;
    v5[4] = 7LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  if ( *(int *)(DxgAdapter + 2160) < 9472 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v6 + 24) = 1234LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 2528) + 520LL)
                                                               + 8LL)
                                                   + 256LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
           *(unsigned int *)(a1 + 16));
}
