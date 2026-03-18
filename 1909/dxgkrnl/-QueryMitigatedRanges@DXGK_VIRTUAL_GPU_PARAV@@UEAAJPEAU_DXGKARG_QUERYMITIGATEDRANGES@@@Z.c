/*
 * XREFs of ?QueryMitigatedRanges@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1C0215AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::QueryMitigatedRanges(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_QUERYMITIGATEDRANGES *a2,
        __int64 a3)
{
  __int64 v4; // rax

  if ( !a2->NumRanges )
    return 0LL;
  v4 = WdLogNewEntry5_WdError(this, a2, a3);
  *(_QWORD *)(v4 + 24) = a2->NumRanges;
  WdLogEvent5_WdError(v4);
  return 3221225485LL;
}
