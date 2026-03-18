/*
 * XREFs of DxgkInvalidateHwContextCB @ 0x1C003EC00
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkInvalidateHwContextCB(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 DxgAdapter; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax

  if ( KeGetCurrentIrql() )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 1225LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)a1, a2, a3);
  if ( !*(_QWORD *)(DxgAdapter + 2560) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
    v8[5] = 0LL;
    v8[6] = 0LL;
    v8[7] = 0LL;
    v8[3] = 275LL;
    v8[4] = 7LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  if ( *(int *)(DxgAdapter + 2184) < 9472 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v9 + 24) = 1238LL;
    WdLogEvent5_WdAssertion(v9);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 2560) + 520LL)
                                                               + 8LL)
                                                   + 256LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
           *(unsigned int *)(a1 + 16));
}
