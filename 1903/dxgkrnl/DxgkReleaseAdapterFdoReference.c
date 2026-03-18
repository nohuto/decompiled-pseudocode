/*
 * XREFs of DxgkReleaseAdapterFdoReference @ 0x1C01F6C98
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C02A247C (DpiFdoResetFdo.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterFdoReference(DXGADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  if ( a1 )
  {
    *((_QWORD *)a1 + 24) = 0LL;
    *((_QWORD *)a1 + 25) = 0LL;
    DXGADAPTER::ReleaseReferenceNoTracking(a1);
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
}
