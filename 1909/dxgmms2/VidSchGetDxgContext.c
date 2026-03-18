/*
 * XREFs of VidSchGetDxgContext @ 0x1C00CB280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDxgContext(__int64 a1)
{
  if ( !a1 || *(_DWORD *)(a1 + 888) )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 56);
}
