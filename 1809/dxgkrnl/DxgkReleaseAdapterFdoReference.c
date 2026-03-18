/*
 * XREFs of DxgkReleaseAdapterFdoReference @ 0x1C01C841C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C0266BAC (DpiFdoResetFdo.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0010860 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterFdoReference(DXGADAPTER *a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    *((_QWORD *)a1 + 24) = 0LL;
    *((_QWORD *)a1 + 25) = 0LL;
    DXGADAPTER::ReleaseReferenceNoTracking(a1);
    return 0LL;
  }
  else
  {
    v1 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v1 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v1);
    return 3221225485LL;
  }
}
